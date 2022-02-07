#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	int n, j, m1 = 0, m2 = 0, m3 = 0, m4 = 0, k;
	cin >> n;
	string str;
	cin >> str;
	k = n / 4;
	for (j = str.length() - 1; j >= 0; j--)
	{
		if (str[j] == 'a')
			m1++;
		if (str[j] == 'b')
			m2++;
		if (str[j] == 'c')
			m3++;
		if (str[j] == 'd')
			m4++;
	}
//	cout<<k<<m1<<m2<<m3<<m4;
	for (j = 0; j < str.length(); j--)
	{
		if (str[j] == 'a')
		{
			if (m1 > k)
			{
				if (m2 < k)
				{
					str[j] = 'b';
					m2++;
				}
				else if (m3 < k)
				{
					str[j] = 'c';
					m3++;
				}
				else if (m4 < k)
				{
					str[j] = 'd';
					m4++;
				}
				m1--;
			}
		}
		else if (str[j] == 'b')
		{
			if (m2 > k)
			{
				if (m1 < k)
				{
					str[j] = 'a';
					m1++;
				}
				else if (m3 < k)
				{
					str[j] = 'c';
					m3++;
				}
				else if (m4 < k)
				{
					str[j] = 'd';
					m4++;
				}
				m2--;
			}
		}
		else if (str[j] == 'c')
		{
			if (m3 > k)
			{
				if (m1 < k)
				{
					str[j] = 'a';
					m1++;
				}
				else if (m3 < k)
				{
					str[j] = 'c';
					m3++;
				}
				else if (m4 < k)
				{
					str[j] = 'd';
					m4++;
				}
				m3--;
			}
		}
		else if (str[j] == 'd')
		{
			if (m4 > k)
			{
				if (m1 < k)
				{
					str[j] = 'a';
					m1++;
				}
				else if (m3 < k)
				{
					str[j] = 'c';
					m3++;
				}
				else if (m4 < k)
				{
					str[j] = 'd';
					m4++;
				}
				m4--;
			}
		}
	}
	cout << str << endl;
	return 0;
}

