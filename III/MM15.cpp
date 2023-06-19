#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(x>=0 and x<=100 and y>=0 and y<=100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

    return 0;
}
