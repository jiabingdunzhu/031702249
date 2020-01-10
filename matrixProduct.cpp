#include<iostream>
#include<cstring> 
using namespace std;
int judge(string line1,string line2)
{
	
	int p1=0,p2=0;
	for(int i=0;i<line1.length();i++)
	{
		if(line1[i]=='x')
		{
			p1=i;break;
		}
	}
	for(int i=0;i<line2.length();i++)
	{
		if(line2[i]=='x')
		{
			p2=i;break;
		}
	}
	int len1=line1.length()-p1-1,len2=p2;
	if(len1!=len2)
	{
		return 0;
	}
	for(int i=0;i<len1;i++)
	{
		if(line1[i+p1+1]!=line2[i])
		{
			return 0;
		}
	}
	for(int i=0;i<p1;i++)cout<<line1[i];
	cout<<'x';
	for(int i=p2+1;i<line2.length();i++)cout<<line2[i];
	return 1;
}
int main()
{
	string l1,l2;cin>>l1>>l2;
	if(judge(l1,l2)==1)return 0;
	if(judge(l2,l1)==1)return 0;//按照第一第二两个矩阵顺序可交换来写。如果两个矩阵顺序不可交换，把这行删掉就行 
	cout<<"N";
	return 0;
	
}
