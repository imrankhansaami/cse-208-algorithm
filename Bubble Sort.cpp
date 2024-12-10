#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& array, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Flag to check if a swap occurred
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap array[j] and array[j + 1]
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, break
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size. Size must be greater than 0." << endl;
        return 1;
    }

    vector<int> array(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubbleSort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
