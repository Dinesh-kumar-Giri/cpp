// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll ;
// bool issorted(int *arr, int size)
// {
// 	// base case
// 	if (size == 0 || size == 1)
// 	{
// 		return true;

// 	}
// 	if (arr[0] > arr[1])
// 		return false;

// 	else
// 	{
// 		bool ans = issorted(arr + 1, size - 1);
// 		return ans;
// 	}
// }


// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt" , "r" , stdin);
// 	freopen("output.txt" , "w" , stdout);
// #endif
// 	int arr[5] = {1, 2, 4, 7, 6};
// 	int n = 5;
// 	bool a = issorted(arr, n);
// 	if (a)
// 	{
// 		cout << "array is sorted" << endl;
// 	}
// 	else
// 		cout << "array is not sorted";

// 	return 0 ;
// }


// given arrya search the present key if key is present then retrun is true



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll ;
// void print(int *arr, int n)
// {
// 	cout << "size of array is " << endl;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	} cout << endl;
// }
// bool linearsearch(int *arr, int size, int key)
// {
// 	print(arr, size);
// //base case

// 	if (size == 0)
// 		return false;

// 	if (arr[0] == key)
// 		return true;

// 	else {
// 		bool reamaningpart = linearsearch(arr + 1, size - 1, key);
// 		return reamaningpart;
// 	}
// }

// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt" , "r" , stdin);
// 	freopen("output.txt" , "w" , stdout);
// #endif
// 	int arr[5] = {1, 2, 5, 6, 8};
// 	int size = 5;
// 	int key = 8;
// 	bool ans = linearsearch(arr, size, key);
// 	if (ans)
// 	{
// 		cout << "true " << ans << endl;
// 	}
// 	else
// 		cout << "false " << ans << endl;

// 	return 0 ;
// }


// apply biarysearch


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
bool binarsearch(int *arr, int s, int e, int key)
{
	// base case
	if (s > e)
	{
		return false;
	}
	if (arr[mid] == key)
	{
		return true;
	}
	int mid = s + (e - s) / 2;
	if (arr[mid] < key)
	{
		return binarsearch(arr, mid + 1, e, key);
	}
	else
		return binarsearch(arr, s, mid - 1; key);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	int arr[5] = {1, 2, 8, 10, 18}
	             int size = 5;
	int key = 18;
	bool ans = binarsearch(arr, 0, 5, key);
	if (ans)
	{
		cout << "found" << endl;
	}
	else
		cout << "notfound" << endl;

	return 0 ;
}