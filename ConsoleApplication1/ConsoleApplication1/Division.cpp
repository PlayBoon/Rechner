#include <iostream>
#include "Division.h"

using namespace std;

division::division()
{
	rechnen();
}

void division::rechnen()
{
	int zahl1 = 0, zahl2 = 0, ergebniss = 0;
	cout << "Geben sie ihre erste Zahl ein!";
	cin >> zahl1;
	cout << "Geben sie ihre zwite zahl ein!";
	cin >> zahl2;

	ergebniss = zahl1 / zahl2;

	cout << "Das ergebniss ist: " << ergebniss << endl;

}