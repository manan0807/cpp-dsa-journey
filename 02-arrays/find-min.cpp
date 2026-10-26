#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 3, 9, 2, 5};
    int n = 5;

    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Minimum element: " << minimum;

    return 0;
}
