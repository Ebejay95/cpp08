#ifndef SPAN_HPP
# define SPAN_HPP

	#include <vector>

	class Span {
		private:
			std::vector<int> numbers;
		public:
			Span();
			Span(const Span& other);
			Span& operator=(const Span& other);
			~Span();

			void addNumber(int number) const;
			unsigned int shortestSpan(void) const;
			unsigned int longestSpan(void) const;
	}

#endif