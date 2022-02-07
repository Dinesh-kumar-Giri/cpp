#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class hero {

private:
	char level;
public:
	int helath;

	hero(char level)
	{
		level = level;
	}

	char getlevel()
	{
		return level;

	}
	int gethealth()
	{
		return helath;
	}

	// we are creating a setter function
	void sethealth(int h)
	{
		helath = h;
	}

	void setlevel(char ch)
	{
		level = ch;
	}

	void print()
	{
		cout << "level" << endl;
	}


};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	return 0 ;
}