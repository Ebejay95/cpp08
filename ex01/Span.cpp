#include "./Span.hpp"

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
	(void)number;
}

unsigned int Span::shortestSpan(void) {

}

unsigned int Span::longestSpan(void) {

}
