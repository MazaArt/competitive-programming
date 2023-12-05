#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inputLength;
    string word;
    string number;
    int wordLength;
    cin >> inputLength;
    while (inputLength > 0){
        cin >> word;
        wordLength = word.length();
        if (wordLength > 10){
            number = to_string(wordLength - 2);
            word = word[0] + number + word[wordLength - 1];
        }
        cout << word +"\n";
        inputLength--;
    }
    return 0;
}