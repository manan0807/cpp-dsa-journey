#include <iostream>
using namespace std;

int main() {
	int i,key = 69;
	int arr[] = {15, 81, 67, 33, 69, 84, 75, 99, 2};
	
	for (i=0; i < 9; i++) {
		if (arr[i] == key) {
			cout << "Element found at position" << i + 1 << endl; 
		}
	}
	else {
		cout << "Element not found!" << endl;
	}

return 0;
}