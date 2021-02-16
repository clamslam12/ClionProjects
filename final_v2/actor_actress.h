//
// Created by clams on 4/24/2019.
//

#ifndef FINAL_V2_ACTOR_ACTRESS_H
#define FINAL_V2_ACTOR_ACTRESS_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
class BSTact {
private:
    struct node
            {
        int year;
        string award;
        int winner;
        string name;
        string film;
        node *left;
        node *right;
    };

    node *root;





public:

    BSTact();

   node* insert(int y, string a, int w, string n, string f, node* t);

    node* insert2(string n, int y1, string f1, int w1, string a1, node* t);

    void inorder(node* t);

    node *insertByName(int y, string a, int w, string n, string f, node *t);

    node *insertByFilm(int y, string a, int w, string n, string f, node *t);

    node *insertByYear(int y, string a, int w, string n, string f, node *t);

    node *insertByAward(int y, string a, int w, string n, string f, node *t);

    node *insertByWinner(int y, string a, int w, string n, string f, node *t);

    void inorderByName(node *t);

    void inorderByFilm(node *t);

    void inorderByYear(node *t);

    void inorderByAward(node *t);

    void inorderByWinner(node *t);

    node* deleteNode(node* root, string key);

    void insert(int y, string a, int w, string n, string f);

    void insert2_(string n, int y1, string f1, int w1, string a1);

    void display();

    node* return_root();

    string return_name();

    string return_film();

    int return_year();

    string return_award();

    int return_winner();

    node * minValueNode(node* node);

    void insertByName(int y, string a, int w, string n, string f);

    void insertByFilm(int y, string a, int w, string n, string f);

    void insertByYear(int y, string a, int w, string n, string f);

    void insertByAward(int y, string a, int w, string n, string f);

    void insertByWinner(int y, string a, int w, string n, string f);

    void sortByName();

    void sortByFilm();

    void sortByYear();

    void sortByAward();

    void sortByWinner();

    void searchCompleteByName(node *root, string key);

    void searchCompleteByFilm(node *root, string key);

    void searchCompleteByYear(node *root, int key);

    void searchCompleteByAward(node *root, string key);

    void searchCompleteByWinner(node* root, int key);

    void searchPartialByName(node *root, string key);

    void searchPartialByAward(node *root, string key);

    void searchPartialByFilm(node *root, string key);

    void searchPartialByYear(node *root, string key);

    void searchPartialByWinner(node *root, string key);

    node* delete_driver(string n);

    node* search(node* root, string key);

    node* search_name_NOMA(node* root, string key);

    node* search_year_NOMA(node* root, int key);

    node* search_winner_NOMA(node* root, int key);

    node* search_film_NOMA(node* root, string key);

    node* search_award_NOMA(node* root, string key);


    // For act-actress and nominations
    void inorderPrintByName(node* t, ofstream &outFile);

    void sortPrintByName(ofstream &outFile);

};




#endif //FINAL_V2_ACTOR_ACTRESS_H
