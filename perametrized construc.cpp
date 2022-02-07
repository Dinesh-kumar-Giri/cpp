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
	//peramaerized
	hero(int health)
	{
		// cout << this << endl;
		this->health = health;
	}

	hero(int health, char level)
	{
		this->level = level;
		this->health = health;
	}
	//here this is pointer
	void print() {
		cout << level << endl;
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

	hero ramesh(10);
	// cout << "address of ramesh: " << &ramesh << endl;
	// ramesh.gethealth(10);
	ramesh.print();

	// dyanamin
	hero *h = new hero(20);
	h->print();
	hero temp(22, 'B');
	temp.print();

	return 0 ;
}