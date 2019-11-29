#include <iostream>
#include <string>
using namespace std;

int main1()
{
	string s;
	while (cin >> s)
	{
		string s1;
		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			s1.push_back(s.back());
			s.pop_back();
		}
		for (auto &i : s1)
		{
			cout << i;
		}
	}

	return 0;
}