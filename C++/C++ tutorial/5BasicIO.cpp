//Basic IO in C++
#include <iostream>
using namespace std;

int main(){
    // Standart Intput Stream
    string name;
    cin >> name;
    
    // Standart Output Stream 
    cout << name << endl;
    
    // Un-Buffered Standart Error Stream
    cerr  << "Bu yerda xatolik bor";
    
    //Buffered Standart Error Stream
    clog << "Bu yerda dastru sekin ishlayabdi";
    
    return 0;
}