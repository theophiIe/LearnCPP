#include <iostream>

void chg(auto &a, auto &b)
{
	auto c{a};

	a = b;
	b = c;
}

int main()
{
	auto a{6};
	auto b{5};
	
	std::cout << "Avant changement : " << a << ", " << b << std::endl;
	chg(a, b);
	std::cout << "Apres changement : " << a << ", " << b << std::endl << std::endl;

	auto c{"test"};
	auto d{"TEST"};
	
	std::cout << "Avant changement : " << c << ", " << d << std::endl;
	chg(c, d);
	std::cout << "Apres changement : " << c << ", " << d << std::endl << std::endl;

	auto e{5.4f};
	auto f{4.6f};
	
	std::cout << "Avant changement : " << e << ", " << f << std::endl;
	chg(e, f);
	std::cout << "Apres changement : " << e << ", " << f << std::endl;
	
	return 0;
}