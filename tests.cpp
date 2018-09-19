
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

TEST_CASE("Basic Cases"){
  SECTION("Constant starter"){
    CHECK(piglatinify("hello") == "ellohay");
  }
  SECTION("Vowel starter"){
    CHECK(piglatinify("eat") == "eatay");
  }
}

TEST_CASE("More Tests"){
  string words [] = {"otiose", "superfluous", "redundant", "futile", "useless", "functionless", "idle"};
  string pigged [] = {"otioseay", "uperfluoussay", "edundantray", "utilefay", "uselessay", "unctionlessfay", "idleay"};

  for(const auto counter : {0, 1, 2, 3, 4, 5, 6}) {
    CHECK(piglatinify(words[counter]) == pigged[counter]);
  }
}

