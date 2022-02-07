#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class constructor
{
public:
	constructor()
	{
		cout << "i am default constructor";
	}

};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	constructor *ch = new constructor;

	return 0 ;
}