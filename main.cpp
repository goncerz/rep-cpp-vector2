#include <iostream>
#include "header.h"

int main(void) {
	int na;
	int nb;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	int i = 0;
	int j = 0;
	int k = 0;

	cout << "Program prosi uzytkownika o wprowadzenie liczb calkowitych do dwoch tablic A i B w taki sposob,"
		<< " aby tworzyly ciagi niemalejace. Nastepnie program tworzy tablice C, ktora stanowi polaczenie tablic"
		<< " A i B w taki sposob, ze tez tworzy ciag niemalejacy." << endl << endl;

	na = vecSize('A');
	a.resize(na);
	vecFill(a, na, 'A');
	cout << endl;

	nb = vecSize('B');
	b.resize(nb);
	vecFill(b, nb, 'B');
	cout << endl;

	c.resize(na + nb);

	while (i < na && j < nb) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++;
			k++;
		}
		else {
			c[k] = b[j];
			j++;
			k++;
		}
	}

	if (i == na) {
		while (j < nb) {
			c[k] = b[j];
			j++;
			k++;
		}
	}
	else if (j == nb) {
		while (i < na) {
			c[k] = a[i];
			i++;
			k++;
		}
	}

	cout << "Tablica C:" << endl;
	for (int i = 0; i < c.size(); i++) {
		cout << "C[" << i << "] = " << c[i] << endl;
	}

	return 0;
}