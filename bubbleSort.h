#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Bubble Sort ------------------------


int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}



