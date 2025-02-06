#ifndef SPAN_HPP
# define SPAN_HPP

	#include <vector>

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
	};

#endif