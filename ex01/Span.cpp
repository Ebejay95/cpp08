#include "./Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

Span::Span() {
	n = 0;
	numbers.clear();
}

Span::Span(unsigned int initer) {
	n = initer;
	numbers.clear();
}

Span::Span(const Span& other) {
	n = other.n;
	numbers = other.numbers;
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		n = other.n;
		numbers = other.numbers;
	}
	return (*this);
}

Span::~Span() {
	n = 0;
	numbers.clear();
}

void Span::addNumber(int number) {
	if (numbers.size() >= n)
		throw std::runtime_error("Span is full");
	numbers.push_back(number);
}

unsigned int Span::shortestSpan(void) {
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find span");

	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	unsigned int minSpan = std::numeric_limits<unsigned int>::max();

	for (size_t i = 1; i < sorted.size(); ++i) {
		unsigned int span = static_cast<unsigned int>(sorted[i] - sorted[i-1]);
		if (span < minSpan)
			minSpan = span;
	}

	return minSpan;
}

unsigned int Span::longestSpan(void) {
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find span");

	std::vector<int>::iterator min = std::min_element(numbers.begin(), numbers.end());
	std::vector<int>::iterator max = std::max_element(numbers.begin(), numbers.end());

	return static_cast<unsigned int>(*max - *min);
}
