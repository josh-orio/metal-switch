#ifdef __APPLE__
#include "MetalAdder.hpp"
#endif
#include <iostream>

int main() {
  std::cout << "Hi" << std::endl;

#ifdef MTL_PRIVATE_IMPLEMENTATION

  std::array<float, 4> a3 = {1.0f, 2.0f, 3.0f, 4.0f};
  std::array<float, 4> b3 = {5.0f, 6.0f, 7.0f, 8.0f};
  std::array<float, 4> c3 = {};

  MetalAdder *adder = new MetalAdder;
  adder->process(a3.data(), b3.data(), c3.data(), a3.size());

  for (float c : c3) {
    std::cout << c << " ";
  }
  std::cout << std::endl;

#endif

  return 0;
}