#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=1;
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
	}
	int d1=n-a;
	int d2=b-n;
	if(d1<d2)
		cout<<d1<<endl;
	else
		cout<<d2<<endl;
	return 0;
}