#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class hero {

private:
	char level;
public:
	int helath;

	hero()
	{
		cout << "constructor is called" << endl;
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
	hero giri;
	cout << "giri level is : " << giri.getlevel() << endl;
	giri.setlevel('A');
	giri.helath = 80 ;
	cout << giri.helath << endl;
	cout << giri.getlevel() << endl;
	// dyanmic allocation


	hero *a = new hero;
	a->setlevel('b'); // dyanmic pointer
	a->sethealth(100);

	cout << a->getlevel() << endl;
	// cout << a->gethealth() << end






	return 0 ;
}
