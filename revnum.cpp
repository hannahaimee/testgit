#include<iostream>
using namespace std;

int rev(int m)
{
	int sum=0;
	int a;
	while(m)
	{
		a=m%10;
		sum=sum*10+a;
		m=m/10;
	}
	return sum;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<rev(rev(x)+rev(y));
	return 0;
}