#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string order;
	while (cin >> n >> order)
	{
		int num = 1, first = 1;
		if (n <= 4)
		{
			for (int i = 0; i<order.size(); i++)
			{
				if (num == 1 && order[i] == 'U') num = n;
				else if (num == n && order[i] == 'D') num = 1;
				else if (order[i] == 'U') num--;
				else  num++;
			}
			for (int i = 1; i <= n - 1; i++)
				cout << i << ' ';
			cout << n << endl;
			cout << num << endl;
		}
		else
		{
			for (int i = 0; i<order.size(); i++)
			{
				if (first == 1 && num == 1 && order[i] == 'U')
				{
					first = n - 3; num = n; 
				} 
				else if (first == n - 3 && num == n && order[i] == 'D') 
				{ 
					first = 1; num = 1; 
				}
				else if (first != 1 && num == first && order[i] == 'U') 
				{
					first--; num--; 
				}
				else if (first != n - 3 && num == first + 3 && order[i] == 'D') 
				{
					first++; num++; 
				}
				else if (order[i] == 'U')
					num--; 
				else 
					num++;
			}
			for (int i = first; i < first + 3; i++)
			{
				cout << i << ' ';
			}	
			cout << first + 3 << endl;
			cout << num << endl;
		}
	}
	return 0;
}