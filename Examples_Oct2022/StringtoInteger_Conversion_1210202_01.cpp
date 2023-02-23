/* //A c/c++ program for splitting a string
//using strtok()
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<string>
#include<sstream>
#include<vector>

int main() {

	char str[] = "3/5";
	//Return first token
	char* token = strtok(str, "/");
	printf("%s %s \n", token, str);

	//keep printing tokens while one of the
	//delimiters present in str[]
	

	while (token != NULL) {
		//printf("%s\n", token);
		token = strtok(NULL, "/");
	}
	//printf("%s %s \n", token, str);


	std::string sample = "07/3/2011";
	std::vector<std::string> strs;
	boost::split(strs, sample, boost::is_any_of("/"));

	return 0;
}*/