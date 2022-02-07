#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
class abstraction
{
private:
	int num1, num2;
public:
	void set(int a, int b)

	{
		num1 = a;
		num2 = b;


	}
	void display()
	{
		cout << "num1=" << num1 << endl;
		cout << " num2=" << num2 << endl;
	}


};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	abstraction obj;
	obj.set(100, 50);
	obj.display();
	return 0 ;
}
