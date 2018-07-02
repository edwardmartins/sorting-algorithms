#include <vector>

using namespace std;

// QUICKSORT
// -------------------------------------------------------------------------

// Partition function
int partition(vector <int> &v, int start, int end) {

	int pivot = start; // Take as a pivot the first element
	int i = start + 1;
	int j = end;

	while (i <= j) {

		// Elements smaller than the pivot move to the left side
		// and elements bigger that the pivot move to the right side
		if (v[i] > v[pivot] && v[j] < v[pivot]) {
			swap(v[i], v[j]);
		}
		// while value at the left side is less than pivot move right
		else if (v[i] <= v[pivot]) { i++; }
		// while value at the right side is greater than pivot move left
		else if (v[j] >= v[pivot]) { j--; }
	}

	// we swap the pivot into right position
	swap(v[j], v[pivot]);
	return j;
}

// QuickSort
void quickSort(vector <int> &v, int start, int end) {

	if (start < end) {
		int pivot = partition(v, start, end);
		quickSort(v, start, pivot);
		quickSort(v, pivot + 1, end);
	}
}

