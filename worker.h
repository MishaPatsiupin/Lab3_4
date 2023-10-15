#ifndef LAB3_WORKER_H
#define LAB3_WORKER_H

#include <vector>
#include "sting.h"
#include "name.h"
int ID_inzilizete();

class worker : public name{
public:


    friend std::ostream &operator<<(std::ostream &ostream, const worker &worker);

    worker first_worker();
    worker create_worker();
    ~worker() {};
};


#endif //LAB3_WORKER_H
