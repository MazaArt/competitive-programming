#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mult = m * n;
    if (mult % 2 == 0){
        cout << mult/2;
    } else {
        cout << (mult - 1)/2;
    }

    return 0;
}