#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {
	private:
		unsigned int n;
		std::vector<int> numbers;
	public:
		Span();
		Span(unsigned int initer);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int number);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		// Add a range of numbers using iterators
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end) {
	while (begin != end) {
		if (numbers.size() >= n)
			throw std::runtime_error("Span is full");
		numbers.push_back(*begin);
		++begin;
	}
}

#endif
