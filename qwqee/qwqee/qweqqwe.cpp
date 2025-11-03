#include <iostream>
using namespace std;
int main() {
	int гуль, autism;
	int sum = 0;
	cout << "Введіть даунізм:";
	cin >> гуль;
	cout << "Введіть аутізм:";
	cin >> autism;
	for (int i = гуль; i <= autism; i++) {
	  if (i % 2 == 0) {
			sum += i;
	 }
   }
	cout << "Сума парних чисел від" << гуль << "до" << autism << sum << endl;
	return 0;

}