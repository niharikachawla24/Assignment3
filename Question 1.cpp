#include <iostream>
using namespace std;

int MAX_SIZE = 50;
char stk[50];
int topIndex = -1;

void pushChar();
int checkFull();
int checkEmpty();
void popChar();
void showStack();
void topElement();

int main() {
    int choice;  
    while (1) { 
        cout << "Press:\n 1:Push \n 2:Pop \n 3:check if empty \n 4:check if full \n 5: display elements\n 6: use peek function \n 7 to exit\n";
        cin >> choice;
        cout << "\n";
        switch(choice) {
            case 1: pushChar(); break;
            case 2: popChar(); break;
            case 3: checkEmpty(); break;
            case 4: checkFull(); break;
            case 5: showStack(); break;
            case 6: topElement(); break;
        }
        if(choice == 7) break;
    }
    return 0;
} 

int checkFull() {
    if (topIndex == MAX_SIZE - 1) { 
        cout << "Overflow\n"; 
        return 1;
    } else return 0;
}

int checkEmpty() {
    if (topIndex == -1) { 
        cout << "Underflow\n"; 
        return 1;
    } else return 0;
}

void pushChar() { 
    char item;
    if (checkFull() == 0) {
        cout << "Enter character: "; 
        cin >> item;
        stk[++topIndex] = item;
    }
}

void popChar() {
    if (checkEmpty() == 0) {
        char item = stk[topIndex--];
        cout << "Popped: " << item << "\n";
    }
}

void showStack() {
    if (checkEmpty() == 1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements (top to bottom): ";
        for (int i = topIndex; i >= 0; i--) {
            cout << stk[i] << " ";
        }
        cout << "\n";
    }
}

void topElement() {
    if (checkEmpty() == 1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << stk[topIndex] << "\n";
    }
}
