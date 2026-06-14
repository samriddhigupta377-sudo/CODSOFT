#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;

    cout << "=== Simple Calculator ===" << endl;

    cout << "Enter first no.:";
    cin >> num1;

    cout << "Enter operator(+,-,*,/):";
    cin >> op;
    
    cout << "Enter second no.:";
    cin >> num2;

    switch(op)
    {
        case '+':
             cout << "Result = " << num1 + num2;
             break;

        case '-':
             cout << "Result = " << num1 - num2;
        
        case '*':
            cout << "Resutlt = " << num1 * num2;
     
        case '/':
             if(num2!=0)
                cout << "Result = " << num1/num2;
            else
                cout << "Division by zero not possible";
                break;

        default:
            cout << "Invalid operator";
    }

return 0;
}