Name: Minh Durbin
HW 6
Student ID: 101820610
Status: Succesfully compiled and ran on Clion and csegrid
Makefile is included

Functions:

my_queue(): default constructor. Assigns private variables to 0. Takes no input. Returns no output.
char get_arrival_id(): Returns char arrival id of object. Takes no input. 
int get_start_time(): returns int start time of object. Takes no input.
int get_process_time(): returns process time of object. Takes no input.
void set_arrival_id(char a): set object arrival id. Takes a char as input. Returns nothing.
void set_start_time(int s): set object start time. Takes an int as input. Returns nothing
void set_process_time(int p): set object process time. Takes an int as input. Returns nothing.
void set_wait_time(int w): set object wait time. Takes an int as input. Returns nothing.
void set_end_time(int e): set object end time. Takes an int as input. Returns nothing.
int get_wait_time(): Returns object wait time. Takes no input
int get_end_time(): Returns object end time. Takes no input.
void do_stuff(queue<my_queue> &q, stack<int> track_prev_end): main driver of program. Takes a queue of objects and a stack to calculate
the end time and wait time of each customer. The queue holds objects from my_queue class and each object represents a customer. The stack
holds the previous customer's end time after popping each object from the queue. Then it prints out each customers wait time, end time,
and start time. Returns nothing.
void set_obj_data(my_queue& obj, char a, int s, int p): set data for objects in queue. Takes an object of my_queue class, char, and two ints
. Then it calls set_start_time, set_arrival_id, and set_process time of that object with the three inputs as inputs for 
set_start_time, set_arrival_id, and set_process time. Returns nothing.
