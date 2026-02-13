#include <iostream>
#include <fstream>
#include <string>

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
	std::cout << line << std::endl;
}// end processLine
