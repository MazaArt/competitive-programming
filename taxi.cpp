#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int count[5] = {0}; 
    int c;
    while (number--){
        cin >> c;
        count[c]++;
    }
    int counter = count[4] + count[3] + count[2]/2;
    count[1] -= count[3];
    if (count[2] % 2 == 1) {
        count[1] -= 2;
        counter++;
    }
    if(count[1] > 0){
        counter += (count[1] + 3) / 4;
        // add 3 to account for round down
    }
    cout << counter;
    return 0;
}