#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    // define required variables
    double a;
    double b;
    char opp;
    double result;

    // accepting user input in predefined variables
    cout << "Enter first digit: " << '\n';
    cin >> a;
    cout << "Enter second digit: " << '\n';
    cin >> b;
    cout << "Enter opperator(+,-,*,/,^): " << '\n';
    cin >> opp;

    // calculation of result according to the opperator
    switch(opp) {
        case '+':
            result = a+b;
            cout << result << endl;
            break;
        case '-':
            result = a-b;
            cout << result << endl;
            break;
        case '*':
            result = a*b;
            cout << result << endl;
            break;
        case '/':
            if(b != 0) {
                result = a/b;
                cout << result << endl;
            }
            else {
                cout << "Zero Division Error: Denominator cannot be zero" << endl;
            }
            break;
        case '^':
            result = pow(a,b);
            cout << result << endl;
            break;
        default:
            cout << "Error: Undefined Opperator";
            break;
    }

    return 0;
}