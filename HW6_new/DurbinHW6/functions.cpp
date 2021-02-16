//
// Created by clams on 4/3/2019.
//

#include "functions.h"
#include <iostream>

void do_stuff(queue<my_queue> &the_queue, stack<int> track_prev_end) {

    double total_wait = 0.0; ///declare total wait time of all customers
    double total_people = 0.0;///declare total customers

    while(the_queue.size()>1)
    {
        if(the_queue.front().get_arrival_id()== 'A')///if its the first customer, then set values for wait/end times
        {
            the_queue.front().set_wait_time(0);
            the_queue.front().set_end_time(6);
            total_wait = total_wait + the_queue.front().get_wait_time();///add object wait time to wait time
            total_people++;///increment to keep track of number of customers
            cout << "Arrival ID \t Start \t End\t Wait\t" << endl;
            cout << the_queue.front().get_arrival_id() << "\t\t\t\t" << the_queue.front().get_start_time()
                 << "\t " << the_queue.front().get_end_time() << " \t\t " << the_queue.front().get_wait_time() << endl;


        }
        track_prev_end.push(the_queue.front().get_end_time());///push the end time of front object to stack
        the_queue.pop();///pop the queue
        ///now front is the next object in queue
        int front_wait = track_prev_end.top() - the_queue.front().get_start_time();/// wait time for
        ///front object = top value in stack - front object start time

        if(front_wait<= 0)///if front_wait value is <=0 then front object in queue wait time is 0
        {
            the_queue.front().set_wait_time(0);///set front object in queue wait time to 0
            ///front object in queue end time (f_end) = front object in queue start time + front object in queue process time
            int f_end = the_queue.front().get_start_time()  + the_queue.front().get_process_time();
            the_queue.front().set_end_time(f_end);///set front object in queue end time to f_end
            total_wait = total_wait + the_queue.front().get_wait_time();///add object wait time to total wait
            total_people++;///increment total number of people
            cout << the_queue.front().get_arrival_id() << "\t\t\t\t" << the_queue.front().get_start_time()
                 << "\t " << the_queue.front().get_end_time() << "\t\t " << the_queue.front().get_wait_time() << endl;
        }
        else///if front_wait > 0
        {
            the_queue.front().set_wait_time(front_wait);///set front object in queue wait time to front_wait
            ///front_end = front object in queue start time + front object in queue wait time + front object in queue process time
            int front_end = the_queue.front().get_start_time() + the_queue.front().get_wait_time() + the_queue.front().get_process_time();
            the_queue.front().set_end_time(front_end);///set front object in queue end time to front_end
            total_wait = total_wait + the_queue.front().get_wait_time();///add object wait time to total wait time
            total_people++;///increment total people
            cout << the_queue.front().get_arrival_id() << "\t\t\t\t" << the_queue.front().get_start_time()
                 << "\t " << the_queue.front().get_end_time() << "\t\t " << the_queue.front().get_wait_time() << endl;
        }


    }

    cout << endl;
    double average_wait = total_wait/total_people; ///average wait
    cout << "number of people: " << total_people << endl << "average wait time: " << average_wait <<endl;

}
///set data for each object in queue
void set_obj_data(my_queue &obj, char a, int s, int p) {

    obj.set_arrival_id(a);
    obj.set_start_time(s);
    obj.set_process_time(p);




}