/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main() {
	std::string s = "3/5";
	//std::string* s1;
	//s1 = &s;
	//char ratio[] = *s1;
	char ratio[] = "3/5";
	int n1 = -1, n2 = -1, num;
	char* cPtr;
	cPtr = strtok(ratio, "/");
	while (cPtr != NULL) {
		num = atoi(cPtr);
		if (n1 == -1) {
			n1 = num;
		}
		else if (n2 == -1) {
			n2 = num;
		}
		cPtr = strtok(NULL, "/");
	}
	std::cout << "\n Numarator= " << n1 << std::endl;
	std::cout << " Denomorator= " << n2 << std::endl;
}*/