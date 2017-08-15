#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cal(vector <int> v)
{
	int m=0;
	for(int i=0;i<(v.size()-1);++i)
	{
		for(int j=i+1;j<v.size();++j)
		{
			if(v[i]<v[j])
				m++;
		}
	}
	return m;
		
}

void change(vector<int> &ori,vector<int> pv,vector<int> pos)
{
	for(int i=0;i<pos.size();i++)
		ori[pos[i]]=pv[i];
}

vector<vector<int>> permv;
void perm(vector<int> &v,int st)
{
	if(v.size()==st)
		permv.push_back(v);
	else
	{
		for(int i=st;i<v.size();++i)
		{
			swap(v[i],v[st]);
			perm(v,st+1);
			swap(v[i],v[st]);
		}
	}
		
}


int main()
{
	int n,k;

	while (cin >> n)
	{
		cin >> k;
		vector<int> ori;
		for (int i = 0; i<n; ++i)
		{
			int tmp;
			cin >> tmp;
			ori.push_back(tmp);
		}
		
		vector<int> opos;//记录数字npos的位置
		for (int i = 0; i<n; ++i)
		{
			if(ori[i]==0)
				opos.push_back(i);
		}
		
		vector<int> onum;//记录需要填空的数字
		for(int i=1;i<=n;i++)
		{
			int k=0;
			for(int j=0;j<ori.size();++j)
			{
				if (ori[j] == i)
				{
					k++;
					break;
				}
					
			}
			if(k==0)
				onum.push_back(i);
		}
		
		//全排列onum
		perm(onum,0);
		//把全排列的数放进去，计算其次数是否等于k
		int cnt=0;
		for(int i=0;i<permv.size();++i)
		{
			change(ori,permv[i],opos);
			if(cal(ori)==k)
				cnt++;
		}
		cout<<cnt<<endl;	
	}
	return 0;
}
