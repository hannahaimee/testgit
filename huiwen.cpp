#include<iostream>
#include<vector>
#include<string>
using namespace std;

int huiwen(string str)
{
	int i=0;
	int j=str.size()-1;
	while(i<=j)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
			return 0;
		
	}
	return 1;
}

int main()
{
	string stra;
	string strb;
	while(cin>>stra)
	{
		cin>>strb;
		int cnt = 0;
		for(int i=0;i<=stra.size();i++)
		{
			//strb插入stra中
			string tmp;
			tmp=stra;
			tmp.insert(i,strb);
			//判断是否为回文串
			int f=0;
			f=huiwen(tmp);
			//统计回文序列个数
			if(f==1)
				cnt++;
		}
		cout<<cnt<<endl;
	}
	
	
	return 0;
}