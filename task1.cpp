#include <iostream>
#include <string>
auto main() -> int{
	std::cout << "Hello, world!" << "\n";

	auto weight = 12.5;
	auto height = 12;
	// std::string hi = "Hi";
	auto hi = std::string("Hello, World!");
	std::cout << "Weight " << weight << "\n";
	std::cout<< "Height " << height << "\n";
	std::cout << height / weight << "\n";
	std::cout << hi << std::endl;

	std::cin >> weight;
	std::cout << "Weight " << weight << "\n";
	std::cin >> height;
	std::cout << "Height " << height << "\n";
	std::cout << height / weight << "\n";

	std::cin >> weight
			 >> height;
	std::cout << "Weight "
			  << weight << "\n";
	std::cout << "Height "
			  << height << "\n";

}