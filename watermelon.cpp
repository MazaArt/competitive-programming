#include <bits/stdc++.h>
using namespace std;

int main()
{
    int weight;
    cin >> weight;
    for (int i = 2; i < weight/2 + 1; i += 2){
        if ((weight - i) % 2 == 0){
            cout << "YES";
            return 0;
        } 
    }
    cout << "NO";
    return 0;
}