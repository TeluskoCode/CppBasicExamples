#include<iostream>
using namespace std;

//Factorial of number

double fact(double n) { //call by value
	double temp=n;
	for (int i = 1; i < n; i++) {
		temp *= i;
	}
	return temp;
}

int main() {
	double num=9;
	//cout << "Enter number to find Factorial= ";
	//cin >> num;
	cout << "Factorial = " << fact(num) << endl;
	return 0;

}