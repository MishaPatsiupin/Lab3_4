#include "task_time.h"

/*    task_time task1;
    task1.new_time();
    std::thread t1(&task_time::countdown, &task1);
    t1.detach();
    */

void task_time::new_time () {
    std::cout << "Enter the time to complete the task (sec): ";
    std::cin >> time;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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






