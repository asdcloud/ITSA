
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //dist��distance,t����
    double dist,t;
    cin >> dist;
    //��������
    dist *=100;
    t=dist/(100-30*2.54);
    //�L����i��
    cout << ceil(t) << endl;

    return 0;
}
