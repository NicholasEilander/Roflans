#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int a;
	cout << "Убийте мене пліз:";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		sum = sum + i * i;
	}
	double avg = (double)sum / a;
	cout << "Коли ж прийде фінал:" << avg << endl;
}
