#include<iostream>
using namespace std;
int main()
{
	int input=0,Bin[8];

	cin>>input;
	if(input<0) input+=256;//�t�ƫh�����ܥ����
	for(int i=7;i>=0;i--)//�f�V�����J
    {
    	Bin[i]=input%2;//�N�l�Ƶ��G�s�J
    	input/=2;//�C��X�@��ƫh�d�Ӽ��~�򩹤U��
    }
    for(int i=0;i<8;i++)//���V�̧ǿ�X
    {
    	if(i==7)cout<<Bin[i]<<endl;//�Y���̫�@��h����
    	else  cout<<Bin[i];//�_�h�򱵦b���X
    }
	return 0;
}
