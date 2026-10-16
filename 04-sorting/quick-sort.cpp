#include <iostream>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1, j;
    for (j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[right];
    arr[right] = temp;
    
    return i+1;
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int p = partition(arr, left, right);
        quicksort(arr, left, p-1);
        quicksort(arr, p+1, right);
    } 
}

int main() {
    int arr[100] = {10, 69, 58, 32, 42, 71, 101, 3, 60};
    int n = 9;
    cout << "Unsorted array: " << endl;
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    quicksort(arr, 0, n-1);
    cout << "\nSorted array: " << endl;
    for (int l = 0; l < n; l++) {
        cout << arr[l] << " ";
    }
return 0;
}
