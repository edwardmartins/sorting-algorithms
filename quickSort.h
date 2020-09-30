#include <vector>

using namespace std;

// QUICKSORT
// -------------------------------------------------------------------------

// Partition function
int partition(vector <int> &a, int start, int end) {
	
	int pivot = a[end]; // Take the last element as a pivot 
	int i = start - 1;
	

	for(int j=start;j<end;j++)
	{
		i++;
		swap(a[i],a[j]);
	}
	swap(a[i+1],a[end]);
	return i+1;
}

// QuickSort
void quickSort(vector <int> &v, int start, int end) {

	if (start < end) {
		int pivot = partition(v, start, end);
		quickSort(v, start, pivot-1);
		quickSort(v, pivot + 1, end);
	}
}

