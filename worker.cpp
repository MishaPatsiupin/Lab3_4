#include "worker.h"


worker worker::create_worker() {

    worker worker;
    worker.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name worker: ";
    while (std::cin.get(input) && input != '\n')
        worker.name_name.push_back(input);

    return worker;
}

std::ostream &operator<<(std::ostream &ostream, const worker &worker) {
    ostream << "Worker, ID: " << worker.ID << "\n";
    ostream << "  Name: ";
    for (char i: worker.name_name) {
        ostream << i;
    }

    return ostream;
}


