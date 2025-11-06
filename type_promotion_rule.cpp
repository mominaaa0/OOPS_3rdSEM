
// 25/09/25

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string expr;
    double num1 = 0, num2 = 0, result = 0;
    char op = 0;
    cout << "Enter an arithmetic expression (e.g., 5 + 3.2): ";
    getline(cin, expr);
    cout << "\nCharacter and ASCII values:\n";
    for (char c : expr) {
        if (c != ' ')
            cout << c << " --> " << int(c) << endl;
    }
    stringstream ss(expr);
    ss >> num1 >> op >> num2;
    cout << "\nOperand 1: " << num1 << " | Operand 2: " << num2 << " | Operator: " << op << endl;
    cout << "\nApplying type promotion rules...\n";
    if ((num1 - (int)num1 != 0) || (num2 - (int)num2 != 0))
        cout << "Operands promoted to double (floating-point operation)\n";
    else
        cout << "Both operands are integers (no promotion needed)\n";
    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator!\n";
            return 1;
    }
    cout << "\nResult after type promotion: " << result << endl;

    return 0;
}
