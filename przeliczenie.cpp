#include <iostream>

using namespace std;

int main()
{
    int f;
    int g;
    cout << "Temperatura w skali Fahrenheita: ";
    cin >> f;
    cout << f << "stopni F to " << (f-32)*5/9;
    cout << f << "stopni C" << endl;
    cin >> g;
    return 0;
}
