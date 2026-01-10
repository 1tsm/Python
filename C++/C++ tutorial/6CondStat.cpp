#include <iostream>
#include <string>
using namespace std;



//Coditional Statements
int main(){
    string a,b,c;
    
    cout << "Ingiliz tilidan bahoingizni kiriting: ";
    getline(cin,a);
    cout << "Matematikadan ham bahoingizni kiriting: ";
    getline(cin,b);
    cout << "Ona tilidan ham bahoingizni kiriting: ";
    getline(cin,c);
    
    string m1 = "A'lo";
    string m2 = "Qoniqarli";
    string m3 = "Qoniqarsiz";
    
    /* ------------------------------------------------------------------------------------------------------- */
    
    //if condition
    if (a.empty()) //In CPP , we can skip {} (curly brasses), when if statement include only line.
        cout << "Baho kiritilmadi \n Natijani bilish uchun dasturni qaytadan ishga tushuring" << endl;
    
    //Xato
    // if(b.empty())
    //     cout << "Salom" << endl;
    //     cout << 'Saloom'; 
    
    /* ------------------------------------------------------------------------------------------------------- */
    
    int x = stoi(a), y = stoi(b), z = stoi(c); //stoi() str => int | stof str => float | stod str => double | stoll str => long long
    
    //if else condition
    if (x == 5)
        cout << "Ingiliz tilidan " << m1 << " darajada o'qiysiz" << endl;
    else
        cout << "Ingiliz tilidan " << m1 << " darajada o'qimaysiz" << endl;
    
    /* ------------------------------------------------------------------------------------------------------- */
    
    //if else if Ladder
    if (x >= 5)
        cout << "Ingiliz tilidan " << m1 << " darajada o'qiysiz" << endl;
    else if (x < 5 & x > 3)
        cout << "Ingiliz tilidan " << m2 << " darajada o'qiysiz" << endl;
    else
        cout << "Ingiliz tilidan " << m3 << " darajada o'qiysiz" << endl;
    
    /* ------------------------------------------------------------------------------------------------------- */
    
    // Nested if else
    if (!a.empty()){
        if (x >= 5)
            cout << "Ingiliz tilidan " << m1 << " darajada o'qiysiz" << endl;
        else if (x < 5 & x > 3)
            cout << "Ingiliz tilidan " << m2 << " darajada o'qiysiz" << endl;
        else
            cout << "Ingiliz tilidan " << m3 << " darajada o'qiysiz" << endl;
    } 
    
    else 
        cout << "Baho kiritilmadi \n Natijani bilish uchun dasturni qaytadan ishga tushuring" << endl;
    
    /* ------------------------------------------------------------------------------------------------------- */
    
    //Switch Case
    switch (x) {
        case 5:
            cout << "Ingiliz tilidan " << m1 << " darajada o'qiysiz" << endl;
            break;
        case 4:
            cout << "Ingiliz tilidan " << m2 << " darajada o'qiysiz" << endl;
            break;
        case 3:
            cout << "Ingiliz tilidan " << m3 << " darajada o'qiysiz" << endl;
            break;
        case 2:
            cout << "Ingiliz tilidan yomon darajada o'qiysiz" << endl;
            break;
    }
    
    //Ternary Operator
    // expression ? true_case : false_case;
    string result = (x >= 5) ? m1 : (x < 5 & x > 3) ? m2 : m3;
    cout << "Ingiliz tilidan " << result << " darajada o'qiysiz" << endl;
    //simple sample
    int num = 10;
    string res = (num % 2 == 0) ? "Juft son" : "Toq son";
    cout << num << " - " << res << endl; // 10 - Juft son
    
    return 0;
}