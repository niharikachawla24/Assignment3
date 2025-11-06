#include <iostream>
using namespace std;

int main() {
    char expr[100];
    char stack[100];
    int top = -1;

    cout << "Enter an expression: ";
    cin >> expr;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            stack[++top] = expr[i];
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (top == -1) {
                cout << "Unbalanced expression";
                return 0;
            }
            char ch = stack[top--];
            if ((expr[i] == ')' && ch != '(') ||
                (expr[i] == '}' && ch != '{') ||
                (expr[i] == ']' && ch != '[')) {
                cout << "Unbalanced expression";
                return 0;
            }
        }
    }

    if (top == -1)
        cout << "Balanced expression";
    else
        cout << "Unbalanced expression";

    return 0;
}
