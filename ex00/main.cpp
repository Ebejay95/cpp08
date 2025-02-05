#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
	try {
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);

		std::cout << "Testing vector: ";
		typename std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found value: " << *it << std::endl;

		std::list<int> lst;
		lst.push_back(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(40);

		std::cout << "Testing list: ";
		typename std::list<int>::iterator it2 = easyfind(lst, 20);
		std::cout << "Found value: " << *it2 << std::endl;

		std::cout << "Testing not found case: ";
		easyfind(vec, 99);
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}