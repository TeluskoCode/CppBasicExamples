/*#include<iostream>

//greatest common divisor alogorithm
// status- working fine

int gcd(int n1_a, int n2_a) {
	if (n2_a != 0) {
		return gcd(n2_a, n1_a % n2_a);
	}
	else return n1_a;
}

int main() {
	int n1=72, n2=144;
	int result = gcd(n1, n2);
	std::cout << "\n first n1= " << n1 << "\n first n2= " << n2;
	n1 = n1 / result;
	n2 = n2 / result;
	std::cout << "\n gcd = " << result;
	std::cout << "\n new n1= " << n1 << "\n New n2= " << n2;
	std::cout << "\n ";
	return 0;
}*/