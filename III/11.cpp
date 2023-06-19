#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int inputBus=0,inputLine=0;

	cin>>inputBus>>inputLine;//輸入陣列大小
	cin.ignore(1,'\n');//整數後讀字串，需先消除隱藏於後的"\n"
	int reArray[inputLine][inputBus];//產生陣列
	for(int bus=0;bus<inputBus;bus++)//讀入次數即列數
	{
		string nums;
		getline(cin,nums);
		istringstream cutStr(nums);
		for(int line=0;line<inputLine;line++)//字串分割數即行數
		{
			string save;
			getline(cutStr,save,' ');
			istringstream chType(save);
			chType>>reArray[line][bus];//一一讀入指定的反矩陣座標
		}
	}
	for(int i=0;i<inputLine;i++)//輸出反矩陣座標
	{
		for(int j=0;j<inputBus;j++)
		{
			if(j==inputBus-1) cout<<reArray[i][j]<<endl;
			else cout<<reArray[i][j]<<" ";
		}
	}
	return 0;
}
