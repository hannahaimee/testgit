#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.size();++i)
		{
			if(str[i]==' ')
			{
				str.erase(i,1);
				i--;
			}
		}
		for(int j=0;j<str.size();++j)
		{
			if(j==6||j==14)
			{
				cout<<' ';
			}
			cout<<str[j];
		}
		
	}
	return 0;
}