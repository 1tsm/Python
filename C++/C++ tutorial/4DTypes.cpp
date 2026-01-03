/* Basic Data Types in C++
 ---------------------------------------------
 * integer types: int 
 * floating point types: float
 * character type: char
 * boolean type: bool
 * double type: double
 * string type: string
 * void type: null 
 ---------------------------------------------
 * Differences between float and double:
    * 1. Float includes 32 bits (4 bytes) while double includes 64 bits (8 bytes). Example: float f = 3.14f; double d = 3.14;
    * 2. Float has a precision of about 7 decimal digits, while double has a precision of about 15 decimal digits. Example: float f = 3.1415927f; double d = 3.141
 ---------------------------------------------
* Derived Data Types
----------------------------------------------
    * Array
    * Pointer
    * Reference
    * Function

* User Defined Data Types
    * Class
    * Structure
    * Union
    * Typedef
    * using 
*/


#include <iostream>
using namespace std;

int main(){
    
    //Automatic Type Deduction using 'auto' keyword
    auto num = 42; // num is deduced to be of type int
    auto fnum = 42.0f; // fnum is deduced to be of type float
    auto dnum = 42.0; // dnum is deduced to be of type double
    auto ch = 'A'; // ch is deduced to be of type char
    auto flag = true; // flag is deduced to be of type bool
    auto str = "Hello, World!"; // str is deduced to be of type const char*
    cout << num << endl;
    cout << fnum << endl;
    cout << dnum << endl;
    cout << ch << endl;
    cout << flag << endl;
    cout << str << endl;
    
    
    // Creating integer variable
    int var = 10;
    cout << var << endl;
    
    //Using hexadecimal base value
    int x = 0x15;
    cout << x << endl; 
    
    //Character Data Type
    char var1 = 'A';
    cout << var1 << endl;
    
    //Creating a boolean variable
    bool isTrue = true;
    cout << isTrue << endl;
    
    //Floating point variable with a decimal value
    float f = 36.5;
    cout << f << endl;
    
    //double precision floating point variable
    double pi = 3.141592653589793;
    cout << pi << endl;
    
    //Void type variable
    void* ptr = nullptr; // A void pointer can hold the address of any data type
    cout << ptr << endl;
   
   //Type Safety in C++
   //Assining float value to isTrue
   bool y = 10.555f;
   cout << y << endl; 
   
   // Data Type Conversation 
   int a = 15;
   char b = 'C';
   
   //Convert char data type into integer
   cout << (int) b << endl;
   
   int sum = a + b;
   cout << sum << endl;
   
   //Size of Data Types in C++
   cout << "Size of int " << sizeof(int) << " bytes" << endl;
   cout << "Size of float " << sizeof(float) << " bytes" << endl; 
   cout << "Size of double " << sizeof(double) << " bytes" << endl;
   cout << "Size of char " << sizeof(char) << " bytes" << endl;

   return 0;
}