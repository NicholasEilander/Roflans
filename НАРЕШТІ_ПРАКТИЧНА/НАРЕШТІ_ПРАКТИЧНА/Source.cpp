#include <iostream>
using namespace std;
int main() {
	int w, l;
	cout << "Перше число:";
	cin >> w;
	cout << "Друге число:";
	cin >> l;
	int result;
	if ((w * l) < 0) {
		result = w * l * 2;
		cout << "Результат:" << result << endl;
    }
	else {
		double result = w * l * 1.5;
		cout << "Результат:" << result << endl;
	}
	return 0;

}