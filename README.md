# C++ Module 08

**Templated Containers, Iterators, and Algorithms**

This module introduces the Standard Template Library (STL) in C++, focusing on templated containers, iterators, and algorithms.

## Structure

### ex00/ - Easy Find
- **easyfind.{hpp}**: Implements a function template `easyfind`:
  - Accepts a container of integers and an integer to find.
  - Returns the first occurrence or throws an exception if not found.
- **main.cpp**: Tests the `easyfind` function with various STL containers.

### ex01/ - Span
- **Span.{hpp,cpp}**: Implements the `Span` class:
  - Constructor with a maximum size `N`.
  - `addNumber`: Adds a number to the container (throws exception if full).
  - `shortestSpan`: Returns the smallest difference between any two stored numbers.
  - `longestSpan`: Returns the largest difference between any two stored numbers.
  - Adds support for inserting a range of numbers using iterators.
- **main.cpp**: Tests the `Span` class with various use cases, including large datasets.

### ex02/ - Mutated Abomination
- **MutantStack.{hpp}**: Implements the `MutantStack` class:
  - Inherits from `std::stack`.
  - Adds iterator support to make the stack iterable.
- **main.cpp**: Tests the `MutantStack` class, comparing behavior to other STL containers.

## Features

- **STL Containers**: Focuses on `std::vector`, `std::list`, `std::stack`, and their customization.
- **Iterators**: Demonstrates iterator usage for templated containers.
- **Algorithms**: Encourages the use of `<algorithm>` for efficient operations.
- **Custom Templated Classes**: Implements new features using STL concepts.
