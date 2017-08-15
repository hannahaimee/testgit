#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, t;
	getline(cin, s);
	getline(cin, t);
	if (t.size() == 0)
		cout << "Yes" << endl;
	if (s.size()<t.size())
		cout << "No" << endl;
	int k = 0;
	string tmp;
	tmp = s;
	for (int i = 0; i<t.size(); i++)
	{
		int found = tmp.find_first_of(t[i]);
		if (found != string::npos)
		{
			tmp.erase(tmp.begin(), tmp.begin() + found+1);
			continue;
		}
		else if (found == string::npos)
		{
			k = 1;
			break;
		}
	}
	if (k == 1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;


	return 0;
}