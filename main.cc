#include <stdio.h>

#include <iostream>
#include <string>
#include <vector>

#include "absl/random/random.h"
#include "absl/strings/str_join.h"
//#include "absl/random/uniform_int_distribution.h"

int main() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");
  absl::BitGen bitgen;
  // size_t index = absl::Uniform(bitgen, 0u, elems.size());
  double fraction = absl::Uniform(bitgen, 0, 1.0);
  bool coin_flip = absl::Bernoulli(bitgen, 0.5);

  printf("%d\n", fraction);
  printf("%s\n", s.c_str());
}
