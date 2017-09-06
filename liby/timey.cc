#include "liby/timey.h"
#include <ctime>
#include <iostream>

void print_timey() {
  std::time_t result = std::time(nullptr);
  std::cout << "UTC   : " << std::asctime(std::gmtime(&result));
  std::cout << "Local : " << std::asctime(std::localtime(&result));
}
