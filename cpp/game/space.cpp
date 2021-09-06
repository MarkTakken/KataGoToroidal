#include "../game/space.h"
#include "../core/global.h"

using namespace std;

int Space::SETSPACE = -1; //Not set yet
int Space::NETSPACE = -1; //Not set yet
bool Space::AVERAGE = false; //Not set yet

int Space::parseSpace(const std::string& sOrig)
{
  string lowercased = Global::trim(Global::toLower(sOrig));
  if (lowercased == "ordinary" || lowercased == "normal" || lowercased == "plane" || lowercased == "planar") {
    Space::AVERAGE = false;
    return Space::PLANAR;
  }
  else if (lowercased == "toroidal" || lowercased == "torus") {
    Space::AVERAGE = false;
    return Space::TOROIDAL;
  }
  else if (lowercased == "klein" || lowercased == "klein bottle" || lowercased == "klein_bottle") {
    Space::AVERAGE = false;
    return Space::KLEIN;
  }
  else if (lowercased == "klein averaged" || lowercased == "klein_averaged" || lowercased == "klein av" || lowercased == "klein_av") {
    Space::AVERAGE = true;
    return Space::KLEIN;
  }
  else throw IOError("Unknown board space: " + lowercased);
}