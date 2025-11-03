#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int autism;
	cout << "Убийте мене пліз:";
	cin >> autism;
	for (int i = 1; i <= autism; i++) {
		sum = sum + i * i;
	}
	double avg = (double)sum / autism;
	cout << "Коли ж прийде фінал:" << avg << endl;
}