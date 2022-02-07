// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int recusion(int n)
// {
// 	//base condition
// 	if (n == 0)
// 	{
// 		return 1;

// 	}
// 	// recursive
// 	int smallproblem = recusion(n - 1);
// 	int bigprblm = n * smallproblem;
// 	return  bigprblm;
// }


// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt" , "r" , stdin);
// 	freopen("output.txt" , "w" , stdout);
// #endif


// 	int n; cin >> n;
// 	cout << recusion(n);


// 	return 0;


// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll ;
// int print(int n)
// {
// 	if (n == 0)
// 		return 1;

// 	cout << n << endl;;
// 	return print(n - 1);
// }


// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt" , "r" , stdin);
// 	freopen("output.txt" , "w" , stdout);
// #endif
// 	int n; cin >> n;
// 	print(n);

// 	return 0 ;
// }




#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void syadigit(int n, string arr[])
{
	//base case
	if (n == 0)
	{
		return;
	}
	//processing
	int digit = n % 10;
	n = n / 10;

	//recusive call
	syadigit(n, arr);
	cout << arr[digit] << " ";


}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n; cin >> n;
	syadigit(n, arr);

	return 0 ;
}
