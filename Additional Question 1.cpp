//Additional Question 1
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the number of elements in array : ";
	int n;
	cin>>n;
	
	int A[n];
	for(int i=0; i<n; i++){
		cout<<endl<<"Enter element : ";
		cin>>A[i];
	}
	
	int result[n];
    int st[n];
	int top = -1;

    for (int i = 0; i < n; i++) {
        while (top >= 0 && st[top] >= A[i]) {
            top--;
        }

        if (top == -1) {
            result[i] = -1;
        } else {
            result[i] = st[top];
        }

        st[++top] = A[i];
    }

    cout << "Nearest smaller to left: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

	return 0;
}
