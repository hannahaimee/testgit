#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main()
{
	int n =0;
	cin>>n;
	int tmp;
	vector<int> a;
	deque<int> b;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		a.push_back(tmp);
	}
	b.push_back(a[0]);
	for(int i=1;i<n;i++)
		{
			
			if(i%2==1)
				b.push_front(a[i]);
			else
				b.push_back(a[i]);
		}
	if(n%2==1)
		reverse(b.begin(),b.end());
	int i;
	for( i=0;i<b.size()-1;i++)
	{
		cout<<b[i]<<' ';
	}
	if(i==(b.size()-1))
		cout<<b[i]<<endl;
	return 0;
}