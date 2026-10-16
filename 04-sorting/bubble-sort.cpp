#include <iostream>
using namespace std;
int main() {
    int arr[100] = {10, 69, 58, 32, 42, 71, 101, 3, 60};
    int n = 9;
    cout << "Unsorted array: " << endl;
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "\nSorted array: " << endl;
    for (int l = 0; l < n; l++) {
        cout << arr[l] << " ";
    }
return 0;
}
