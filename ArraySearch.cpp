#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the size of the array: " << endl;
    cin >> a;

    int arr[a];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: " << endl;
    int num;
    cin >> num;

    int temp = -1;
    for (int i = 0; i < a; i++) {
        if (arr[i] == num) {
            cout << "Element found at index " << i << endl;
            temp = 0;
            break;
        }
    }

    if (temp == -1) {
        cout << "Element not found" << endl;
    }

    return 0;
}
