
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;  // Take array size first

    int array[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> array[i];
    }

    // Linear Search
    int num;
    cout << "Enter the Element to find: ";
    cin >> num;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (array[i] == num) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found in the array";
    }

    return 0;
}
