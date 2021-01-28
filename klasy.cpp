#include <iostream>
#include "klasy.h"
using namespace std;

void bankomat::wyplac(int ile) {
	saldo -= ile;
	printf("Wyplacono z bankomatu %d $\n", ile);
}

void bankomat::wplac(int ile) {
	saldo += ile;
	printf("Wplacono do bankomatu %d $\n", ile);
}

void bankomat::status() {
	printf("\n=======================\nSaldo konta: %d\n=======================\n", saldo);
}

bankomat::bankomat() {
	saldo = 0;
}


//void wplac(int ile);
//void wyplac(int ile);
//void status();