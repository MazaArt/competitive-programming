#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, a, two;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a;
            two = floor(log2(a));
            two = pow(2, two);
            cout << to_string(two) + " ";
        }
        cout << "\n";
    }
    return 0;
}