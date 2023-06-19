#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    double sum=0;
    cin >> t;
    if(t<=800)
        sum=t*0.9;
    else if(t>800 and t<1500)
        sum=(t*0.9)*0.9;
    else if(t>=1500)
        sum=(t*0.9)*0.79;
    cout << fixed << setprecision(1) << sum << endl;

    return 0;
}
