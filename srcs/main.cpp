#include <cstdlib>
#include <iostream>
// RUN: %minimal_lit | grep HelloLitCpp
int main() {
  std::cout << "HelloLitCpp!" << std::endl;
  int err_code = std::getenv("HelloLitEnv") == nullptr;
  return err_code;
}
