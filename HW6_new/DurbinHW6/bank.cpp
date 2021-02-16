//
// Created by clams on 4/3/2019.
//

#include "bank.h"


char my_queue::get_arrival_id() {

    return arrival_id;
}

int my_queue::get_start_time() {
    return start_time;
}

int my_queue::get_process_time() {
    return process_time;
}

void my_queue::set_arrival_id(char a) {
    arrival_id = a;

}

void my_queue::set_start_time(int s) {
    start_time = s;

}

void my_queue::set_process_time(int p) {
    process_time = p;

}

void my_queue::set_wait_time(int w) {
    wait_time = w;

}

void my_queue::set_end_time(int e) {
    end_time = e;

}

int my_queue::get_wait_time() {
    return wait_time;
}

int my_queue::get_end_time() {
    return end_time;
}
///default constructor
my_queue::my_queue() {

    arrival_id = '0';
    start_time = 0;
    process_time = 0;
    end_time = 0;
    wait_time = 0;

}