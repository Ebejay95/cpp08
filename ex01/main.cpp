#include "Span.hpp"

int main() {
	Span* spanner = new Span(6);
	Span* freaker;
	freaker = spanner;
	delete spanner;
	delete freaker;
	return 0;
}