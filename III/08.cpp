#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int input=0,output=0;
	bool end=0;

	while(cin>>input)
	{
		input==1?end=true:end=false;//�P�_�O�_��1
		output=sqrt(input)*10/10;//�ڸ���X��]�ƦC�������(�̱��񪺼ơA���@�w�N�O�����)
		for(int i=output;i>1;i--)//�}�l���U�M���㰣����
		{
		input%i==0?end=true:end=false;
		if(end==true) break;//���h����j��
		}
		end?cout<<"NO"<<endl:cout<<"YES"<<endl;//��X���G
	}
	return 0;
}
