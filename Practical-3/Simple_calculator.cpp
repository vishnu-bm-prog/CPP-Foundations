#include <iostream>
using namespace std;
    int main() {
    double num1, num2;
    char opr;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> opr;
    cout << "Enter second number: ";
    cin >> num2;
    double result;
        if (opr == '+') result = num1 + num2;
        else if (opr == '-') result = num1 - num2;
        else if (opr == '*') result = num1 * num2;
        else if (opr == '/') result = num1 / num2;
        else {
            cout << "Invalid operator";
            return 0;
        }
    cout << "Result = " << result << endl;
    
    return 0;
}