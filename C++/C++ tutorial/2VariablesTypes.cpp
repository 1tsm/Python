#include <iostream>
using namespace std;

// int main(){
//     string x,y,z;
//     cout << "Iltimos ismingizni kiriting:";
//     cin >> x;
//     cout << "Endi Familyangizni: ";
//     cin >> y;
//     cout << "Endi Sharifingiz";
//     cin >> z;
    
//     cout << "Sizning FISH: " << x << y << z;
// }


int main(){
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
    const int StudentID = 120308;
    int StudentAge = 18;
    const double StudentFee = 30.5;
    char StudentGrade = 'A';
    
    cout << "Your ID is " << StudentID << "\n";
    cout << "Your Age is " << StudentAge << "\n";

}