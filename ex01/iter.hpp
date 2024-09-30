#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *array, unsigned int length, void (*f)(T &)) {
  for (unsigned int i = 0; i < length; i++) {
    f(array[i]);
  }
}

template <typename T> void print(T &i) { std::cout << i << " ,"; }

#endif // !ITER_HPP
