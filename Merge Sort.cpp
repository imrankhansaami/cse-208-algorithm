#include <iostream>
#include <vector>
using namespace std;

// Merge two subarrays into a single sorted array
void merge(vector<int>& array, int l, int mid, int r) {
    int i = l;        // Starting index for the left subarray
    int j = mid + 1;  // Starting index for the right subarray
    int k = l;        // Starting index for the temporary array

    vector<int> temp(r - l + 1);  // Temporary array

    while (i <= mid && j <= r) {
        if (array[i] <= array[j]) {
            temp[k - l] = array[i];
            i++;
        } else {
            temp[k - l] = array[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of the left subarray, if any
    while (i <= mid) {
        temp[k - l] = array[i];
        i++;
        k++;
    }

    // Copy remaining elements of the right subarray, if any
    while (j <= r) {
        temp[k - l] = array[j];
        j++;
        k++;
    }

    // Copy sorted elements back to the original array
    for (int p = l; p <= r; p++) {
        array[p] = temp[p - l];
    }
}

// Recursive function for merge sort
void mergeSort(vector<int>& array, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;  // Calculate midpoint to avoid overflow

        // Recursively sort first and second halves
        mergeSort(array, l, mid);
        mergeSort(array, mid + 1, r);

        // Merge the sorted halves
        merge(array, l, mid, r);
    }
}

// Print the array
void print(const vector<int>& array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
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

    mergeSort(array, 0, n - 1);

    cout << "Sorted array: ";
    print(array);

    return 0;
}
