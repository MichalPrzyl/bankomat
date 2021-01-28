#include <iostream>
#include "klasy.h"
using namespace std;

void opcje() {
	printf("\n1. Wplac");
	printf("\n2. Wyplac");
	printf("\n3. Status");
	printf("\n0. Wyjscie");

	printf("\n");
}
bool isNumber(string s) {
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]) == false)
			return false;
		return true;
	}
}

int main() {
	bankomat bankomat1;
	
	int opcja;
	
	int ile;
while (1) {
		printf("\nCo chcesz zrobic\n");
		opcje();
		cin >> opcja;
	
		

		switch (opcja) {
		case 1:
			
			printf("Ile chcesz wplacic: ");
			cin >> ile;
			bankomat1.wplac(ile);
			break;
		case 2:
			printf("Ile chcesz wyplacic: ");
			cin >> ile;
			bankomat1.wyplac(ile);
			break;
		case 3:
			bankomat1.status();
			break;
		default:
			printf("Wprowadzono zla liczbe");
			break;
		case 0:
			return 0;

		}

	}
	
}


