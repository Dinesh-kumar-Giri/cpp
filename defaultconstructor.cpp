#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class hero {

private:
	int health;

public:
	char level;

	hero()
	{
		cout << "i am default constructor" << endl;
	}

	int gethealth()
	{
		return health;
	}
	char getlevel()
	{
		return level;
	}
	void sethealth(int h)
	{
		health = h;
	}
	void setlevel(char l)
	{
		level = l;
	}
};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	// hero ramesh;

	// dyanamin
	hero *h = new hero();

	return 0 ;
}