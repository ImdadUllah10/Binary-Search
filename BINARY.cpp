


#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    bool found = false;

    for (int i = low; i <= high; i = (low + high) / 2) {
        if (arr[i] == target) {
            cout << "Target found at index " << i;
            found = true;
            break;
        } else if (arr[i] < target) {
            low = i + 1;
        } else {
            high = i - 1;
        }
    }

    if (!found) {
        cout << "Target not found";
    }

    return 0;
}
