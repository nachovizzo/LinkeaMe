/**
 * Created on 12-03-2019
 *
 * Copyright (c) 2019 Ignacio Vizzo
 */
#include <iostream>
#include <my_library/library_api.hpp>

using std::cout;
using std::endl;

int main() {
  float x = 1.0;
  float y = 2.0;
  cout << "The sum of " << x << "+" << y << " = " << my_sum(x, y) << endl
       << "The sub of " << x << "-" << y << " = " << my_subtract(x, y) << endl;

  return 0;
}
