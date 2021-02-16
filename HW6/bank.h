//
// Created by clams on 3/31/2019.
//

#ifndef HW6_BANK_H
#define HW6_BANK_H
#include <queue>
using namespace std;

class my_queue
{
private:

    char arrival_id;
    int start_time;
    int process_time;
    int wait_time;
    int end_time;

public:

    my_queue();///constructor
    char get_arrival_id(); ///returns arrival id
    int get_start_time();///returns start time
    int get_process_time();///returns process time
    void set_arrival_id(char a); ///set object arrival id
    void set_start_time(int s); /// set object start time
    void set_process_time(int p);/// set object process time
    void set_wait_time(int w);///set object wait time
    void set_end_time(int e);/// set object end time
    int get_wait_time();/// get object wait time
    int get_end_time();///get object end time


};


#endif //HW6_QUEUE_H
