#include "liby/timey.h"
#include "mainy/greety.h"
#include "liby/rectangley.h"
#include "liby/triangley.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "world";

  if (argc > 1) {
    // printf("Number of arguments detected is %d.\n", argc);
    int i = 1;

    if (argc > 1) {
      while(argv[i]!=NULL){
        // printf("The argv[%d] has `%s` value.\n", i, argv[i]);
        std::cout << get_greety(argv[i]) << std::endl;
        i++;
      }
    }
  } else {
    std::cout << get_greety(who) << std::endl;
  }

  print_timey();

  
  std::cout << "Rectangley has " << Rectangley(4, 5).getArea() << " area units." << std::endl;
  std::cout << "Triangley has " << Triangley(4, 5).getArea() << " area units." << std::endl;

  return 0;
}
