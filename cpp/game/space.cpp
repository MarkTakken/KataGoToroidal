#include "../game/space.h"
#include "../core/global.h"

using namespace std;

int Space::SETSPACE = -1; //Not set yet

void Space::parseSpace(const std::string& sOrig)
{
  string lowercased = Global::trim(Global::toLower(sOrig));
  if (lowercased == "ordinary" || lowercased == "normal" || lowercased == "plane" || lowercased == "planar")
    Space::SETSPACE = Space::PLANAR;
  else if (lowercased == "toroidal" || lowercased == "torus")
    Space::SETSPACE = Space::TOROIDAL;
  else throw IOError("Unknown board space: " + lowercased);
}