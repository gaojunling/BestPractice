#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char* argv[]) {
	std::cout << "..." << std::endl;
	std::cout << "string is :";
	char* s = (char*)malloc(100);
	strcpy_s(s, strlen("Hello world!") + 1, "Hello world!");
	std::cout << s << std::endl;
	return 0;
}
