#include <vector>

using namespace std;

// SELECTION SORT
//------------------------------------------------------- 
/*

- Worst Case : O(n^2)
- Average Case : O(n^2)
- Best Case : O(n^2)

*/

void selectionSort(vector <int> &v, int n) {

	int minPosition, aux;

	for (int i = 0; i < n - 1; i++) {

		minPosition = i; // suppose "i" is the min ( first in the unsorted part )

		for (int j = i + 1; j < n; j++) {

			if (v[j] < v[minPosition]) { // find the "min" element in the unsorted part
				minPosition = j;
			}
		}

		//  swap the found "min" element to the sorted part
		if (minPosition > i) { 

			swap(v[minPosition], v[i]);
		}
	}

}