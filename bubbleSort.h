#include <vector>
#include<algorithms>
using namespace std;

// BUBBLE SORT
//------------------------------------------------------- 

void bubbleSort(vector <int> &a, int n) {
	int i, j;
    for(i = 0; i < n-1; ++i) {
        for(j = 0; j < n-i-1; ++j) {
            if(a[j+1] < a[j]) {
                swap(a[j],a[j+1]);
            }
        }
    }
}


