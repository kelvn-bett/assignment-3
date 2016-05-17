#include <iostream>
#include "Citrus.h"
#include "Lemon.h"
#include "Orange.h"

using namespace std;

void PrintTheFruits(CitrusFruit &fruit) {
	cout << "fruit is a " << fruit.getName()
		<< " and has a pH " << fruit.getPh() << endl;
}
int main() {
	Lemon lemon(2.0);
	//This is legal!
	CitrusFruit &rlemon = lemon;
	CitrusFruit *plemon = &lemon;
	Orange fruit(2.0);
	//CitrusFruit &frruit = fruit;
	PrintTheFruits(fruit);
	cout << "lemon is a " << lemon.getName()
		<< " and has a pH " << lemon.getPh() << endl;
	cout << "rlemon is a " << rlemon.getName()
		<< " and has a pH " << rlemon.getPh() << endl;
	cout << "plemon is a " << plemon->getName()
		<< " and has a pH " << plemon->getPh() << endl;

	Lemon le1(1.4), le2(1.5), le3(1.234);
	Orange or1(0.4), or2(0.3), or3(0.5);
	CitrusFruit *cfruits[] = { &le1, &le2, &le3, &or1, &or2, &or3 };
	for (int i = 0; i < 6; i++)
		cout << cfruits[i]->getName() << " has a pH "
		<< cfruits[i]->getPh() << endl;

	return 0;
}