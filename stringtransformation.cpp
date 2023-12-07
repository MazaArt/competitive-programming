#include <bits/stdc++.h>
using namespace std;

int main()
{
    char check = 'a'; 
    string input;
    cin >> input;
    
    for(int i = 0; i < input.length() && check <= 'z'; i++){
        if(input[i] <= check){
            input[i] = check;
            check++;
        }
    }
    
    if (check <= 'z'){
        cout << -1;
    }
    else {
        cout << input;
    }

    return 0;
}