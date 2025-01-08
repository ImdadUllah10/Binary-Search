
#include <iostream>
#include <algorithm> // Include algorithm library for sort function
using namespace std;

int main() {
    // Binary search
    int array[6] = {85, 80, 90, 66, 77, 66}; // Initialize the array
    int n = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    int target; // Declare the target element to be searched

    // Sort the array using the sort function from <algorithm>
    sort(array, array + n);

    // Display the sorted array
    cout << "Array in ascending order is: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " "; // Print each element of the sorted array
    }
    cout << endl;

    cout << "ENTER TARGET: "; // Prompt user to enter the target
    cin >> target;

    int low = 0; // Start index of the array
    int high = n - 1; // End index of the array
    int found = -1; // Variable to store the index of the target, -1 if not found

    for (int i = 0; i < n; i++) { // Binary search logic
        int mid = low + (high - low) / 2; // Calculate the middle index

        if (array[mid] == target) { // Check if the middle element is the target
            found = mid; // Store the index of the target
        } else if (array[mid] < target) { // If target is greater, move to the right half
            low = mid + 1;
        } else { // If target is smaller, move to the left half
            high = mid - 1;
        }

        // Output the result for each iteration
        if (found != -1) {
            cout << "Target " << target << " found at index " << found << endl;
            break; // Exit the loop when found
        } else if (i == n - 1) {
            cout << "Target " << target << " not found" << endl;
        }
    }

    return 0; // End of the program
}
