#include "name.h"

std::ostream &operator<<(std::ostream &ostream, const name &name) {
    ostream << " ID: " << name.ID << "\n";
    ostream << "  Name: ";
    for (char i: name.name_name) {
        ostream << i;
    }

    return ostream;
}
















