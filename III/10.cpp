#include<iostream>
using namespace std;

int euc(int a,int b);//����۰��k���j�禡�ŧi
int main()
{
	int input=0,input2=0,c=0;

	cin>>input>>input2;
	if(input<input2)//�T�{�j�p����
	{
		c=input;
		input=input2;
		input2=c;
	}
	cout<<euc(input,input2)<<endl;
	return 0;
}
int euc(int a,int b)
{
	int f=a%b;
	if(f==0) return b;
	else return euc(b,f);
}
