#ifndef LAB3_DEVELOPER_H
#define LAB3_DEVELOPER_H
#include <vector>
#include "sting.h"
#include "name.h"

int ID_inzilizete();

class developer : public name{
public:

    friend std::ostream &operator<<(std::ostream &ostream, const developer &developer);
    developer create_developer();
    developer first_developer();
 //   ~developer() {};

};


#endif //LAB3_DEVELOPER_H
