#include <iostream>
#include <vector>
using namespace std;

void Linear_Search(const vector<int>& arr, int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "The key element is found at index " << i << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "The element is not found in this array." << endl;
    }
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    Linear_Search(arr, n, key);
    return 0;
}
