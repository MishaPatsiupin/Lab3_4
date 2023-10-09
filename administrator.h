#ifndef LAB3_ADMINISTRATOR_H
#define LAB3_ADMINISTRATOR_H
#include <iostream>
#include <vector>
#include "sting.h"
#include "name.h"

int ID_inzilizete();

class administrator : public name{
public:
    friend std::ostream &operator<<(std::ostream &ostream, const administrator &administrator);
    administrator create_administrator();
    administrator first_administrator();
 //   ~administrator() = default;
};


#endif //LAB3_ADMINISTRATOR_H
