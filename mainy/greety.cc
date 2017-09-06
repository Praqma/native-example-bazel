#include "mainy/greety.h"
#include <string>

std::string get_greety(const std::string& who) {
  return "Hello, " + who + "?";
}
