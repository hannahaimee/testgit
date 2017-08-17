#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> x;
		for(int i=0;i<n;++i)
		{
			int tmp;
			cin>>tmp;
			x.push_back(tmp);
		}
		vector<int> y;
		for(int i=0;i<n;++i)
		{
			int tmp;
			cin>>tmp;
			y.push_back(tmp);
		}
		vector<int> dis;
		for(int i=0;i<n;++i)
		{
			int d=x[i]-1+y[i]-1;
			dis.push_back(d);
		}
		sort(dis.begin(),dis.end());
		cout<<dis[0]<<endl;
	}
	return 0;
}