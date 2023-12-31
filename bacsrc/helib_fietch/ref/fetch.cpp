#include <cstring>
#include <algorithm>
#include <optional>
#include<cstdlib>
#include<cstdio>
#include <stdint.h>
#include <array>
#include "fhe_stats.h"

using namespace std;

static std::vector<fhe_stats_record*> stats_map;

const std::vector<double>* fetch_saved_values( char* name)
{
  for (long i = 0; i < long(stats_map.size()); i++) {
    if (strcmp(name, stats_map[i]->name) == 0)
      return &stats_map[i]->saved_values;
  }

  return 0;
}
