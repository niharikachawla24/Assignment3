#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int A[n];
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int sorted[n];
    for (int i = 0; i < n; i++) sorted[i] = A[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sorted[j] < sorted[i]) {
                int t = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = t;
            }
        }
    }

    int stack[50];
    int top = -1;
    int j = 0;

    for (int i = 0; i < n; i++) {
        stack[++top] = A[i];
        while (top != -1 && stack[top] == sorted[j]) {
            top--;
            j++;
        }
    }

    if (j == n)
        cout << "YES, it is possible to form sorted B using the stack.\n";
    else
        cout << "NO, it is not possible to form sorted B using the stack.\n";

    return 0;
}
