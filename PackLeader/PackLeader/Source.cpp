#include <iostream>
using namespace std;
int calculate(int a, int b) {
	int resultetogrusha;
	if (a > b) {
		return (a - b);
	}
	else if (a == b) {
		return (a * b);
	}
	else {
		return (a + b);
	}
	return resultetogrusha;
}
int main() {
	int a, b;
	cout << "Введіть фраг:";
	cin >> a;
	cout << "Введіть кріпа:";
	cin >> b;
	int teto = calculate(a, b);
		cout << "Фіналочка:" << teto << endl;
		return 0;
		
}