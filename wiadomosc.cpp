#include <iostream>

using namespace std;

int main()
{
    int liczba= 0;
    string wiadomosc="kocham cie";
    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    while(liczba>0){
     cout << "Wiadomosc dla mamy: " << wiadomosc<< endl;
     liczba= liczba-1;
    } 
    while(1);
    return 0;
}

