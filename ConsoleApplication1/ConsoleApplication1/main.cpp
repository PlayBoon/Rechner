#include <iostream>
#include "Addition.h"
#include "Subtraktion.h"
#include "Division.h"
#include "Multiplikation.h"


using namespace std;

void Rechner();

int wahl = 0;

int main()
{
	cout << "W�hlen sie ihr Programm" << endl;
	cout << "1. Rechner" << endl;

	cin >> wahl;

	switch (wahl) { //Programm auswahl.
	case 1:
		cout << "Rechner wird gestartet!" << endl;
		Rechner();
		break;

	default:

		break;
	}
	return 0;
}

void Rechner() //Rechner
{
	char wahl_M, wahl_B;

	cout << "1. Plus" << endl;
	cout << "2. Minus" << endl;
	cout << "3. Mal" << endl;
	cout << "4. Geteilt" << endl;
	
	cin >> wahl_M;

	switch (wahl_M) {
		case '1': 
			cout << "Hier wird Addiert" << endl;
			addition();
			cout << "wollen sie weiter Rechnen?" << endl;
			cin >> wahl_B;
			if (wahl_B == 'j')
			{
				system("CLS");
				Rechner();
			}
			else
				cout << "wollen sie eine andere Rechenart w�hlen?" << endl;
			
		break;
		case '2': 
			cout << "Hier wird Subtrahiert" << endl;
			subtraktion();
			cout << "wollen sie weiter Rechnen?" << endl;
			cin >> wahl_B;
			if (wahl_B == 'j')
			{
				system("CLS");
				Rechner();
			}
			else
				cout << "wollen sie eine andere Rechenart w�hlen?" << endl;
			if (wahl_B == 'j')
			{
				system("CLS");
				main();
			}
		break;
		case '3': 
			cout << "Hier wird Multipliziert" << endl;
			multiplikation();
			cout << "wollen sie weiter Rechnen?" << endl;
			cin >> wahl_B;
			if (wahl_B == 'j')
			{
				system("CLS");
				Rechner();
			}
			else
				cout << "wollen sie eine andere Rechenart w�hlen?" << endl;
			if (wahl_B == 'j')
			{
				system("CLS");
				main();
			}
		break;
		case '4': 
			cout << "Hier wird Dividierd" << endl;
			division();
			cout << "wollen sie weiter Rechnen?" << endl;
			cin >> wahl_B;
			if (wahl_B == 'j')
			{
				system("CLS");
				Rechner();
			}
			else
				cout << "wollen sie eine andere Rechenart w�hlen?" << endl;
			if (wahl_B == 'j')
			{
				system("CLS");
				main();
			}
		break;
		case 'e': 
			cout << "Wird beendet" << endl; main();
		break;
		case 'E': 
			cout << "Wird beendet" << endl; main();
		break;
		default: 
			cout << "Treffen sie bitte eine g�ltige wahl" << endl; Rechner();
		break;
	}

}