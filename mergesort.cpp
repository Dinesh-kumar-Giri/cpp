#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void merge(int *arr, int s, int e)
{
	int mid = (s + e) / 2;
	int len1 = mid - s + 1;
	int len2 = e - mid;
	int *first = new int[len1];
	int *second = new int[le]
}
void mergesort(int *arr, int s, int e)
{
	//base case
	if (s > e)
	{
		return;
	}
	int mid = (mid + e) / 2;
	//ledt merge sort karna h
	mergesort(arr, s, mid);


	//right part sort
	mergesort(arr, mid + 1, e);

	//merge
	merge(arr, s, e);

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	int arr[5] = {2, 5, 1, 6, 9};
	int n = 5;
	mergesort(arr, 0, n - 1);

	return 0 ;
}