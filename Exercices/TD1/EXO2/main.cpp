#include <iostream>

void exo2_Q1(auto &a, auto &b)
{
	auto c{a};

	a = b;
	b = c;
}

int main()
{
	exo1_Q1();
	exo1_Q2();

	auto a{6};
	auto b{5};
	auto c{"test"};
	auto d{"TEST"};
	
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	exo2_Q1(a, b);
	exo2_Q1(c, d);
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	
	return 0;