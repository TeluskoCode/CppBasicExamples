/*#include<iostream>
#include<string>

//uppper case and lower case converter

int main() {
	std::string str1 = "5/6";
	std::string str2 = "2/3";
	int n = str1.length();
	std::cout << "\n String1 original value= " << str1;
	std::string str3,str4,str5;
	str3 = str1;
	std::cout << "\n string3 = " << str3;
	std::cout << "\n str1 length= " << n;
	for (int i = 0; i < n; i++) {
		std::cout << "\n str1 invididual letters= " << str1[i];
		if (str1[i] == '/') {
			str2 = str1[i];
		}
		else {
			str3 = str1[i];
		}
	}
	for (char& c : str1) {
		str4 = c;
	}
	std::cout << "\n new str2= " << str2;
	std::cout << "\n new str3= " << str3;
	std::cout << "\n str4= " << str4;
	std::cout << "\n";
	return 0;
}*/