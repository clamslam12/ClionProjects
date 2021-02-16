#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include "game.h"
#include "functions.h"

using namespace std;

int main() {

    srand(time(NULL));
    game g;
    cout << "Enter your range\n";
    int r;
    cin >> r;
    g.set_range(r);
    cout << "Enter your guess\n";
    int n;
    cin >> n;
    g.set_guess(n);

    g.set_rand();
    g.get_rand_num();
    ofstream outfile;
    outfile.open("random_number.txt");
    for(int i = 0; i < g.get_guess();i++)
    {
        outfile << g.get_vector_num(i) << "\r\n"; ///use for writing each number to a new line


    }
    outfile.close();

    ifstream infile;
    infile.open("random_number.txt");
    for(int i = 0; i < g.get_guess();i++)
    {
        int j;
        infile >> j;
        g.set_test_num(j);

    }
    cout << endl;
    g.get_test_num();

    cout<< endl<< endl;

    /// testing header and cpp files for stand - alone functions


    cout << "enter two integers\n";
    int a,b;
    cin >> a >> b;
    cout << "their sum is " << sum(a,b);
    print("Hi my name is minh");




















    return 0;
}