//
// Created by clams on 4/29/2019.
//

#ifndef FINAL_V2_PICTURES_H
#define FINAL_V2_PICTURES_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
class BSTpic
        {
private:
    struct node {
        string name;
        int year;
        int nominations;
        double rating;
        int duration;
        string genre1;
        string genre2;
        string release;
        int metacritic;
        string synopsis;
        node *left;
        node *right;
    };

    node *root;



public:

    BSTpic();
   node* insert(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);


    node* insert2(int ye, string na, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);


    void inorder(node* t);



    node *insertByName(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);



    node *insertByYear(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByNominations(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByRating(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByDuration(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByGenre1(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByGenre2(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByRelease(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertByMetacritic(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);

    node *insertBySynopsis(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn, node* t);


    void inorderByName(node *t);

    void inorderByYear(node *t);

    void inorderByNominations(node *t);

    void inorderByRating(node *t);

    void inorderByDuration(node *t);

    void inorderByGenre1(node *t);

    void inorderByGenre2(node *t);

    void inorderByRelease(node *t);

    void inorderByMetacritic(node *t);

    void inorderBySynopsis(node *t);

    node* deleteNode(node* root, string key);

    void insert(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insert2_(int ye, string na, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void display();


    node* return_root();


    string return_name();

    int return_year();


    int return_nominations();


    double return_rating();


    int return_duration();


    string return_genre1();

    string return_genre2();

    string return_release();

    int return_metacritic();

    string return_synopsis();

    node * minValueNode(node* node);


    void insertByName(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByYear(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByNominations(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByRating(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByDuration(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByGenre1(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByGenre2(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByRelease(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertByMetacritic(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);

    void insertBySynopsis(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn);


    void sortByName();

    void sortByYear();

    void sortByNominations();

    void sortByRating();

    void sortByDuration();

    void sortByGenre1();

    void sortByGenre2();

    void sortByRelease();

    void sortByMetacritic();

    void sortBySynopsis();


    void searchCompleteByName(node *root, string key);

    void searchCompleteByYear(node *root, string key);

    void searchCompleteByNominations(node *root, string key);

    void searchCompleteByRating(node *root, string key);

    void searchCompleteByDuration(node *root, string key);

    void searchCompleteByGenre1(node *root, string key);

    void searchCompleteByGenre2(node *root, string key);

    void searchCompleteByRelease(node *root, string key);

    void searchCompleteByMetacritic(node *root, string key);


    void searchPartialByName(node *root, string key);

    void searchPartialByYear(node *root, string key);

    void searchPartialByNominations(node *root, string key);

    void searchPartialByRating(node *root, string key);

    void searchPartialByDuration(node *root, string key);

    void searchPartialByGenre1(node *root, string key);

    void searchPartialByGenre2(node *root, string key);

    void searchPartialByRelease(node *root, string key);

    void searchPartialByMetacritic(node *root, string key);

    node* delete_driver(string n);


    node* search(node* root, string key);

    //for pictures BST
    void inorderPrintByName(node *t, ofstream &outFile);

    void sortPrintByName(ofstream &outFile);

    node* search_name_NOMA(node* root, string key);


    node* search_year_NOMA(node* root, string key);




    node* search_nominations_NOMA(node* root, string key);




    node* search_rating_NOMA(node* root, string key);


    node* search_duration_NOMA(node* root, string key);


    node* search_genre1_NOMA(node* root, string key);


    node* search_genre2_NOMA(node* root, string key);

    node* search_release_NOMA(node* root, string key);


    node* search_metacritic_NOMA(node* root, string key);



};



#endif //FINAL_V2_PICTURES_H
