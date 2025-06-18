#include <bits/stdc++.h>
using namespace std; 

int main(){
    //Printing
    cout << "Hello World!" << endl; // Print Hello World
    
    //input
    string name;
    cout << "Enter your name: ";
    cin >> name; // Take input from user
    cout << "Hello " << name << endl; // Print Hello + name

    // Data Types -> int, float, double, char, string
    int a = 10; // Integer
    float b = 10.5; // Float
    double c = 10.5; // Double
    char d = 'A'; // Character
    string e = "Hello"; // String

    //Conditional statements
    if(a > 10){
        cout << "a is greater than 10" << endl;
    } else if(a == 10){
        cout << "a is equal to 10" << endl;
    } else {
        cout << "a is less than 10" << endl;
    }
    
    //Switch case
    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch(choice){
        case 1:
            cout << "You chose 1" << endl;
            break;
        case 2:
            cout << "You chose 2" << endl;
            break;
        case 3:
            cout << "You chose 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    //Loops
    //for loop
    for(int i = 0; i < 5; i++){
        cout << "i is " << i << endl;
    }
    cout << endl; // Print a new line

    //while loop
    int i = 0;
    while(i < 5){
        cout << "i is " << i << endl;
        i++;
    }
    cout << endl; // Print a new line

    //do while loop
    i = 0;
    do{
        cout << "i is " << i << endl;
        i++;
    }while(i < 5);
    cout << endl; // Print a new line

    //Arrays
    int arr[5] = {1, 2, 3, 4, 5}; // Array of size 5
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " "; // Print array elements
    }
    cout << endl;

    //2d Arrays
    int arr2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 2D Array
    cout << "2D Array elements: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr2d[i][j] << " "; // Print 2D array elements
        }
        cout << endl;
    }

    // String
    string s = "Hello";
    int len = s.length(); // Length of string
    s[len-1] = 'a'; // Change last character
    cout << "String: " << s << endl; // Print string
    
    // Functions -> void, return type, parameterised,non-parameterised
    // void -> no return type 
    // return type -> return type
    // parameterised -> takes parameters
    // non-parameterised -> no parameters


    // Function parameters can be passed by value (copy) or by reference (using &)
    // Arrays decay to pointers when passed, but can also be passed by reference explicitly
    // STL containers like vector, map, and set can be passed by value or reference — it's your choice

}

