#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    long long a, b;
    cin >> a >> b;
    while (true){
        if (a == 0 || b == 0){
            break;
        } else if (a >= 2 * b){
            a %= 2 * b;
            continue;
        } else if (b >= 2 * a){
            b %= 2 * a;
            continue;
        }
        break;
    }
    cout << a << " " << b;
    return 0;
}