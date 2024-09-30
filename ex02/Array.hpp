#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T> class Array {

private:
  T *_array;
  unsigned int _size;

public:
  Array() : _array(new T[0]), _size(0) {}
  Array(unsigned int n) : _array(new T[n]), _size(n) {}
  Array(const Array &copy) : _array(new T[copy.size()]), _size(copy.size()) {
    for (unsigned int i = 0; i < _size; i++) {
      this->_array[i] = copy._array[i];
    }
  }
  Array &operator=(const Array &copy) {
    if (this != &copy) {
      delete[] _array;
      _array = new T[copy.size()];
      _size = copy.size();
      for (unsigned int i = 0; i < _size; i++) {
        this->_array[i] = copy._array[i];
      }
    }
    return *this;
  }
  ~Array() { delete[] _array; }

  T &operator[](unsigned int i) {
    if (i >= this->_size)
      throw OutOfLimitsException();
    return this->_array[i];
  }

  unsigned int size() const { return this->_size; }

  class OutOfLimitsException : public std::exception {
  public:
    virtual const char *what() const throw() { return "Out of limits"; }
  };
};

#endif // !ARRAY_HPP
