#include "task_time.h"



void task_time::new_time () {
    std::cout << "Enter the time to complete the task (sec): ";
    std::cin >> time;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char input;
    std::cout << "Enter the task: ";
    while (std::cin.get(input) && input != '\n') {
        task.push_back(input);
    }

    flag_work ++;
}

void task_time::countdown() {
    std::this_thread::sleep_for(std::chrono::seconds(time));
    std::cout << "Your task '";
    for (char i : task) {
        std::cout << i;
    }
    std::cout << "' completed\n";
    flag_work--;
}






