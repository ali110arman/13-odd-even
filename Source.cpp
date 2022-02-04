#include <iostream>
using namespace std;
void main() {
	int num, i=1, even=0, n;
	cout << "please inter count of your numbers" << endl;
	cin >> n;
	while (i <= n) {
		cout << "inter number" << endl;
		cin >> num;
		if (num % 2 == 0)
			even = even + 1;
		i = i + 1;
	}
	cout << "count of even is: " << even << " and the count of odd is: " << n - even;
	}
