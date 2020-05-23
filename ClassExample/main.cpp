#include <iostream>
#include "human.hpp"

// Pour tout compiler faire : g++ -std=c++17 *.cpp -o prog

int main(int argc, char const *argv[])
{
	Human h{"test"};
	Human h2{};

	Human h3{"Theo", 21};

	Human h4{h3};
	
	std::cout << h4.getName() << std::endl;
	
	h3.setName("Theophile");
	std::cout << h3.getName() << std::endl;

	h4.hello();

	return 0;
}