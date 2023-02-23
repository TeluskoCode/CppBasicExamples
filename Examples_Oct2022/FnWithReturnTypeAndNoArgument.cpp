/*#include<iostream>
using namespace std;


int prime() {
	int n;
	cout << "Enter a number to check prime= " << endl;
	cin >> n;
	return n;
}


int main() {
	bool isPrime = true;
	int num=prime();
	if (num == 0 || num == 1) {
		isPrime = false;
	}
	else {
		for (int i = 1; i < num; ++i) {
			if (num % i == 0) {
				isPrime = true;
			}
			else
				isPrime = false;
		}
		}
	if (isPrime)
		cout << num << " is prime number" << endl;
	else
		cout << num << " is Not a Prime number" << endl;
	return 0;
}*/