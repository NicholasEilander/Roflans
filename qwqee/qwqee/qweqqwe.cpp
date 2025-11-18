#include <iostream>
using namespace std;
int main() {
	int гуль, zxc;
	int sum = 0;
	cout << "Введіть uno:";
	cin >> гуль;
	cout << "Введіть dos:";
	cin >> zxc;
	for (int i = гуль; i <= zxc; i++) {
	  if (i % 2 == 0) {
			sum += i;
	 }
   }
	cout << "Сума парних чисел від" << гуль << "до" << zxc << sum << endl;
	return 0;

}
