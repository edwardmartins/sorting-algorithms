#include <vector>

using namespace std;

// MERGESORT
// -------------------------------------------------------------------------
/*

A single most important advantage of merge sort over quick sort 
is its stability: the elements compared equal retain their original order.

*/
/* 

- Best Case : O(n * logn)
- Average Case : O(n * logn)
- Worst Case : O(n * logn)

*/


void merge(vector <int> &v, int start, int mid, int end)
{
	vector <int> aux(v.size());
	int i = start;    // begin of the first part
	int j = mid + 1; // begin of the second part
	int k = start;  // start of the aux vector


	// Elements in both parts
	while (i <= mid && j <= end) {
		if (v[i] < v[j])
			aux[k] = v[i++];
		else
			aux[k] = v[j++];

		k++;
	}

	// Left part has elements
	while (i <= mid) {
		aux[k] = v[i++];
		k++;
	}

	// Right part has elements
	while (j <= end) {
		aux[k] = v[j++];
		k++;
	}

	// Copy the vector
	for (int i = start; i <= end; i++) {
		v[i] = aux[i];
	}

}


void mergeSort(vector <int> &v, int start, int end) {

	if (start < end) {
		int m = (start + end) / 2;
		mergeSort(v, start, m);
		mergeSort(v, m + 1, end);
		merge(v, start, m, end);
	}
}

