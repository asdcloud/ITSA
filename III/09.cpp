#include<iostream>
using namespace std;

int main()
{
	int input=0,i=0;

	cin>>input;
	for(i=input;i>=input-2;i--)//��X�̪�3������
	{
    	if(i%3) continue;
    	else break;
	}
	cout<<i/3*(3+i)/2<<endl;//�o���`�M(���t�żƩM����)
	return 0;
}
