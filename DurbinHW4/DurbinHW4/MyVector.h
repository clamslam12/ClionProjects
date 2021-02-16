#ifndef MYVECTOR_H
#define MYVECTOR_H
/*Defines a MyVector type which mirrors the STL vector class.  It uses templates and dynamic memory allocation*/
const int max_size = 1000;
using namespace std;
namespace HW4
{
    typedef int T;
    class MyVector
    {
    private:
        T A[max_size];
        T top;
        T vsize;

    public:
        MyVector();
        T operator[] (int index);
        void pop_back();
        void push_back(T value);
        T size(); //returns the vector size
        bool empty();//determine if is empty
        T search(T arr_size, T search_value);//return index of location or -1 if not found







    };

}//namespace
#endif
