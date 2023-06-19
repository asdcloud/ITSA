#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,t,sum=0;;
    cin >> h1 >> m1 >> h2 >> m2;
    t = 60*(h2-h1)+(m2-m1);
    if(t<=120 and t>=30)
        sum=(t/30)*30;
    else if(t>120 and t<=240)
        sum=((t-120)/30)*40+120;
    else if(t>240)
        sum=((t-240)/30)*60+280;
    cout << sum << endl;

    return 0;
}
