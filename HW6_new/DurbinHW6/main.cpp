#include <iostream>
#include <queue>
#include "bank.h"
#include "functions.h"
#include <fstream>
#include <stack>

using namespace std;

int main() {

    my_queue c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;///declare objects
    ///reads file
    fstream infile;
    infile.open("inputFile.txt");

    char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;///arrival id
    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;/// start time
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;/// process time

    ///initialize each read to appropriate variables
    infile >>a1 >> s1 >>p1 >>a2 >> s2 >>p2>>a3>>s3>>p3>>a4>>s4>>p4>>a5>>s5>>p5>>a6>>s6>>p6>>a7>>s7>>p7>>a8>>s8>>p8
           >>a9>>s9>>p9>>a10>>s10>>p10;

    ///set each object data fields to their appropriate variables
    set_obj_data(c1,a1,s1,p1);
    set_obj_data(c2,a2,s2,p2);
    set_obj_data(c3,a3,s3,p3);
    set_obj_data(c4,a4,s4,p4);
    set_obj_data(c5,a5,s5,p5);
    set_obj_data(c6,a6,s6,p6);
    set_obj_data(c7,a7,s7,p7);
    set_obj_data(c8,a8,s8,p8);
    set_obj_data(c9,a9,s9,p9);
    set_obj_data(c10,a10,s10,p10);

    ///declare a queue of objects
    queue<my_queue> the_queue;
///push each object into the queue
    the_queue.push(c1);
    the_queue.push(c2);
    the_queue.push(c3);
    the_queue.push(c4);
    the_queue.push(c5);
    the_queue.push(c6);
    the_queue.push(c7);
    the_queue.push(c8);
    the_queue.push(c9);
    the_queue.push(c10);
///declare a stack to keep track of the previous objects end time after pop it from the queue
    stack<int> track_prev_end;
    do_stuff(the_queue, track_prev_end);

    return 0;
}