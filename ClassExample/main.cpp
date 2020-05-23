#include <iostream>
#include "human.hpp"

// Pour tout compiler faire : g++ -std=c++17 *.cpp -o prog

int main(int argc, char const *argv[])
{
	Human h{"test"};
	Human h2{};

	Human h3{"Theo", 21};

	Human h4{h3};
	
	return 0;
}