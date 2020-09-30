#include <vector>

using namespace std;

// INSERTION SORT
//------------------------------------------------------------

void insertionSort(vector <int> &v, int n) {
	int j, small;

	for (int i = 1; i < n; i++) {
		small=v[i];
		j=i-1;
		while((j>=0) && (small < v[j]))
		{
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=small;
	}
}

