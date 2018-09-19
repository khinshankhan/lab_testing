
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

TEST_CASE("Basic Cases"){
  CHECK(piglatinify("hello") == "ellohay");
  CHECK(piglatinify("eat") == "eatay");
}


