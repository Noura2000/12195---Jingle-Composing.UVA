#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	while (s != "*")
	{
		int cnt = 0;
		double sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (sum > 1&&s[i]!='/')
			{
				continue;
			}
			if (s[i] == '/')
			{
				if (sum == 1)
					cnt++;
				sum = 0;
				continue;
			}
			else if (s[i] == 'W')
				sum += 1.00;
			else if (s[i] == 'H')
				sum += 1/2.0;
			else if (s[i] == 'Q')
				sum += 1 / 4.0;
			else if (s[i] == 'E')
				sum += 1 / 8.0;
			else if (s[i] == 'S')
				sum += 1 / 16.0;
			else if (s[i] == 'T')
				sum += 1 / 32.0;
			else if (s[i] == 'X')
				sum += 1 / 64.0;

	
		}
		cout << cnt << endl;

		cin >> s;
	}


	return 0;
}