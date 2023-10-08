#ifndef LAB3_TESTER_H
#define LAB3_TESTER_H

#include <vector>
#include "sting.h"
#include "name.h"
int ID_inzilizete();

class tester : public name{
public:



    friend std::ostream &operator<<(std::ostream &ostream, const tester &tester);
    tester create_tester ();
    ~tester() {};
};


#endif //LAB3_TESTER_H
