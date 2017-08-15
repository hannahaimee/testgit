#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	
	string str;
	set<string> res;
	while(cin>>str)
	{
		res.insert(str);	
	}
	cout<<res<<endl;
	return 0;
}