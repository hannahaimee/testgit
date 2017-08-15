#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<int> gra;
		for(int i=0;i<n;i++)
		{
			int tmp;
			cin >> tmp;
			gra.push_back(tmp);
		}
		for(int j=0;j<m;j++)
		{
			char a;
			int b,c;
			cin>>a>>b>>c;
			if(a=='Q')
			{
				if(b<c)
					swap(b,c);
				int m=gra[b-1];
				for(int i=b;i<=c-1;i++)
				{
					
					if(m<gra[i])
						m=gra[i];
				}
				cout<<m<<endl;
			}
			else if(a=='U')
				gra[b-1]=c;
		}
	}
	return 0;
}