//
// Created by clams on 2/4/2019.
//

#ifndef PRACTICE_GAME_H
#define PRACTICE_GAME_H

#endif //PRACTICE_GAME_H

#include <vector>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

class game
{
private:
    vector<int> random_num;
    vector<int> test_num;
    int range, guess;


public:
    game();
    void set_test_num(int r);
    void get_test_num();
    int get_vector_num(int i);
    int get_range();
    int get_guess();
    void set_range(int r);
    void set_guess(int n);
    void set_rand();
    void get_rand_num();
};
