#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n; 
    int a, b, c, k;
    while (n--){
        cin >> a >> b >> c;
        
        if ((a + b + c) % 9 != 0) {
            cout << "No\n";
        }
        else{
            k = (a + b + c) / 9;
            if ((a >= k) && (b >= k) && (c >= k)) {
                cout << "Yes\n";
            } 
            else {
                cout << "No\n";
            }
        }
    }
    return 0;
}