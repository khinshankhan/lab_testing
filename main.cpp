#include <iostream>

#include "pig.h"

int main()
{
  string s;
  s = piglatinify("hello");
  std::cout << "hello = " << s << std::endl;
  return 0;
}
