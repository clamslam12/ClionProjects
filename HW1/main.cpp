///Name: Minh Durbin
///Student ID: 101820610
///HW1
/// Status: Successfully compiled and ran on Clion and csegrid

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class user_input
{
private:
    int max_rannge, num_guesses, count;

public:
    user_input();
    void set_range(int m);
    void set_num_guesses(int n);
    void set_count(int j);
    int get_rangee();
    int get_num();
    int get_count();


};
user_input::user_input() {
    max_rannge = 0;
    num_guesses = 0;
    count = 0;
}

void user_input::set_range(int m) {

    max_rannge = m;
}
void user_input::set_num_guesses(int n){
    num_guesses = n;
}
int user_input::get_rangee() {
    return max_rannge;
}
int user_input::get_num() {
    return num_guesses;
}
void user_input::set_count(int j) {
    count = j;
}
int user_input::get_count() {
    return count;
}

int main() {

    srand(time(NULL));
///main menu to get user max range and number guesses
    user_input e;

    int range, num;
    cout << "Enter the max range" << endl;
    cin >> range;
    e.set_range(range);
    cout << "How many number do you want to guess\n";
    cin >> num;
    e.set_num_guesses(num);
///generating random integers and put them in a vector
///second guess label
sg:
    vector<int> vector_range;
    for(int i = 0; i < e.get_rangee(); i++)
    {
        int random_val = rand() % e.get_rangee() + 1;
        vector_range.push_back(random_val);
    }


///array temp
 int arr_temp[e.get_rangee()];
    for(int i =0; i < e.get_rangee(); i++)
    {
        arr_temp[i] = vector_range[i];
    }






/*optional testing and printing random numbers in vector/array
    for(int i = 0; i < e.get_num(); i++)
    {
        cout << arr_temp[i] << endl;
    }
*/
/// vector guess

    vector<int> vector_guess;
    cout << "Enter your guesses\n";
    for(int i = 0; i < e.get_num(); i++)
    {
        int j;
        cin >> j;
        vector_guess.push_back(j);

    }




    ///comparing values in the 2 vectors
   int count = 0;

        for (int i = 0; i < e.get_num(); i++) {
            for (int j = 0; j < e.get_num(); j++) {

                if (vector_guess[i] == vector_range[j]) {
                    count++;
                    vector_range.erase(vector_range.begin() + j);
                    break;

                }



            }
        }
    if(count!= e.get_num())
    {
        cout << "you got " << count << " correct\n" << "do you want to guess gain? (Y or N)\n";
        char i;
        cin >> i;
        if(i == 'Y' || i == 'y')
        {
            goto sg;
        } else{
            goto quit;

        }



    }else {
        cout << "you won\n";
        cout << "Play again?(Y for yes, N for no)\n";
        char input;
        cin >> input;
        if(input == 'Y' || input == 'y')
        {
            goto sg;
        } else{
            goto quit;
        }

    }

quit:
cout << "\n Goodbye\n";


















    return 0;

}

