#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Якеся там число типу перше йоу>>";
	cin >> a;
	cout << "Якеся там число типу друге йоу>>";
	cin >> b;
	if (a > b) {
		cout << "Перше число має більше сваги" << endl;
	}
	else if (b > a) {
		cout << "Друге число має більше сваги" << endl;
	}
	else {
		cout << "Обидва числа мають свагу йоу" << endl;
	}
}