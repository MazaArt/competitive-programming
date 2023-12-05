#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberParticipants, k;
    int i = 0;
    cin >> numberParticipants >> k;
    int scores[numberParticipants];
    while(i < numberParticipants){
        cin >> scores[i];
        i++;
    }
    
    i = 0;
    while(scores[i] >= scores[k-1] && i < numberParticipants) {
        if (scores[i] == 0){
            cout << i;
            return 0;
        }
        i++;
    }
    cout << i; 

    return 0;
}