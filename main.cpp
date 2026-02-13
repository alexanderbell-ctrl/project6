#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void processLine(std::string line);

int main() {
	std::ifstream file("data.csv");
	std::string line;
	
	while(getline(file, line)) {
		processLine(line);
	}// end while

	return 0;
}// end main

void processLine(std::string line) {
	int int1, int2;
	std::stringstream ss(line), converter1, converter2;
	std::string string1, string2, string3;

	getline(ss, string1, ',');
	getline(ss, string2, ',');
	getline(ss, string3, ',');

	converter1 << string1;
	converter2 << string2;

	converter1 >> int1;
	converter2 >> int2;
	
	int numPrint;
	numPrint = int1 + int2;

	for(int i=0; i<numPrint; ++i) {
		std::cout << string3 << std::endl;
	}// end for	
}// end processLine
