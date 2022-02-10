#include <iostream>
using namespace std;
int main()
{
    char opr;
    float num1, num2;
     
    cout << "Please select operation to be implemented:\n1.Addition 2.Subtraction 3.Multiplication 4.Division\n";
    cin >> opr;
    cout << "\nEnter two numbers to implement this operation:\n";
    cin >> num1 >> num2;
    switch(opr){
        case '1': 
                cout <<"\nResult: " num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '2':
                cout <<"\nResult: " num1 << " - " << num2 << " = " << num1-num2;
                break;
        case '3':
                cout <<"\nResult: " num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '4':
                cout <<"\nResult: " num1 << " / " << num2 << " = " << num1/num2;
                break;
        default: 
                cout<<"ERROR! Please select a valid operation.";
    }
    return 0;
}