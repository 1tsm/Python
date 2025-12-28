/*
1. C++ gives high level control over system resource and memory.
2. C++ is a crross-platform language used to develop applications that can run on multiple 
   operating systems with little or no modification.
3. C++ supports Object-Oriented Programming (OOP) which allows for better organization of code 
   through the use of classes and objects.

-----------------------------------------------------------------------------------------------
   
# Why use C++
1. C++ can be found today's operating systems, graphical user interfaces, and embedded systems.
2. C++ is an object-oriented programming language which gives a clear structure to programs and
allows code to be reused, lowering development costs
3. C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

-----------------------------------------------------------------------------------------------

#Differences between C and C++
1. C is a procedural programming language, while C++ is an object-oriented programming language.
*/ 

#include <iostream>
using namespace std; 

int main(){
    // Output
    cout << "Hello, LazyDuck!!! \n"; // \n -> new line
    cout << "Hello, Bro." << "\n" << "C++ is more interesting language"; // in one line we can write multiple outputs
    cout << "\n\n" << "C++ is more interesting language"; //double \n make two new lines
    cout << "\n" << 15 << endl; //15 & endl -> end line
    cout << 12*10 << endl; //120
    
    //Variables:
    // int -> 123
    // double -> 12.9, 15.6
    // char -> Character "D", "a"
    // string -> text
    // bool -> true, false
    int myage = 18;
    double myweight = 60.3;
    char letter = 'P';
    string name = "LazyDuck";
    bool male = true;
    
    cout << "Salom, Men " << name << "man. Yoshim " << myage << "da." << endl;
    
    //Multiple Variables:
    int a, b, d;
    a=b=d=50;
    int x = 50, y = 60, z = 80;
    cout << a << endl;
    cout << z << endl;
    
    //Constants
    const int MyName = 15;
    cout << MyName << endl;
    
    //Real Life examples
    
    //Students Data
    int StudentID = 120308;
    int StudentAge = 18;
    double StudentFee = 30.5;
    char StudentGrade = 'A';
    
    cout << "Your ID is " << StudentID << "\n";
    cout << "Your Age is " << StudentAge << "\n";
    return 0;
}
