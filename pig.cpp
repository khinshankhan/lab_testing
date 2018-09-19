#include <iostream>
#include "pig.h"
string piglatinify(string s){
  bool constant = true; // indicates if starting letter is a constant
  char vowels [] = {'a', 'e', 'i', 'o', 'u'}; // array of vowels to check against
  for (int i = 0; i < 5; i++){
    if(s.at(0) == vowels[i]){
      constant = false; // didn't start with a vowel
      break;
    }
  }
  return (constant) ? s.substr(1) + s.at(0) + "ay" : s + "ay"; // look at README
}
