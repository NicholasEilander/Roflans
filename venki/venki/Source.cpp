#include <iostream>
using namespace std;
int main() {
	int pain;
	pain = 0;
	int n;
	cout << "До якого числа суммувати?";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		pain = pain + i * i;
	}
	int avg = pain / n;
	cout << " Кінцева авєрага" << avg << endl;
	return 0;

}