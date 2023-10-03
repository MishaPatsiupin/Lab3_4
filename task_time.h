#ifndef LAB3_TASK_TIME_H
#define LAB3_TASK_TIME_H
#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

class task_time {
public:
    int time;
    std::vector<char> task;
int flag_work = 0;

    void new_time();
    void countdown();
};


#endif //LAB3_TASK_TIME_H
