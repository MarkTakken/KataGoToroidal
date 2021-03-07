#include "../game/space.h"
#include "../core/global.h"

using namespace std;

int Space::SETSPACE = -1; //Not set yet
int Space::NETSPACE = -1; //Not set yet

int Space::parseSpace(const std::string& sOrig)
{
  string lowercased = Global::trim(Global::toLower(sOrig));
  if (lowercased == "ordinary" || lowercased == "normal" || lowercased == "plane" || lowercased == "planar")
    return Space::PLANAR;
  else if (lowercased == "toroidal" || lowercased == "torus")
    return Space::TOROIDAL;
  else throw IOError("Unknown board space: " + lowercased);
}