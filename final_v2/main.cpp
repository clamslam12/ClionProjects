#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include "functions.h"
#include "actor_actress.h"
#include "nominations.h"
#include "pictures.h"
using namespace std;


int main()
{


    int main_op = 100;
    while (main_op != 4)
    {

        cout << "\nChoose an option\n";
        cout << "1. Actor-Actress CSV\n";
        cout << "2. Nominations CSV\n";
        cout << "3. Pictures CSV\n";
        cout << "4. Exit\n";
        cin >> main_op;

        if (main_op == 1)
        {
            BSTact o, z, p, q, r, s;

            int option = 100;
            while (option != 8) {
                menu2:
                cout << "\n1. Add a record---(MUST DO BEFORE CHOOSING OTHER OPTIONS)\n";
                cout << "2. Search for a record and modify its field\n";
                cout << "3. Search for a record and delete its field\n";
                cout << "4. Sort by any field and print\n";
                cout << "5. Complete search by any field\n";
                cout << "6. Partial search by any field\n";
                cout << "7. Export to file\n";
                cout << "8. Exit\n";
                cin >> option;

                if (option == 1) {
                    ifstream infile;

                    string aa = "actor-actress.csv";

                    infile.open(aa);
                    string title, year, award, winner, name, film;
                    if (infile) {
                        getline(infile, title, '\n');
                    }
                    while (infile) {

                        getline(infile, year, ',');
                        getline(infile, award, ',');
                        getline(infile, winner, ',');
                        getline(infile, name, ',');
                        getline(infile, film, '\n');

                        //Convert the strings all to Upper Case
                        convertToUpper(name);
                        convertToUpper(award);
                        convertToUpper(film);

                        int year1, winner1;
                        if (year == "" || winner == "")
                            break;
                        else {
                            year1 = stoi(year);
                            winner1 = stoi(winner);

                            o.insertByName(year1, award, winner1, name, film);
                            z.insertByName(year1, award, winner1, name, film);
                            p.insertByFilm(year1, award, winner1, name, film);
                            q.insertByYear(year1, award, winner1, name, film);
                            r.insertByAward(year1, award, winner1, name, film);
                            s.insertByWinner(year1, award, winner1, name, film);

                            cout << year1 << " " << award << " " << winner1 << " " << name << " " << film << endl;
                        }
                    }
                    cout << endl << endl;
                }


                if (option == 2) {
                    /// search for a record(name) and modify name

                    cout << "Please enter a record to modify its field\n";
                    string n;
                    cin.ignore();
                    getline(cin, n);

                    convertToUpper(n);


                    if (o.search_name_NOMA(o.return_root(), n) == NULL) {
                        cout << "\nNo Match Found!\n";
                        goto menu2;
                    } else {
                        cout << "\nMatch Found!\n";
                        cout << " Name: " << o.search_name_NOMA(o.return_root(), n)->name << " Year: "
                             << o.search_name_NOMA(o.return_root(), n)->year << " Film: "
                             << o.search_name_NOMA(o.return_root(), n)->film << " Award: "
                             << o.search_name_NOMA(o.return_root(), n)->award << " Winner: "
                             << o.search_name_NOMA(o.return_root(), n)->winner << endl;

                    }

                    int sub_op = 100;
                    bool re = false;
                    string n1;
                    ///sub menu for modifying fields
                    while (sub_op != 6) {

                        cout << "\n1. Modify name\n";
                        cout << "2. Modify year\n";
                        cout << "3. Modify film\n";
                        cout << "4. Modify award\n";
                        cout << "5. Modify winner\n";
                        cout << "6. Exit\n";
                        cin >> sub_op;
                        ///modifying name

                        if (sub_op == 1) {
                            re = true;
                            cout << "Please enter a name to replace\n";
                            cin.ignore();
                            getline(cin, n1);
                            convertToUpper(n1);
                            mod_name(o, n, n1);
                            o.display();
                        }

                        if (sub_op == 2) {
                            ///modifying year
                            cout << "Enter the year you want to replace\n";
                            int y2;
                            cin >> y2;
                            if (re) {
                                o.search(o.return_root(), n1)->year = y2;
                                o.display();
                            } else {
                                o.search(o.return_root(), n)->year = y2;
                                o.display();
                            }
                        }
                        if (sub_op == 3) {

                            ///modifying film
                            cout << "Enter the name of film\n";
                            string f3;
                            cin.ignore();
                            getline(cin, f3);
                            convertToUpper(f3);
                            if (re) {
                                o.search(o.return_root(), n1)->film = f3;
                                o.display();
                            } else {
                                o.search(o.return_root(), n)->film = f3;
                                o.display();
                            }
                        }
                        if (sub_op == 4) {
                            cout << "\nChoose an option\n";
                            cout << "1. Actor in a Leading Role\n";
                            cout << "2. Actor in a Supporting Role\n";
                            cout << "3. Actress in a Leading Role\n";
                            cout << "4. Actress in a Supporting Role\n";
                            int award_op;
                            cin >> award_op;

                            if (re) {
                                if (award_op == 1) {
                                    o.search(o.return_root(), n1)->award = "ACTOR IN A LEADING ROLE";
                                }
                                if (award_op == 2) {
                                    o.search(o.return_root(), n1)->award = "ACTOR IN A SUPPORTING ROLE";
                                }
                                if (award_op == 3) {
                                    o.search(o.return_root(), n1)->award = "ACTRESS IN A LEADING ROLE";
                                }
                                if (award_op == 4) {
                                    o.search(o.return_root(), n1)->award = "ACTRESS IN A SUPPORTING ROLE";
                                }
                                o.display();
                            } else {
                                if (award_op == 1) {
                                    o.search(o.return_root(), n)->award = "ACTOR IN A LEADING ROLE";
                                }
                                if (award_op == 2) {
                                    o.search(o.return_root(), n)->award = "ACTOR IN A SUPPORTING ROLE";
                                }
                                if (award_op == 3) {
                                    o.search(o.return_root(), n)->award = "ACTRESS IN A LEADING ROLE";
                                }
                                if (award_op == 4) {
                                    o.search(o.return_root(), n)->award = "ACTRESS IN A SUPPORTING ROLE";
                                }
                                o.display();
                            }
                        }

                        if (sub_op == 5) {
                            cout << "1. Winner\n";
                            cout << "2. Loser\n";
                            int w2;
                            cin >> w2;

                            if (re) {
                                if (w2 == 1) {
                                    o.search(o.return_root(), n1)->winner = 1;
                                } else {
                                    o.search(o.return_root(), n1)->winner = 0;
                                }

                                o.display();
                            } else {
                                if (w2 == 1) {
                                    o.search(o.return_root(), n)->winner = 1;
                                } else {
                                    o.search(o.return_root(), n)->winner = 0;
                                }

                                o.display();
                            }
                        }

                    }
                }
                if (option == 3) {
                    //// delete record
                    cout << "Enter a name to delete\n";
                    string n_to_delete;
                    cin.ignore();
                    getline(cin, n_to_delete);
                    convertToUpper(n_to_delete);
                    if (o.search_name_NOMA(o.return_root(), n_to_delete) == NULL) {
                        cout << "\nNo Match Found!\n";
                    } else {
                        o.delete_driver(n_to_delete);
                        o.display();
                        cout << "Delete Complete!\n";
                    }
                }
                if (option == 4) {    ///sort by any field
                    int sub_op2 = 100;
                    while (sub_op2 != 6) {
                        cout << "Choose an option\n";
                        cout << "1. Sort by name\n";
                        cout << "2. Sort by year\n";
                        cout << "3. Sort by award\n";
                        cout << "4. Sort by winner\n";
                        cout << "5. Sort by film\n";
                        cout << "6. Exit\n";
                        cin >> sub_op2;

                        if (sub_op2 == 1) {
                            //this below is for SORT BY NAME with name at first column(ascending order)
                            cout << endl << endl;
                            z.sortByName();
                        }
                        if (sub_op2 == 2) {
                            //this below is for SORT BY YEAR with year at first column(ascending order)
                            cout << endl << endl;
                            q.sortByYear();
                        }
                        if (sub_op2 == 3) {
                            //this below is for SORT BY AWARD with award title at first column(ascending order)
                            cout << endl << endl;
                            r.sortByAward();
                        }
                        if (sub_op2 == 4) {
                            //this below is for SORT BY WINNER with winners at first column(ascending order)
                            cout << endl << endl;
                            s.sortByWinner();
                        }
                        if (sub_op2 == 5) {

                            //this below is for SORT BY FILM with film title at first column(ascending order)
                            cout << endl << endl;
                            p.sortByFilm();
                        }
                    }
                    if (option == 5) {
                        ///complete search by any field
                        int sub_op3 = 100;
                        while (sub_op3 != 6) {
                            cout << "Choose an option\n";
                            cout << "1. Complete search by name\n";
                            cout << "2. Complete search by year\n";
                            cout << "3. Complete search by award\n";
                            cout << "4. Complete search by winner\n";
                            cout << "5. Complete search by film\n";
                            cout << "6. Exit\n";
                            cin >> sub_op3;

                            if (sub_op3 == 1) {
                                //for complete search by Name
                                cout << "Complete search by name(Enter name): " << endl;
                                string n0;
                                cin.ignore();
                                getline(cin, n0);

                                convertToUpper(n0);

                                z.searchCompleteByName(z.return_root(), n0);

                                if (z.search_name_NOMA(z.return_root(), n0) == NULL) {
                                    cout << "No Match Found!\n";
                                }
                            }

                            if (sub_op3 == 2) {
                                //for complete search by Year
                                cout << "Complete search by year(Enter year): " << endl;
                                int y0;
                                cin >> y0;
                                q.searchCompleteByYear(q.return_root(), y0);
                                if (q.search_year_NOMA(q.return_root(), y0) == NULL) {
                                    cout << "No Match Found!\n";
                                }

                            }

                            if (sub_op3 == 3) {
                                //for complete search by Award
                                cout << "Complete search by award(Enter award): " << endl;
                                string a0;
                                cin.ignore();
                                getline(cin, a0);
                                convertToUpper(a0);
                                r.searchCompleteByAward(r.return_root(), a0);
                                if (r.search_award_NOMA(r.return_root(), a0) == NULL) {
                                    cout << "No Match Found!\n";
                                }
                            }

                            if (sub_op3 == 4) {
                                //for complete search by Winner
                                cout << "Complete search by winner(Enter 1 for winners and 0 for non-winners): "
                                     << endl;
                                int w0;
                                cin >> w0;
                                s.searchCompleteByWinner(s.return_root(), w0);
                                if (s.search_winner_NOMA(s.return_root(), w0) == NULL) {
                                    cout << "No Match Found!\n";
                                }
                            }

                            if (sub_op3 == 5) {
                                //for complete search by Film
                                cout << "Complete search by film(Enter film name): " << endl;
                                string f0;
                                cin.ignore();
                                getline(cin, f0);
                                convertToUpper(f0);
                                p.searchCompleteByFilm(p.return_root(), f0);
                                if (p.search_film_NOMA(p.return_root(), f0) == NULL) {
                                    cout << "No Match Found!\n";
                                }
                                ///check for duplicates
                            }
                        }
                    }
                    if (option == 6) {
                        ///partial search by any field
                        int sub_op4 = 100;
                        while (sub_op4 != 6) {
                            cout << "Choose an option\n";
                            cout << "1. Partial search by name\n";
                            cout << "2. Partial search by year\n";
                            cout << "3. Partial search by award\n";
                            cout << "4. Partial search by winner\n";
                            cout << "5. Partial search by film\n";
                            cout << "6. Exit\n";
                            cin >> sub_op4;
                            if (sub_op4 == 1) {
                                ////for partial search by Name
                                cout << "Partial search by Name(Enter Name)(If not results, then match not found): "
                                     << endl;
                                string n0;
                                cin.ignore();
                                getline(cin, n0);
                                convertToUpper(n0);
                                z.searchPartialByName(z.return_root(), n0);
                            }
                            if (sub_op4 == 2) {
                                ////for partial search by Year
                                cout << "Partial search by Year(Enter Year)(If not results, then match not found): "
                                     << endl;
                                string y0;
                                cin.ignore();
                                getline(cin, y0);
                                q.searchPartialByYear(z.return_root(), y0);
                            }
                            if (sub_op4 == 3) {
                                ////for partial search by Award
                                cout << "Partial search by Award(If not results, then match not found)1(Enter Award): "
                                     << endl;
                                string a0;
                                cin.ignore();
                                getline(cin, a0);
                                convertToUpper(a0);
                                r.searchPartialByAward(z.return_root(), a0);
                            }
                            if (sub_op4 == 4) {
                                ////for partial search by Winner
                                cout << "Partial search by Winner(If not results, then match not found)(Enter Winner): "
                                     << endl;
                                string w0;
                                cin.ignore();
                                getline(cin, w0);
                                s.searchPartialByWinner(z.return_root(), w0);
                            }
                            if (sub_op4 == 5) {
                                ////for partial search by Film
                                cout << "Partial search by Film(If not results, then match not found)(Enter Film): "
                                     << endl;
                                string f0;
                                cin.ignore();
                                getline(cin, f0);
                                convertToUpper(f0);
                                p.searchPartialByFilm(z.return_root(), f0);
                                ///check for duplicates
                            }
                        }
                    }
                    if (option == 7) {
                        ofstream outFile;
                        string fileName;
                        cout << "Enter file name(DO NOT ENTER THE EXTENSIONS LIKE .csv or .txt, JUST THE FILE NAME)\n";
                        cin.ignore();
                        getline(cin, fileName);
                        fileName = fileName + ".csv";
                        outFile.open(fileName);
                        outFile << "YEAR" << "," << "AWARD" << "," << "WINNER" << "," << "NAME" << "," << "FILM"
                                << "\n";
                        o.sortPrintByName(outFile);
                        outFile.close();

                    }
                }
            }
            if (main_op == 2) ////for nominations database
            {

                BSTnom o_n, z_n, p_n, q_n, r_n, s_n;
                int option_n = 100;

                {

                    while (option_n != 9) {
                        menu3:
                        cout << "1. Add a record(MUST DO BEFORE CHOOSING OTHER OPTIONS\n";
                        cout << "2. Search for a record and modify its field\n";
                        cout << "3. Search for a record and delete its field\n";
                        cout << "4. Sort by any field and print\n";
                        cout << "5. Complete search by any field\n";
                        cout << "6. Partial search by any field\n";
                        cout << "7. Interesting Facts\n";
                        cout << "8. Export to file\n";
                        cout << "9. Exit\n";

                        cin >> option_n;


                        if (option_n == 1) {

                            ifstream infile;

                            string aa = "nominations.csv";

                            infile.open(aa);
                            string title, year, award, winner, name, film, dummy;
                            if (infile) {

                                getline(infile, title, '\n');
                            }
                            for (int i = 0; i < 10086; i++) {

                                getline(infile, year, ',');
                                getline(infile, award, ',');
                                getline(infile, winner, ',');
                                getline(infile, name, ',');
                                getline(infile, film, '\n');

                                convertToUpper(award);
                                convertToUpper(name);
                                convertToUpper(film);

                                int year1, winner1;
                                if (name == "")
                                    name = "0";
                                if (film == "")
                                    film = "0";
                                if (name == "" || film == "") {
                                    name = "0";
                                    film = "0";
                                }


                                year1 = stoi(year);
                                winner1 = stoi(winner);


                                film.erase(remove(film.begin(), film.end(), ','), film.end()); ///erase ,
                                film.erase(remove(film.begin(), film.end(), '\r'), film.end());///erase \r



                                o_n.insertByName(year1, award, winner1, name, film);
                                z_n.insertByName(year1, award, winner1, name, film);
                                p_n.insertByFilm(year1, award, winner1, name, film);
                                q_n.insertByYear(year1, award, winner1, name, film);
                                r_n.insertByAward(year1, award, winner1, name, film);
                                s_n.insertByWinner(year1, award, winner1, name, film);


                                cout << "YEAR: " << year1 << " " << "AWARD: " << award << " " << "WINNER: " << winner1
                                     << " "
                                     << "NAME: " << name << " " << "FILM: " << film << endl;
                            }
                        }

                        if (option_n == 2) {
                            /// search for a record(name) and modify name

                            cout << "Please enter a record(name) to modify its field\n";
                            string n;
                            cin.ignore();
                            getline(cin, n);
                            convertToUpper(n);

                            if (o_n.search_name_NOMA(o_n.return_root(), n) == NULL) {
                                cout << "\nNo Match Found!\n";
                                goto menu3;
                            } else {
                                cout << "\nMatch Found!\n";
                                cout << " Name: " << o_n.search_name_NOMA(o_n.return_root(), n)->name << " Year: "
                                     << o_n.search_name_NOMA(o_n.return_root(), n)->year << " Film: "
                                     << o_n.search_name_NOMA(o_n.return_root(), n)->film << " Award: "
                                     << o_n.search_name_NOMA(o_n.return_root(), n)->award << " Winner: "
                                     << o_n.search_name_NOMA(o_n.return_root(), n)->winner << endl;

                            }

                            int sub_op = 100;
                            string n1;

                            ///sub menu for modifying fields
                            while (sub_op != 6) {
                                bool count; ///to see if user modify the name
                                cout << "1. Modify name\n";
                                cout << "2. Modify year\n";
                                cout << "3. Modify film\n";
                                cout << "4. Modify award\n";
                                cout << "5. Modify winner\n";
                                cout << "6. Exit\n";
                                cin >> sub_op;
                                ///modifying name

                                if (sub_op == 1) {
                                    count = true;
                                    cout << "Please enter a name to replace\n";
                                    cin.ignore();
                                    getline(cin, n1);
                                    convertToUpper(n1);
                                    mod_name_n(o_n, n, n1);
                                    o_n.sortByName();
                                }

                                if (sub_op == 2) {
                                    ///modifying year
                                    cout << "Enter the year you want to replace\n";
                                    int y2;
                                    cin >> y2;
                                    cin.ignore();
                                    if (count) {
                                        o_n.search(o_n.return_root(), n1)->year = y2;
                                        o_n.sortByYear();
                                    } else {
                                        o_n.search(o_n.return_root(), n)->year = y2;
                                        o_n.sortByYear();
                                    }
                                }
                                if (sub_op == 3) {
                                    ///modifying film
                                    cout << "Enter the name of film\n";
                                    string f3;
                                    cin.ignore();
                                    getline(cin, f3);
                                    convertToUpper(f3);
                                    if (count) {

                                        o_n.search(o_n.return_root(), n1)->film = f3;
                                        o_n.sortByFilm();
                                    } else {
                                        o_n.search(o_n.return_root(), n)->film = f3;
                                        o_n.sortByFilm();
                                    }
                                }
                                if (sub_op == 4) {
                                    cout << "Enter the award\n";
                                    string a123;
                                    cin.ignore();
                                    getline(cin, a123);
                                    convertToUpper(a123);
                                    if (count) {
                                        o_n.search(o_n.return_root(), n1)->award = a123;
                                        o_n.sortByAward();
                                    } else {
                                        o_n.search(o_n.return_root(), n)->award = a123;
                                        o_n.sortByAward();
                                    }
                                }

                                if (sub_op == 5) {
                                    cout << "1. Winner\n";
                                    cout << "2. Loser\n";
                                    int w2;
                                    cin >> w2;
                                    if (count) {
                                        if (w2 == 1) {
                                            o_n.search(o_n.return_root(), n1)->winner = 1;
                                        } else {
                                            o_n.search(o_n.return_root(), n1)->winner = 0;
                                        }

                                        o_n.sortByWinner();
                                    } else {
                                        if (w2 == 1) {
                                            o_n.search(o_n.return_root(), n)->winner = 1;
                                        } else {
                                            o_n.search(o_n.return_root(), n)->winner = 0;
                                        }

                                        o_n.sortByWinner();
                                    }
                                }

                            }
                        }
                        if (option_n == 3) {
                            //// delete record
                            cout << "enter a name to delete\n";
                            string n_to_delete;
                            cin.ignore();
                            getline(cin, n_to_delete);
                            convertToUpper(n_to_delete);
                            if (o_n.search_name_NOMA(o_n.return_root(), n_to_delete) == NULL) {
                                cout << "\nNo Match Found!\n";
                            } else {
                                o_n.delete_driver(n_to_delete);
                                o_n.sortByName();
                                cout << "Delete Complete!\n";
                            }
                        }
                        if (option_n == 4) {    ///sort by any field
                            int sub_op2 = 100;
                            while (sub_op2 != 6) {
                                cout << "Choose an option\n";
                                cout << "1. Sort by name\n";
                                cout << "2. Sort by year\n";
                                cout << "3. Sort by award\n";
                                cout << "4. Sort by winner\n";
                                cout << "5. Sort by film\n";
                                cout << "6. Exit\n";
                                cin >> sub_op2;

                                if (sub_op2 == 1) {
                                    //this below is for SORT BY NAME with name at first column(ascending order)
                                    cout << endl << endl;
                                    z_n.sortByName();
                                }
                                if (sub_op2 == 2) {
                                    //this below is for SORT BY YEAR with year at first column(ascending order)
                                    cout << endl << endl;
                                    q_n.sortByYear();
                                }
                                if (sub_op2 == 3) {
                                    //this below is for SORT BY AWARD with award title at first column(ascending order)
                                    cout << endl << endl;
                                    r_n.sortByAward();
                                }
                                if (sub_op2 == 4) {
                                    //this below is for SORT BY WINNER with winners at first column(ascending order)
                                    cout << endl << endl;
                                    s_n.sortByWinner();
                                }
                                if (sub_op2 == 5) {

                                    //this below is for SORT BY FILM with film title at first column(ascending order)
                                    cout << endl << endl;
                                    p_n.sortByFilm();
                                }
                            }

                        }
                        if (option_n == 5) {
                            ///complete search by any field
                            int sub_op3 = 100;
                            while (sub_op3 != 6) {

                                cout << "Choose an option\n";
                                cout << "1. Complete search by name\n";
                                cout << "2. Complete search by year\n";
                                cout << "3. Complete search by award\n";
                                cout << "4. Complete search by winner\n";
                                cout << "5. Complete search by film\n";
                                cout << "6. Exit\n";
                                cin >> sub_op3;

                                if (sub_op3 == 1) {
                                    //for complete search by Name
                                    cout << "Complete search by name(Enter name): " << endl;
                                    string n0;
                                    cin.ignore();
                                    getline(cin, n0);
                                    convertToUpper(n0);
                                    z_n.searchCompleteByName(z_n.return_root(), n0);
                                    if (z_n.search_name_NOMA(z_n.return_root(), n0) == NULL) {
                                        cout << "\nNo Match Found!\n";
                                    }

                                }
                                if (sub_op3 == 2) {
                                    //for complete search by Year
                                    cout << "Complete search by year(Enter year): " << endl;
                                    int y0;
                                    cin >> y0;
                                    q_n.searchCompleteByYear(q_n.return_root(), y0);
                                    if (q_n.search_year_NOMA(q_n.return_root(), y0) == NULL) {
                                        cout << "\nNo Match Found!\n";
                                    }
                                }
                                if (sub_op3 == 3) {
                                    //for complete search by Award
                                    cout << "Complete search by award(Enter award): " << endl;
                                    string a0;
                                    cin.ignore();
                                    getline(cin, a0);
                                    convertToUpper(a0);
                                    r_n.searchCompleteByAward(r_n.return_root(), a0);
                                    if (r_n.search_award_NOMA(r_n.return_root(), a0) == NULL) {
                                        cout << "\nNo Match Found!\n";
                                    }
                                }
                                if (sub_op3 == 4) {
                                    //for complete search by Winner
                                    cout << "Complete search by winner(Enter 1 for winners and 0 for non-winners): "
                                         << endl;
                                    int w0;
                                    cin >> w0;
                                    s_n.searchCompleteByWinner(s_n.return_root(), w0);
                                    if (s_n.search_winner_NOMA(s_n.return_root(), w0) == NULL) {
                                        cout << "\nNo Match Found!\n";
                                    }
                                }
                                if (sub_op3 == 5) {
                                    //for complete search by Film
                                    cout << "Complete search by film(Enter film name): " << endl;
                                    string f0;
                                    cin.ignore();
                                    getline(cin, f0);
                                    convertToUpper(f0);
                                    p_n.searchCompleteByFilm(p_n.return_root(), f0);
                                    if (p_n.search_film_NOMA(p_n.return_root(), f0) == NULL) {
                                        cout << "\nNo Match Found!\n";
                                    }
                                    ///check for duplicates
                                }
                            }
                        }
                        if (option_n == 6) {
                            ///partial search by any field
                            int sub_op4 = 100;
                            while (sub_op4 != 6) {
                                cout << "Choose an option\n";
                                cout << "1. Partial search by name\n";
                                cout << "2. Partial search by year\n";
                                cout << "3. Partial search by award\n";
                                cout << "4. Partial search by winner\n";
                                cout << "5. Partial search by film\n";
                                cout << "6. Exit\n";
                                cin >> sub_op4;
                                if (sub_op4 == 1) {
                                    ////for partial search by Name
                                    cout << "Partial search by Name(Enter Name)(If not results, then match not found): "
                                         << endl;
                                    string n0;
                                    cin.ignore();
                                    getline(cin, n0);
                                    convertToUpper(n0);
                                    z_n.searchPartialByName(z_n.return_root(), n0);
                                }
                                if (sub_op4 == 2) {
                                    ////for partial search by Year
                                    cout << "Partial search by Year(Enter Year)(If not results, then match not found): "
                                         << endl;
                                    string y0;
                                    cin.ignore();
                                    getline(cin, y0);
                                    q_n.searchPartialByYear(z_n.return_root(), y0);
                                }
                                if (sub_op4 == 3) {
                                    ////for partial search by Award
                                    cout
                                            << "Partial search by Award(Enter Award)(If not results, then match not found): "
                                            << endl;
                                    string a0;
                                    cin.ignore();
                                    getline(cin, a0);
                                    convertToUpper(a0);
                                    r_n.searchPartialByAward(z_n.return_root(), a0);
                                }
                                if (sub_op4 == 4) {
                                    ////for partial search by Winner
                                    cout
                                            << "Partial search by Winner(Enter Winner)(If not results, then match not found): "
                                            << endl;
                                    string w0;
                                    cin.ignore();
                                    getline(cin, w0);
                                    s_n.searchPartialByWinner(z_n.return_root(), w0);
                                }
                                if (sub_op4 == 5) {
                                    ////for partial search by Film
                                    cout << "Partial search by Film(Enter Film)(If not results, then match not found): "
                                         << endl;
                                    string f0;
                                    cin.ignore();
                                    getline(cin, f0);
                                    convertToUpper(f0);
                                    p_n.searchPartialByFilm(z_n.return_root(), f0);
                                    ///check for duplicates
                                }
                            }
                        }
                        if (option_n == 7) {
                            int option_h = 100;

                            while (option_h != 5) {
                                cout << "1.List best pictures\n";
                                cout << "2.Number of nominations for a specific year\n";
                                cout << "3.List 19th or 20th century records\n";
                                cout << "4.List cinematography\n";
                                cout << "5.exit\n";
                                cin >> option_h;

                                if (option_h == 1) {
                                    cout << "List for Best Picture\n";
                                    r_n.interestingFactAwardType(r_n.return_root());

                                }
                                if (option_h == 2) {
                                    int counterNomByYear = 0;
                                    int yr;
                                    cout << "Enter Year to count the nominations in that year\n";
                                    cin >> yr;
                                    q_n.interestingFactNominationsYear(q_n.return_root(), yr, counterNomByYear);
                                    cout << "There are " << counterNomByYear << " nominations in the year " << yr
                                         << endl;

                                }
                                if (option_h == 3) {
                                    int opt_century = 100;
                                    while (opt_century != 3) {

                                        cout << "Do you want the records of the 20th Century or the 21st century?\n";
                                        cout << "1. Print 20th Century Records\n";
                                        cout << "2. Print 21st Century Records\n";
                                        cout << "3. Exit\n";
                                        cin >> opt_century;

                                        if (opt_century == 1)
                                            q_n.interestingFactYearRange19th(q_n.return_root());


                                        if (opt_century == 2) {
                                            q_n.interestingFactYearRange20th(q_n.return_root());
                                        }

                                    }

                                }
                                if (option_h == 4) {
                                    cout << "List for Cinematography\n";
                                    r_n.interestingFactCinematographyType(r_n.return_root());
                                }
                            }
                        }
                        if (option_n == 8) {
                            ofstream outFile;
                            string fileName;
                            cout
                                    << "Enter file name(DO NOT ENTER THE EXTENSIONS LIKE .csv or .txt, JUST THE FILE NAME)\n";
                            cin.ignore();
                            getline(cin, fileName);
                            fileName = fileName + ".csv";
                            outFile.open(fileName);
                            outFile << "YEAR" << "," << "AWARD" << "," << "WINNER" << "," << "NAME" << "," << "FILM"
                                    << "\n";
                            o_n.sortPrintByName(outFile);
                            outFile.close();
                        }


                    }
                }
            }

            if (main_op == 3)///--------------------------------------------------------------------------pictures
            {
                BSTpic a, b, c, d, e, f, g, h, i, j, k;

                int option = 100;

                while (option != 8) {
                    menu4:
                    cout << "1. Add a record(MUST DO BEFORE CHOOSING OTHER OPTIONS\n";
                    cout << "2. Search for a record and modify its field\n";
                    cout << "3. Search for a record and delete its field\n";
                    cout << "4. Sort by any field and print\n";
                    cout << "5. Complete search by any field\n";
                    cout << "6. Partial search by any field\n";
                    cout << "7. Export to file\n";
                    cout << "8. Exit\n";

                    cin >> option;
                    if (option == 1) {
                        ifstream infile;
//actor-actress.csv
                        string aa = "pictures.csv";

                        infile.open(aa);
                        string title, name, year, nominations, rating, duration, genre1, genre2, release, metacritic, synopsis;
                        if (infile) {
                            getline(infile, title, '\n');
                        }
                        while (!infile.eof()) {

                            getline(infile, name, ',');

//below code for removing the space in the leading position of the "name" column in the csv file if there is
                            size_t found = name.find_first_of(' ');
                            if (found == 0)
                                name = name.erase(0, 1);

                            getline(infile, year, ',');
                            getline(infile, nominations, ',');
                            getline(infile, rating, ',');
                            getline(infile, duration, ',');
                            getline(infile, genre1, ',');
                            getline(infile, genre2, ',');
                            getline(infile, release, ',');
                            getline(infile, metacritic, ',');
                            getline(infile, synopsis, '\n');

                            convertToUpper(name);
                            convertToUpper(genre1);
                            convertToUpper(genre2);
                            convertToUpper(release);
                            convertToUpper(synopsis);

                            int year1, nominations1, duration1, metacritic1;
                            double rating1;

                            if (metacritic == "" && nominations == "") {
                                metacritic = "0";
                                nominations = "0";
                            }

                            if (metacritic == "")
                                metacritic = "0";

                            if (nominations == "-")
                                nominations = "0";


                            year1 = stoi(year);
                            nominations1 = stoi(nominations);
                            rating1 = stod(rating);
                            duration1 = stoi(duration);
                            metacritic1 = stoi(metacritic);


                            a.insertByName(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                           metacritic1, synopsis);
                            b.insertByName(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                           metacritic1, synopsis);
                            c.insertByYear(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                           metacritic1, synopsis);
                            d.insertByNominations(name, year1, nominations1, rating1, duration1, genre1, genre2,
                                                  release,
                                                  metacritic1, synopsis);
                            e.insertByRating(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                             metacritic1, synopsis);
                            f.insertByDuration(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                               metacritic1, synopsis);
                            g.insertByGenre1(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                             metacritic1, synopsis);
                            h.insertByGenre2(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                             metacritic1, synopsis);
                            i.insertByRelease(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                              metacritic1, synopsis);
                            j.insertByMetacritic(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                                 metacritic1, synopsis);
                            k.insertBySynopsis(name, year1, nominations1, rating1, duration1, genre1, genre2, release,
                                               metacritic1, synopsis);

                            cout << "\n Name: " << name << " Year: " << year1 << " Nominations: " << nominations1
                                 << " Rating: " << rating1 << " Duration: " << duration1 << " Genre1: " << genre1
                                 << " Genre2: " << genre2 << " Release: " << release << " Metacritic: " << metacritic1
                                 << " Synopsis: " << synopsis << endl;

                        }
                        cout << endl << endl;

                    }
                    if (option == 2) {
                        /// search for a record(name) and modify name
                        cout << "Please enter a record(name) to modify its field\n";
                        string n;
                        cin.ignore();
                        getline(cin, n);
                        convertToUpper(n);
                        if (a.search_name_NOMA(a.return_root(), n) == NULL) {
                            cout << "\nNo Match Found!\n";
                            goto menu4;
                        } else {
                            cout << "\nMatch Found!\n";
                            cout << " Name: " << a.search_name_NOMA(a.return_root(), n)->name << " Year: "
                                 << a.search_name_NOMA(a.return_root(), n)->year << " Nominations: "
                                 << a.search_name_NOMA(a.return_root(), n)->nominations << " Rating: "
                                 << a.search_name_NOMA(a.return_root(), n)->rating << " Duration: "
                                 << a.search_name_NOMA(a.return_root(), n)->duration << " Genre1: "
                                 << a.search_name_NOMA(a.return_root(), n)->genre1 << " Genre2: "
                                 << a.search_name_NOMA(a.return_root(), n)->genre2 << " Release: "
                                 << a.search_name_NOMA(a.return_root(), n)->release << " Metacritic: "
                                 << a.search_name_NOMA(a.return_root(), n)->metacritic << " Synopsis: "
                                 << a.search_name_NOMA(a.return_root(), n)->synopsis << endl;
                        }
                        int sub_op = 100;
                        string nam1;
                        while (sub_op != 11) {
                            bool count3;
                            cout << "1. Modify name\n";
                            cout << "2. Modify year\n";
                            cout << "3. Modify nominations\n";
                            cout << "4. Modify rating\n";
                            cout << "5. Modify duration\n";
                            cout << "6. Modify genre1\n";
                            cout << "7. Modify genre2\n";
                            cout << "8. Modify release\n";
                            cout << "9. Modify metacritic\n";
                            cout << "10. Modify synopsis\n";
                            cout << "11. Exit\n";
                            cin >> sub_op;

                            if (sub_op == 1) {
                                count3 = true;
                                ///modifying name
                                cout << "Please enter a name to replace\n";
                                cin.ignore();
                                getline(cin, nam1);
                                convertToUpper(nam1);
                                int ye1, nom1, dur1, meta1;
                                double rat1;
                                string gen11, gen21, rel1, syn1;

                                ye1 = a.search(a.return_root(), n)->year;
                                nom1 = a.search(a.return_root(), n)->nominations;
                                rat1 = a.search(a.return_root(), n)->rating;
                                dur1 = a.search(a.return_root(), n)->duration;
                                gen11 = a.search(a.return_root(), n)->genre1;
                                gen21 = a.search(a.return_root(), n)->genre2;
                                rel1 = a.search(a.return_root(), n)->release;
                                meta1 = a.search(a.return_root(), n)->metacritic;
                                syn1 = a.search(a.return_root(), n)->synopsis;

                                a.insert2_(ye1, nam1, nom1, rat1, dur1, gen11, gen21, rel1, meta1, syn1);
///delete the old node
                                a.delete_driver(n);

                                a.sortByName();
                            }
                            if (sub_op == 2) {

                                cout << "Enter the year you want to replace\n";
                                int y2;
                                cin >> y2;
                                if (count3) {
                                    a.search(a.return_root(), nam1)->year = y2;
                                    a.sortByYear();
                                } else {
                                    a.search(a.return_root(), n)->year = y2;
                                    a.sortByYear();
                                }
                            }
                            if (sub_op == 3) {
                                cout << "Enter the number of nominations you want to replace\n";
                                int nom2;
                                cin >> nom2;
                                if (count3) {
                                    a.search(a.return_root(), nam1)->nominations = nom2;
                                    a.sortByNominations();
                                } else {
                                    a.search(a.return_root(), n)->nominations = nom2;
                                    a.sortByNominations();
                                }

                            }

                            if (sub_op == 4) {
                                cout << "Enter the rating you want to replace\n";
                                double rat2;
                                cin >> rat2;
                                if (count3) {
                                    a.search(a.return_root(), nam1)->rating = rat2;
                                    a.sortByRating();
                                } else {
                                    a.search(a.return_root(), n)->rating = rat2;
                                    a.sortByRating();
                                }

                            }
                            if (sub_op == 5) {
                                cout << "Enter the duration you want to replace\n";
                                int dur2;
                                cin >> dur2;
                                if (count3) {
                                    a.search(a.return_root(), nam1)->duration = dur2;
                                    a.sortByDuration();
                                } else {
                                    a.search(a.return_root(), n)->duration = dur2;
                                    a.sortByDuration();
                                }

                            }
                            if (sub_op == 6) {
                                cout << "Enter the genre1 you want to replace\n";
                                string gen12;
                                cin.ignore();
                                getline(cin, gen12);
                                convertToUpper(gen12);
                                if (count3) {
                                    a.search(a.return_root(), nam1)->genre1 = gen12;
                                    a.sortByGenre1();
                                } else {
                                    a.search(a.return_root(), n)->genre1 = gen12;
                                    a.sortByGenre1();
                                }

                            }
                            if (sub_op == 7) {
                                cout << "Enter the genre2 you want to replace\n";
                                string gen22;
                                cin.ignore();
                                getline(cin, gen22);
                                convertToUpper(gen22);
                                if (count3) {
                                    a.search(a.return_root(), nam1)->genre2 = gen22;
                                    a.sortByGenre2();
                                } else {
                                    a.search(a.return_root(), n)->genre2 = gen22;
                                    a.sortByGenre2();
                                }

                            }
                            if (sub_op == 8) {
                                cout << "Enter the release you want to replace\n";
                                string rel2;
                                cin.ignore();
                                getline(cin, rel2);
                                convertToUpper(rel2);

                                if (count3) {
                                    a.search(a.return_root(), nam1)->release = rel2;
                                    a.sortByRelease();
                                } else {
                                    a.search(a.return_root(), n)->release = rel2;
                                    a.sortByRelease();
                                }

                            }
                            if (sub_op == 9) {
                                cout << "Enter the metacritic you want to replace\n";
                                int meta2;
                                cin >> meta2;
                                if (count3) {
                                    a.search(a.return_root(), nam1)->metacritic = meta2;
                                    a.sortByMetacritic();
                                } else {
                                    a.search(a.return_root(), n)->metacritic = meta2;
                                    a.sortByMetacritic();
                                }

                            }
                            if (sub_op == 10) {
                                cout << "Enter the synopsis you want to replace\n";
                                string syn2;
                                cin.ignore();
                                getline(cin, syn2);
                                convertToUpper(syn2);
                                if (count3) {
                                    a.search(a.return_root(), nam1)->synopsis = syn2;
                                    a.sortBySynopsis();
                                } else {
                                    a.search(a.return_root(), n)->synopsis = syn2;
                                    a.sortBySynopsis();
                                }

                            }


                        }

                    }
                    if (option == 3) {
                        // delete record
                        cout << "Enter a name to delete\n";
                        string n_to_delete;
                        cin.ignore();
                        getline(cin, n_to_delete);
                        convertToUpper(n_to_delete);
                        if (a.search_name_NOMA(a.return_root(), n_to_delete) == NULL) {
                            cout << "\nNo Match Found!\n";
                        } else {
                            a.delete_driver(n_to_delete);
                            a.sortByName();
                            cout << "Delete Complete!\n";
                        }
                    }
                    if (option == 4) {
                        int sub_op = 100;
                        while (sub_op != 11) {
                            cout << "Choose an option\n";
                            cout << "1. Sort by name\n";
                            cout << "2. Sort by year\n";
                            cout << "3. Sort by nominations\n";
                            cout << "4. Sort by rating\n";
                            cout << "5. Sort by duration\n";
                            cout << "6. Sort by genre1\n";
                            cout << "7. Sort by genre2\n";
                            cout << "8. Sort by release\n";
                            cout << "9. Sort by metacritic\n";
                            cout << "10. Sort by synopsis\n";
                            cout << "11. Exit\n";
                            cin >> sub_op;
                            if (sub_op ==
                                1) {//this below is for SORT BY NAME with name at first column(ascending order)
                                cout << endl << endl;
                                b.sortByName();
                            }
                            if (sub_op == 2) {
                                //this below is for SORT BY YEAR (ascending order)
                                cout << endl << endl;
                                c.sortByYear();
                            }
                            if (sub_op == 3) {
                                //this below is for SORT BY NOMINATIONS (ascending order)
                                cout << endl << endl;
                                d.sortByNominations();
                            }
                            if (sub_op == 4) {
                                //this below is for SORT BY RATING(ascending order)
                                cout << endl << endl;
                                e.sortByRating();
                            }
                            if (sub_op == 5) {
                                //this below is for SORT BY DURATION(ascending order)
                                cout << endl << endl;
                                f.sortByDuration();
                            }
                            if (sub_op == 6) {
                                //this below is for SORT BY GENRE1(ascending order)
                                cout << endl << endl;
                                g.sortByGenre1();
                            }
                            if (sub_op == 7) {
                                //this below is for SORT BY GENRE2(ascending order)
                                cout << endl << endl;
                                h.sortByGenre2();
                            }
                            if (sub_op == 8) {
                                //this below is for SORT BY RELEASE(ascending order)
                                cout << endl << endl;
                                i.sortByRelease();
                            }
                            if (sub_op == 9) {
                                //this below is for SORT BY GENRE1(ascending order)
                                cout << endl << endl;
                                j.sortByMetacritic();
                            }
                            if (sub_op == 10) {
                                //this below is for SORT BY SYNOPSIS(ascending order)
                                cout << endl << endl;
                                k.sortBySynopsis();
                            }
                        }
                    }
                    if (option == 5) {
                        int sub_op = 100;
                        while (sub_op != 10) {
                            cout << "Choose an option\n";
                            cout << "1. Complete Search By Name\n";
                            cout << "2. Complete Search By Year\n";
                            cout << "3. Complete Search By Nominations\n";
                            cout << "4. Complete Search By Rating\n";
                            cout << "5. Complete Search By Duration\n";
                            cout << "6. Complete Search By Genre1\n";
                            cout << "7. Complete Search By Genre2\n";
                            cout << "8. Complete Search By Release\n";
                            cout << "9. Complete Search By Metacritic\n";
                            cout << "10. Exit\n";
                            cin >> sub_op;

                            if (sub_op == 1) {
                                //for complete search by Name
                                cout << "Complete search by name(Enter Name): " << endl;
                                string n0;
                                cin.ignore();
                                getline(cin, n0);
                                convertToUpper(n0);
                                b.searchCompleteByName(b.return_root(), n0);
                                if (b.search_name_NOMA(b.return_root(), n0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }

                            if (sub_op == 2) {
                                //for complete search by Year
                                cout << "Complete search by year(Enter Year): " << endl;
                                string y0;
                                cin.ignore();
                                getline(cin, y0);
                                c.searchCompleteByYear(c.return_root(), y0);
                                if (c.search_year_NOMA(c.return_root(), y0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }

                            if (sub_op == 3) {

//for complete search by Nominations
                                cout << "Complete search by nominations(Enter Nominations): " << endl;
                                string nom0;
                                cin.ignore();
                                getline(cin, nom0);
                                d.searchCompleteByNominations(d.return_root(), nom0);
                                if (d.search_nominations_NOMA(d.return_root(), nom0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                            if (sub_op == 4) {
                                //for complete search by Rating
                                cout << "Complete search by rating(Enter Rating): " << endl;
                                string r0;
                                cin.ignore();
                                getline(cin, r0);
                                e.searchCompleteByRating(e.return_root(), r0);
                                if (e.search_rating_NOMA(d.return_root(), r0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                            if (sub_op == 5) {

//for complete search by Duration
                                cout << "Complete search by duration(Enter Duration): " << endl;
                                string d0;
                                cin.ignore();
                                getline(cin, d0);
                                f.searchCompleteByDuration(f.return_root(), d0);
                                if (f.search_duration_NOMA(f.return_root(), d0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                            if (sub_op == 6) {
                                //for complete search by Genre1
                                cout << "Complete search by Genre1(Enter Genre1): " << endl;
                                string g10;
                                cin.ignore();
                                getline(cin, g10);
                                convertToUpper(g10);
                                g.searchCompleteByGenre1(g.return_root(), g10);
                                if (g.search_genre1_NOMA(g.return_root(), g10) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                            if (sub_op == 7) {
                                //for complete search by Genre2
                                cout << "Complete search by Genre2(Enter Genre2): " << endl;
                                string g20;
                                cin.ignore();
                                getline(cin, g20);
                                convertToUpper(g20);
                                h.searchCompleteByGenre2(h.return_root(), g20);
                                if (h.search_genre2_NOMA(h.return_root(), g20) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }

                            }
                            if (sub_op == 8) {

//for complete search by Release
                                cout << "Complete search by Release(Enter Release): " << endl;
                                string rel0;
                                cin.ignore();
                                getline(cin, rel0);
                                convertToUpper(rel0);
                                i.searchCompleteByRelease(i.return_root(), rel0);
                                if (i.search_release_NOMA(i.return_root(), rel0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                            if (sub_op == 9) {
                                //for complete search by Metacritic
                                cout << "Complete search by Metacritic(Enter Metacritic): " << endl;
                                string m0;
                                cin.ignore();
                                getline(cin, m0);
                                j.searchCompleteByMetacritic(j.return_root(), m0);
                                if (j.search_metacritic_NOMA(j.return_root(), m0) == NULL) {
                                    cout << "\nNo Match Found!\n";
                                }
                            }
                        }
                    }
                    if (option == 6) {
                        int sub_op = 100;
                        while (sub_op != 10) {
                            cout << "Choose an option\n";
                            cout << "1. Partial Search By Name\n";
                            cout << "2. Partial Search By Year\n";
                            cout << "3. Partial Search By Nominations\n";
                            cout << "4. Partial Search By Rating\n";
                            cout << "5. Partial Search By Duration\n";
                            cout << "6. Partial Search By Genre1\n";
                            cout << "7. Partial Search By Genre2\n";
                            cout << "8. Partial Search By Release\n";
                            cout << "9. Partial Search By Metacritic\n";
                            cout << "10. Exit\n";
                            cin >> sub_op;

                            if (sub_op == 1) {
                                //for partial search by Name
                                cout << "Partial search by Name(Enter Name): " << endl;
                                string n0;
                                cin.ignore();
                                getline(cin, n0);
                                convertToUpper(n0);
                                b.searchPartialByName(b.return_root(), n0);
                            }
                            if (sub_op == 2) {
                                //for partial search by Year
                                cout << "Partial search by Year(Enter Year): " << endl;
                                string y0;
                                cin.ignore();
                                getline(cin, y0);
                                c.searchPartialByYear(c.return_root(), y0);
                            }
                            if (sub_op == 3) {
                                //for partial search by Nominations
                                cout << "Partial search by Nominations(Enter Nominations): " << endl;
                                string nom0;
                                cin.ignore();
                                getline(cin, nom0);
                                d.searchPartialByNominations(d.return_root(), nom0);
                            }
                            if (sub_op == 4) {
                                //for partial search by Rating
                                cout << "Partial search by Rating(Enter Rating): " << endl;
                                string r0;
                                cin.ignore();
                                getline(cin, r0);
                                e.searchPartialByRating(e.return_root(), r0);
                            }
                            if (sub_op == 5) {
                                //for partial search by Duration
                                cout << "Partial search by Duration(Enter Duration): " << endl;
                                string d0;
                                cin.ignore();
                                getline(cin, d0);
                                f.searchPartialByDuration(f.return_root(), d0);
                            }
                            if (sub_op == 6) {
                                //for partial search by Genre1
                                cout << "Partial search by Genre1(Enter Genre1): " << endl;
                                string g10;
                                cin.ignore();
                                getline(cin, g10);
                                convertToUpper(g10);
                                g.searchPartialByGenre1(g.return_root(), g10);
                            }
                            if (sub_op == 7) {
                                //for partial search by Genre2
                                cout << "Partial search by Genre2(Enter Genre2): " << endl;
                                string g20;
                                cin.ignore();
                                getline(cin, g20);
                                convertToUpper(g20);
                                h.searchPartialByGenre2(h.return_root(), g20);
                            }
                            if (sub_op == 8) {
                                //for partial search by Release
                                cout << "Partial search by Release(Enter Release): " << endl;
                                string rel0;
                                cin.ignore();
                                getline(cin, rel0);
                                convertToUpper(rel0);
                                i.searchPartialByRelease(i.return_root(), rel0);
                            }
                            if (sub_op == 9) {
                                //for partial search by Metacritic
                                cout << "Partial search by Metacritic(Enter Metacritic): " << endl;
                                string m0;
                                cin.ignore();
                                getline(cin, m0);
                                j.searchPartialByMetacritic(j.return_root(), m0);
                            }
                        }

                    }

                    if (option == 7) {
                        ofstream outFile;
                        string fileName;
                        cout << "Enter file name(DO NOT ENTER THE EXTENSIONS LIKE .csv or .txt, JUST THE FILE NAME)\n";
                        cin.ignore();
                        getline(cin, fileName);
                        fileName = fileName + ".csv";
                        outFile.open(fileName);
                        outFile << "NAME" << "," << "YEAR" << "," << "NOMINATIONS" << "," << "RATING" << ","
                                << "DURATION"
                                << "," << "GENRE1" << "," << "GENRE2" << "," << "RELEASE" << "," << "METACRITIC" << ","
                                << "SYNOPSIS" << "," << "\n";
                        a.sortPrintByName(outFile);
                        outFile.close();
                    }
                }


            }
        }///main while loop

    }
    return 0;
}
