#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, input, positive = 0, negative = 0;
    cin >> number; 
    while(number--){
        cin >> input;
        if(input >= 0){
            positive += input;
        }
        else{
            negative += input;
        }
    }
    positive = positive - negative;
    cout << positive;
    return 0;
}