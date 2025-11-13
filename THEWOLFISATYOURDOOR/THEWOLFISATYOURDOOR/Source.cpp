#include <iostream>
using namespace std;
int durnyanya(int nyannyan) {
	if (nyannyan <= 1) return false;
	for (int i = 2; i * i <= nyannyan; i++){
		if (nyannyan % i == 0) {
			return false;
	}
}
	return true;
}
int main() {
	int nyannyan;
	cout << "Кірігірі:";
	cin >> nyannyan;
	int teto2 = durnyanya(nyannyan);
	cout << "Ну типу чіваува:" << teto2 << endl;
	return 0;
}