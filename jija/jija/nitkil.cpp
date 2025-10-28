#include <iostream>
using namespace std;
int main() {
	int kamen = 0;
	for (int i = 1; i <= 5; i++) {
	int chicks = 1;
	for (int j = 1; j <= i; j++) {
		chicks *= i;
	}
		kamen += chicks;
	}
	double autism = kamen / 5.0;
	cout << "Авєрага" << autism << endl;
}
