#include<iostream>
#include<cmath>
using namespace std;

int m (int input);
int main()
{
	int input=0;

	cin>>input;//��J���
	cout<<m(input)<<endl;//��X�禡����
	system("pause");
	return 0;
}
int m (int input)
{
	if(input==0||input==1)//���J�Ȭ�1��0
	{
		return input+1;
	}
	else return m(input-1)+m(ceil(input/2));
	//�]�D�ؼg���A��J�Ȭ��j��1����ơA�ҥH���ݾ�߭t��
}
