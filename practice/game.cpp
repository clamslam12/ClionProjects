//
// Created by clams on 2/4/2019.
//
#include "game.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int game::get_vector_num(int i) {

    return random_num[i];
}

int game::get_range() {
    return range;
}

int game::get_guess() {
    return guess;
}

void game::set_range(int r) {

    range = r;

}

void game::set_guess(int n) {

    guess = n;

}

game::game() {
    range = 0;
    guess = 0;


}
void game::set_test_num(int r) {
    for(int i = 0; i < guess; i++)
    {

        test_num.push_back(r);
    }
}
void game::set_rand() {
    for(int i = 0; i < guess; i++)
    {
        int r = rand() % range + 1;
        random_num.push_back(r);

    }

}

void game::get_rand_num() {
    for(int i =0; i < guess; i++)
    {
        cout << random_num[i] << endl;
    }
}

void game::get_test_num() {
    for(int i = 0; i < guess; i++)
    {
        cout << test_num[i] << endl;
    }
}


