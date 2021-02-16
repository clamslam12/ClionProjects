Name: Minh Durbin
HW 4
Student ID: 101820610
Status: Succesfully compiled and ran on Clion and csegrid
Makefile is included

Functions:

MyVector() -> default constructor. Sets vsize to 0 and top to -1. Takes no input.
operator[] -> Overloaded array subcript operator. Takes an integer index i as input. Returns the value of array[i] of an object.
pop_back() -> pop the top integer from the stack and decrements vsize by 1. Takes no input. Returns no output. 
empty() -> checks if the array is empty or not. Takes no input. Returns 1 if empty and -1 if not empty.
push_back() -> pushes an integer on top of the stack. Takes an integer as input. Then increment vsize by 1. Returns no output.
size() -> Returns vsize. Takes no input. Returns vsize as output.
search() -> search the array for a matching integer n. Takes an integer n as input. Returns the index of the matching value if found and -1 if not found.
menu() -> displays a menu for the user.
push() -> prompts user to enter a value to be pushed and reads from the keyboard.
pop() -> prompts user that a value was popped.
empty() -> prompts user if vector is empty or not.
index() -> prompts user if value is not found. If found then display the index of found value.