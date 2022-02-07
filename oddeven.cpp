#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class employee {
public:
	char name[100];
public:
	int age;
	int id;
	char add;


	char getname()
	{
		return name;
	}
	void setname(char nm)
	{
		name = nm;
	}



};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	employee giri;
	giri.id = 10;
	// giri.getname("dinesh");
	cout << giri.id << endl;
	giri.setname('dine');
	cout << giri.getname() << endl;

	cout << giri.getname() << endl;

	return 0 ;
}