#include <vector>

using namespace std;

// BUBBLE SORT
//------------------------------------------------------- 
/*

- Worst Case : O(n^2)
- Average Case : O(n^2)
- Best Case : O(n)

*/

void bubbleSort(vector <int> &v, int n) {
	bool swapped = true;
	int i = 0;

	while (i < n - 1 && swapped) { // keep going while we swap in the unordered part

		swapped = false;

		for (int j = n - 1; j > i; j--) { // unordered part

			if (v[j] < v[j - 1]) {
				swap(v[j], v[j - 1]);
				swapped = true;
			}
		}

		i++;
	}
}


