#include <iostream>

#include "pig.h"

int main()
{
  string input;
  cout<< "Enter word to be piglatinified: ";
  cin >> input;
  string pigged;
  pigged = piglatinify(input);
  cout << input << " = "<< pigged << endl;
  return 0;
}
