#include <iostream>
//#include <vector>
#include <string> // must include this to use strings
#include <cmath> // must include this to use math functions

using namespace std;

int main()
{
    /* vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl; */

    cout << "Hello World!";
    int myNum = 16;
    double myDub = 16.76;
    char woo = 'l';
    string chin = "why"; // must include the string library for this 
    bool b = false;
    int x, y, z;
    x = y = z = 5;
    const float PI = 3.14;

    cout << "Print out!";
    int x;
    cin >> x;
    cout << "You inputted: " << x;

    float y = 35e3; // e = 10^ --> 35 * 10^3
    double z = 34e2; // double are more precise than floats
    
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c; // would lead to ABC due to ASCII
    
    int x = 5; //0101
    x <<= 3;  //shifts the bits value to the left by 3 digits
    cout << x; // 40 = 00101000
    x = 5;
    x >>=3; //shifts the bits to the right by 3 digits
    cout << x; // 0

    // the & being a bitwise AND and the | being a bitwise OR.
    x &= 3;
    x |= 3;

    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    // OR
    fullName = firstName.append(lastName);

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num = txt.length(); // same function as txt.size()
    txt[0]; // A

    // STRINGS ARE MUTABLE
    txt[0] = 'C';
    cout << txt;

    cin >> firstName; 
    // important to know: STRINGS CONSIDER SPACES AS END OF INPUT, SO CAN ONLY INPUT ONE WORD
    // therefore, use:
    getline (cin, fullName);

    // must include the math header to use math functions
    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);

    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    // variable = (condition) ? expressionTrue : expressionFalse;
    string result = (time < 18) ? "Good day." : "Good evening.";
    // this will do the same thing as:
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    // switch statements
    int day = 4;
    switch (day) {
        case 6:
            cout << "Today is Saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default: //will run only if the other cases don't run
            cout << "Looking forward to the Weekend"; 
            //break is not needed in the default sentence
    }

    //while loop
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    //do while --> it will execute once before checking if the condition passes
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    // for loop
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    // for each
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // this will skip 4 and do the rest of the block
            break; // this will jump out of the loop at i=4 and i=4+ will not run
        }
        cout << i << "\n";
    }
    
    //arrays 
    string cars[4];
    // after  initiation, can't do cars={"Volvo", "BMW", "Ford", "Mazda"}; but can do:
    cars[0] = "Volvo";
    cars[1] = "BMW";

    // don't have to specify the size of the array at initiation --> the compiler will create it
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};


    // can do a regular for loop
    for (string car : cars) { //short way of looping through the array
        cout << car << "\n";
    }

    // how to get the length of an array:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    //hence, gotta do this:
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << "\n"; // or use the for each loop without getting the length of an array
    }


    struct {                // Structure declaration
        int myNum;          // Member (int variable)
        string myString;    // Member (string variable)
    } myStruct1, myStruct2, myStruct3;          // Multiple structure variables separated with commas

    // Assign values to members of myStructure
    myStruct1.myNum = 1;
    myStruct1.myString = "Hello World!";


    struct myDataType { // This structure is named "myDataType"
        int myNum;
        string myString;
    };

    myDataType myVar1;
    myDataType myVar2;


    //references
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    string food = "Pizza";
    cout << &food; // Outputs 0x6dfed4

    //pointer 
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
    
    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    //can edit the original value through the reference
    *ptr = "Hamburger"; //food now stores "Hamburger"


    //functions
    //either define the functions at the top of the code (can't use the function before you define it)
    //or declare the function at the top of the code (can use it after this)
    string myFunction(string country = "China", int times = 1);
    //main function
    string exInSw = myFunction("Sweden", 2);
    myFunction("India", 3);
    myFunction(); //will output China and 1 as the default value
    // can't do one default value and one non default value, it seems
    myFunction("USA", 1);

    void swapNums(int &x, int&y);
    int firstNum = 10;
    int secondNum = 20;
    swapNums(firstNum, secondNum);

    return 0;

}
//function definition - has to be outside main
//returns string
string myFunction(string country = "China", int times = 1) { // China is the default value if not passed in
        return "I just got executed in " + country + "!";
        //if no return value, could do:
    }
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
