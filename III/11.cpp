#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int inputBus=0,inputLine=0;

	cin>>inputBus>>inputLine;//��J�}�C�j�p
	cin.ignore(1,'\n');//��ƫ�Ū�r��A�ݥ��������é�᪺"\n"
	int reArray[inputLine][inputBus];//���Ͱ}�C
	for(int bus=0;bus<inputBus;bus++)//Ū�J���ƧY�C��
	{
		string nums;
		getline(cin,nums);
		istringstream cutStr(nums);
		for(int line=0;line<inputLine;line++)//�r����μƧY���
		{
			string save;
			getline(cutStr,save,' ');
			istringstream chType(save);
			chType>>reArray[line][bus];//�@�@Ū�J���w���ϯx�}�y��
		}
	}
	for(int i=0;i<inputLine;i++)//��X�ϯx�}�y��
	{
		for(int j=0;j<inputBus;j++)
		{
			if(j==inputBus-1) cout<<reArray[i][j]<<endl;
			else cout<<reArray[i][j]<<" ";
		}
	}
	return 0;
}
