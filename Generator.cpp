#include <stdio.h>
#include <fstream>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <array>
#include "Random Country Gen.h"

using namespace std;

int selector();
std::array<std::string, 28> input();

int main() {
	std::string ans;
	int num = 0;
	std::array<std::string, 28> myArray;

	std::cout << "Generate Country (y/n)" << endl;
	std::cin >> ans;
	std::cout << " " << endl;

	if (ans == "y") {
		myArray = input();

	while (ans == "y") {

		num = selector();
		std::cout << myArray[num] << endl;

		std::cout << " " << endl;
		std::cin >> ans;
		std::cout << " " << endl;
	}
}
	return 0;
}


int selector() {
	int range = 29;
	int num;
	srand(time(0));

	for (int i = 0; i < range; i++) {
		num = rand()%range;
	}
	return num;
}



