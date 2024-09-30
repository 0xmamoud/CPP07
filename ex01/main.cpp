#include "iter.hpp"

int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  char b[] = {'a', 'b', 'c', 'd', 'e'};
  std::string c[] = {"one", "two", "three", "four", "five"};

  std::cout << "----- *INT ARRAY* -----" << std::endl;
  iter(a, 5, print);

  std::cout << std::endl << "----- *CHAR ARRAY* -----" << std::endl;
  iter(b, 5, print);

  std::cout << std::endl << "----- *STRING ARRAY* -----" << std::endl;
  iter(c, 5, print);
  std::cout << std::endl;
  return 0;
}
