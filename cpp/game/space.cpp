#include "../game/space.h"
#include "../core/global.h"

using namespace std;

int Space::SETSPACE = -1; //Not set yet
int Space::NETSPACE = -1; //Not set yet
bool Space::AVERAGE = false; //Not set yet
bool Space::DUPLICATE = false; //Not set yet

int Space::parseSpace(const std::string& sOrig)
{
  string lowercased = Global::trim(Global::toLower(sOrig));
  if (lowercased == "ordinary" || lowercased == "normal" || lowercased == "plane" || lowercased == "planar") {
    Space::DUPLICATE = false;
    Space::AVERAGE = false;
    return Space::PLANAR;
  }
  else if (lowercased == "toroidal" || lowercased == "torus") {
    Space::DUPLICATE = false;
    Space::AVERAGE = false;
    return Space::TOROIDAL;
  }
  else if (lowercased == "klein" || lowercased == "klein bottle" || lowercased == "klein_bottle") {
    Space::DUPLICATE = false;
    Space::AVERAGE = false;
    return Space::KLEIN;
  }
  else if (lowercased == "klein averaged" || lowercased == "klein_averaged" || lowercased == "klein average" || lowercased == "klein_average" || lowercased == "klein av" || lowercased == "klein_av") {
    Space::DUPLICATE = false;
    Space::AVERAGE = true;
    return Space::KLEIN;
  }
  else if (lowercased == "klein duplicated" || lowercased == "klein_duplicated" || lowercased == "klein_duplicate" || lowercased == "klein duplicate" || lowercased == "klein_dup" || lowercased == "klein dup") {
    Space::DUPLICATE = true;
    Space::AVERAGE = false;
    return Space::TOROIDAL;
  }
  else throw IOError("Unknown board space: " + lowercased);
}