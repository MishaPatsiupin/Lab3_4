#ifndef LAB3_NAME_H
#define LAB3_NAME_H
#include <iostream>
#include <vector>

class name {
public:
    std::vector<char> name_name;
    int ID;

    friend std::ostream &operator<<(std::ostream &ostream, const name &name);
};


#endif //LAB3_NAME_H
