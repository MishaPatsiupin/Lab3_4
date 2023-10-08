#include "tester.h"

std::ostream &operator<<(std::ostream &ostream, const tester &tester) {

    ostream << "Tester, ID: " << tester.ID << "\n";
    ostream << "  Name: ";
    for (char i: tester.name_name) {
        ostream << i;
    }

    return ostream;
}

tester tester::create_tester() {
    tester tester;

    tester.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name tester: ";
    while (std::cin.get(input) && input != '\n')
        tester.name_name.push_back(input);


    return tester;
}
