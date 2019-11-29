#include <iostream>
#include <string>
using namespace std;


int main2()
{
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		unsigned int i = 0, j = 0;
		int tmp;
		int count = 0;
		int max = count;
		while (i < s1.size() && j < s2.size())
		{
			tmp = 0;
			if (s1[i] != s2[j])
			{
				j++;
			}
			while (s1[i] == s2[j])
			{
				i++; j++;
				count++;
			}
			if (max <= count)
			{
				max = count;
			}
		}
		cout << max << endl;
	}
	return 0;
}