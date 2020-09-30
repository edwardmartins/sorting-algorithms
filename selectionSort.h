#include <vector>
#include<algorithm>


using namespace std;

// SELECTION SORT
//------------------------------------------------------- 

void selectionSort(vector <int> &a, int n) {
	int temp,j,small,pos;
	for(int i=0;i<n;i++)
	{
		pos=i;
		small=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				pos=j;
				small=a[j];
			}
			swap(a[i],a[pos]);
		}
	}
	

}
