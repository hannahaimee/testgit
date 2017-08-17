//bits count
#include<iostream>
using namespace std;

int main()
{
	unsigned int q[32]={};//note:must initialize =0
	int a,b;
	cin>>a>>b;
	if(a>=1&&a<=1024&&b>=1&&b<=1024)
	{
		//save accomplished a
	//save a in q[n]
	int i,j;
	i=(a-1)/32;
	j=(a-1)%32;
	q[i]=q[i]|(1<<j);
	//check b is ac or not
	i=(b-1)/32;
	j=(b-1)%32;
	/*bool flg;
	flg = q[i] & (1 << j);
	cout << flg<<endl;  verify*/
	
	if(q[i]&(1<<j))
		cout<<1<<endl;
	else
		cout<<0<<endl;
	}
	else
		cout<<-1<<endl;
	return 0;
}