 #include <iostream>
 #include <string>
 using namespace std;
 
 int main()
 {
    string login, login_baza="Robik"; 
    string haslo, haslo_baza="Gwi@zdA#99";
	
	cout << "Login "; cin >> login;
	cout << "Haslo "; cin >> haslo; cout << endl;
	if (login==login_baza && haslo==haslo_baza) 
	    cout << "Logowanie prawidlowe" << endl;
	else
	    cout << "Blad logowania" << endl;
	    
	return 0;
}
