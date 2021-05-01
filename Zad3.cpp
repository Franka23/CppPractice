#include <iostream>

using namespace std;

int main()
{
    int wiekFrani;
    int wiekAni;
    int ilerazy= 0;
    
    cout << "Wprowadz wiek Frani: ";
    cin >> wiekFrani;
    cout << "Wprowadz wiek Ani: ";
    cin >> wiekAni;
    cout << "Wiek Ani: " << wiekAni << endl;
    cout << "Wiek Frani: " << wiekFrani << endl;
    while((wiekAni-wiekFrani)>=0){
        wiekAni = wiekAni-wiekFrani;
        ilerazy = ilerazy + 1;
    } 
    cout << "ile razy: " << ilerazy << endl;
    while(1);
    return 0;
}
