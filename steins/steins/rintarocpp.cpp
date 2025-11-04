#include <iostream>
using namespace std;
int main() {
	int ss, dd;
	int sum = 0;
	cout << "start:";
	cin >> ss;
	cout << "end:";
	cin >> dd;
	for (int i = ss; i <= dd; i++) {
		if (i % 2 != 0) {
			sum += i * i;
         }
	}
	cout << "Кінцевий результат:" << sum << endl;
	return 0;
}