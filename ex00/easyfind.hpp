#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T &array, int n) {
	int i = 0;
	for(i = 0 ; i < array.size(); i++)
	{
		if (array[i] == n)
			return (n);
		if (i == array.size())
			throw NotFoundException
	}
	return (-1);
}

#endif