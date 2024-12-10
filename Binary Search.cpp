#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

void binarySearch(const vector<int>& array, int key) {
    int low = 0, high = array.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow
        if (array[mid] == key) {
            cout << "The key: " << key << " is found at position: " << mid + 1 << endl;
            return;
        } else if (key > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "The key: " << key << " is not found in the array." << endl;
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

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    // Ensure the array is sorted
    sort(array.begin(), array.end());

    binarySearch(array, key);

    return 0;
}
