#include <iostream>
#include "FullTableScan.h"

typedef unsigned int uint;

//int main(int argc, char* argv[])

int main(int argc, char** argv) {
	/*
	if (argc < 2) std::cout<<"USAGE: prog str1, str2 str3...\n"; //Non ci sono parametri
	
	for (int i = 0; i < argc; i++)
		std::cout << argv[i] << std::endl;
	*/
	long long v[500];
	long long x = 0;
	unsigned long n = 499;
	
	FTS(v, n, x);
}
