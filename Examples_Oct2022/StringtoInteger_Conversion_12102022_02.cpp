/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main() {
	char date[] = "08/21/1998";		//date in mm/dd/yyyy format
	char* pch;						//Pointer to current split section
	int month = -1, day = -1, year = -1;		//Info needed
	pch = strtok(date, "/");		//split the date from beginning to the first occurrence of/
	while (pch != NULL) {			//while we have more / chars
		int num = atoi(pch);		//set the variables
		if (month == -1) month = num;
		else if (day == -1) day = num;
		else if (year == -1) year = num;
		pch = strtok(NULL, "/");	//continue splitting the string
	}
	std::cout << "\n Month= " << month + 5 << "\n Day= " << day + 5 << "\n Year= " << year + 1 << std::endl;
	printf("\n %d %d %d \n", month, day, year);	//check if we got correct data
	return 0;
}*/