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
		cout << "почалась:";
		cin >> start;
		cout << "закінчилася:";
			cin >> end;
		cout << "Сума:" << sumRange(start, end) << endl;
		return 0;
	}


