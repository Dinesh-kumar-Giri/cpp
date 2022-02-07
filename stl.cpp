#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void printVec(vector<pair<int, int>>&v)
{
	cout << "size:" << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	int N;
	cin >> N;
	vector<int>v(N);
	for (int i = 0; i < N; i++)
	{
		int n; cin >> n;

	}

	return 0 ;
}