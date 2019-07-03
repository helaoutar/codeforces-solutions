#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int k = 1;
	char a = str[0];
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] != a)
		{
			cout << a << k;
			k = 1;
			a = str[i];
		}
		else
		{
			k++;
		}
	}
	cout << a << k << endl;
	return 0;
}