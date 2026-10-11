#include <iostream>
using namespace std;

int main() {
	
	int arr[] = {12, 5, 27, 8, 19};
	int i, max = arr[0];
	
	for (i=0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i]; 
		}
	}
return 0;
}
