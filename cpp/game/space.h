#ifndef GAME_SPACE_H
#define GAME_SPACE_H

#include "../core/global.h"
#include "../core/hash.h"

#include "../external/nlohmann_json/json.hpp"

using namespace std;

namespace Space
{
  const int PLANAR = 0;
  const int TOROIDAL = 1;
  extern int SETSPACE;
  extern int NETSPACE;
  int parseSpace(const std::string& sOrig);
};

#endif //GAME_SPACE_H