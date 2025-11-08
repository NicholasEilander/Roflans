#include <iostream>
using namespace std;
int sumRange(int start, int end) {
	int sum = 0;
	for (int i = start; i <= end; i++) {
		sum += i;
	}
	return sum;
}
	
	int main() {
		int start, end;
		cout << "Гидота почалась:";
		cin >> start;
		cout << "Гидота закінчилася:";
			cin >> end;
		cout << "Сума гидоти:" << sumRange(start, end) << endl;
		return 0;
	}


