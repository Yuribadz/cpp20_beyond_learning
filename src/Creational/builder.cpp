#include "builder.hpp"

Test_Object age_builder::build(int day, int month, int year) {
  Test_Object ret;
  ret.date = std::to_string(day) + "\\" + std::to_string(month) + "\\" +
             std::to_string(year);
  return ret;
}

void builder_test(void) {
  std::cout << "==Builder test==\n";
  std::cout << age_builder::build(20, 12, 2021).date << "\n";
  std::cout << "==Builder test END==\n";
}
