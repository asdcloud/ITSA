#include <iostream>

using namespace std;

int main()
{
    int n,i;
    //int«¬ºA·|·¸¦ì
    long sum=1;
    cin >> n;
    for(i=1; i<=n; i++)
        sum*=i;
    cout << sum << endl;

    return 0;
}
