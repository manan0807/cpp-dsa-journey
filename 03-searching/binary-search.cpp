#include <iostream>
using namespace std;

int main() {
	
	int arr[] = {12, 81, 95, 26, 84, 69, 74, 55, 6};
	int n = 9;
	int low=0, high = n-1;
	int key = 69;
	
	if (low <= high) {
		int mid = (low + (high - low)) / 2;
		
		if (mid == key) {
			cout << "Key found at position: " << mid << endl;
		}

		else if (mid < key) {
			low = mid + 1;
		}

		else {
			high = mid - 1;
		}
	}
return 0;
}
