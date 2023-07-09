#ifndef BUILDER_HPP
#define BUILDER_HPP
#include <memory>
#include <string>
#include <iostream>
struct Test_Object {
  std::string date;
};


struct age_builder {
  static Test_Object build(int day, int month, int year);
};

void builder_test(void);
#endif  // !BUILDER_HPP
