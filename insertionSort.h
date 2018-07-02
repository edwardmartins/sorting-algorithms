#include <vector>

using namespace std;

// INSERTION SORT
//------------------------------------------------------------
void insertionSort(vector <int> &v, int n) {
	int current, pos;

	for (int i = 1; i < n; i++) {
		current = v[i]; // saves the current element
		pos = i; // position of the vector until the ordered part, pos not included

		// compare the current value with each element in the ordered part
		while (pos > 0 && v[pos - 1] > current) {

			// while the elements in the ordered part are higher than the current value we make space
			v[pos] = v[pos - 1]; 
			pos--;
		}
		if (pos != i) // if pos!= i we have made space to put the current the value
			v[pos] = current; 
	}
}

