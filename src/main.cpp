#include <iostream>
#include <my_library.hpp>

int main(int argc, char **argv) {
  float x = 1.0;
  float y = 2.0;
  std::cout << "The sum of " << x << " + " << y << " = " << my_sum(x, y) << "\n"
            << "The substract of " << x << " - " << y << " = "
            << my_substract(x, y) << "\n";

  return 0;
}
