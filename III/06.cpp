#include<iostream>
using namespace std;

int main()
{
	int input=0;

	cin>>input;
	switch(input/3)//���ӼƬ��Ϥ��I
	{
		case 1:cout<<"Spring"<<endl;break;//�ӼƬ�1�A(3,4,5)
		case 2:cout<<"Summer"<<endl;break;//�ӼƬ�2�A(6,7,8)
		case 3:cout<<"Autumn"<<endl;break;//�ӼƬ�3�A(9,10,11)
		default :cout<<"Winter"<<endl;//��l(12(�ӼƬ�4),1,2)�Ҭ��V�u
	}
	return 0;
}
