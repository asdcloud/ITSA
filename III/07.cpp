#include<iostream>
using namespace std;

int main()
{
	int input=0;

	cin>>input;
	while(input--)//�̾ڿ�J����ƻ���p�⦸��
	{
		int ai=0,a=0,bi=0,b=0;
		char w;//�B��Ÿ�

		cin>>w>>ai>>a>>bi>>b;
		switch(w)//�̾ڹB��Ÿ��ӨM�w�p��覡
		{//�̾ڹB��Ÿ���X�p�⤽��������
			case '+':cout<<ai+bi<<" "<<a+b<<endl;break;
			case '-':cout<<ai-bi<<" "<<a-b<<endl;break;
			case '*':cout<<ai*bi-a*b<<" "<<a*bi+ai*b<<endl;break;
			case '/':cout<<(ai*bi+a*b)/(bi*bi+b*b)<<" "<<a*bi-ai*b/(bi*bi+b*b)<<endl;break;
		}
	}
	return 0;
}
