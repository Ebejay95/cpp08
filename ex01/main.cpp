#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		Span largeSpan(10000);
		std::vector<int> numbers;

		srand(time(NULL));
		for (int i = 0; i < 10000; ++i) {
			numbers.push_back(rand());
		}

		largeSpan.addRange(numbers.begin(), numbers.end());

		std::cout << "Large span - Shortest: " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Large span - Longest: " << largeSpan.longestSpan() << std::endl;

		Span emptySpan(5);
		try {
			std::cout << "Testing empty span: ";
			emptySpan.shortestSpan();
		} catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

		Span fullSpan(2);
		fullSpan.addNumber(1);
		fullSpan.addNumber(2);
		try {
			std::cout << "Testing full span: ";
			fullSpan.addNumber(3);
		} catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

	} catch (const std::exception& e) {
		std::cout << "Unhandled exception: " << e.what() << std::endl;
	}

	return 0;
}
