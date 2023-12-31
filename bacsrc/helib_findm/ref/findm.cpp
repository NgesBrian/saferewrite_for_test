#include <cstring>
#include <algorithm>
#include <optional>
#include<cstdlib>
#include<cstdio>
#include <stdint.h>
#include <array>

using namespace std;

const std::vector<double>* fetch_saved_values(char* name)
{
  for (long i = 0; i < long(stats_map.size()); i++) {
    if (strcmp(name, stats_map[i]->name) == 0)
      return &stats_map[i]->saved_values;
  }

  return 0;
}
