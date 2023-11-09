#include <iostream>
using namespace std;

int main() {
	string start;
	int punkty = 0;
	cout << "Quiz sklada sie z 5 pytan z opcjami a/b/c/d. Nacisnij enter aby zaczac." << endl;
	cin.ignore();
	for (int i = 0; i < 5;) {
		if (i == 0) {
			system("CLS");
			string odp;
			cout << "Pytanie 1:" << endl << endl;
			cout << "Jaki byl pierwszy krol Polski?" << endl;
			cout << "a) Stanislaw August Poniatowski" << endl;
			cout << "b) Boleslaw Chrobry" << endl;
			cout << "c) Mieszko I" << endl;
			cout << "d) Andrzej Duda" << endl;
			cout << "odpowiedz: ";
			cin >> odp;
			if (odp == "b") {
				cout << "OK" << endl;
				punkty += 1;
				i++;
			}
			else {
				cout << "OK" << endl;
				i++;
			}
		}

		if (i == 1) {
			system("CLS");
			string odp;
			cout << "Pytanie 2:" << endl << endl;
			cout << "W ktorym roku zmarla krolowa Elzbieta II?" << endl;
			cout << "a) 2025" << endl;
			cout << "b) 1945" << endl;
			cout << "c) 1410" << endl;
			cout << "d) 2022" << endl;
			cout << "odpowiedz: ";
			cin >> odp;
			if (odp == "d") {
				cout << "OK" << endl;
				punkty += 1;
				i++;
			}
			else {
				cout << "OK" << endl;
				i++;
			}
		}

		if (i == 2) {
			system("CLS");
			string odp;
			cout << "Pytanie 3:" << endl << endl;
			cout << "Jak nazywa sie najczesciej uzywana wyszukiwarka internetowa?" << endl;
			cout << "a) Bing" << endl;
			cout << "b) Goolge" << endl;
			cout << "c) Google" << endl;
			cout << "d) DuckDuckGo" << endl;
			cout << "odpowiedz: ";
			cin >> odp;
			if (odp == "c") {
				cout << "OK" << endl;
				punkty += 1;
				i++;
			}
			else {
				cout << "OK" << endl;
				i++;
			}
		}

		if (i == 3) {
			system("CLS");
			string odp;
			cout << "Pytanie 4:" << endl << endl;
			cout << "Kto jest deweloperem gry Counter-Strike 2" << endl;
			cout << "a) Valve" << endl;
			cout << "b) Collosal Order" << endl;
			cout << "c) Volvo" << endl;
			cout << "d) CD Projekt Red" << endl;
			cout << "odpowiedz: ";
			cin >> odp;
			if (odp == "a") {
				cout << "OK" << endl;
				punkty += 1;
				i++;
			}
			else {
				cout << "OK" << endl;
				i++;
			}
		}

		if (i == 4) {
			system("CLS");
			string odp;
			cout << "Pytanie 5:" << endl << endl;
			cout << "Czy szklo jest przezroczyste?" << endl;
			cout << "a) tak" << endl;
			cout << "b) nie" << endl;
			cout << "c) moze" << endl;
			cout << "d) nie znam odpowiedzi na to pytanie" << endl;
			cout << "odpowiedz: ";
			cin >> odp;
			if (odp == "a" || odp == "c" || odp == "d") {
				cout << "OK" << endl;
				punkty += 1;
				i++;
			}
			else {
				cout << "OK" << endl;
				i++;
			}

		}
	}

				
		system("CLS");
		cout << "Twoj wynik to: " << punkty << "/5" << endl;
		cout << "Gratulacje!"<< endl;


}
