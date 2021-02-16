//
// Created by clams on 4/24/2019.
//

#include "actor_actress.h"

BSTact::node *BSTact::insert(int y, string a, int w, string n, string f, BSTact::node *t)
{
    if (t == NULL)
    {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (n < t->name)
        t->left = insert(y, a, w, n, f, t->left);
    else if (n > t->name)
        t->right = insert(y, a, w, n, f, t->right);
    else
        t->left = insert(y, a, w, n, f, t->left);
    return t;
}

BSTact::node *BSTact::insert2(string n, int y1, string f1, int w1, string a1, BSTact::node *t)
{
    if (t == NULL)
    {
        t = new node;
        t->name = n;
        t->year = y1;
        t->film = f1;
        t->winner = w1;
        t->award = a1;
        t->left = t->right = NULL;
    }
    else if (n < t->name)
        t->left = insert2(n, y1, f1, w1, a1, t->left);
    else if (n > t->name)
        t->right = insert2(n, y1, f1, w1, a1, t->right);
    else
        t->left = insert2(n, y1, f1, w1, a1, t->left);
    return t;
}

void BSTact::inorder(BSTact::node *t)
{
    if (t == NULL)
        return;
    inorder(t->left);
    cout << " Name: " << t->name << " Year: " << t->year << " Film: " << t->film << " Award: " << t->award <<" Winner: "<< t->winner << endl;
    inorder(t->right);
}

BSTact::node *BSTact::insertByName(int y, string a, int w, string n, string f, BSTact::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (n < t->name)
        t->left = insertByName(y, a, w, n, f, t->left);
    else if (n > t->name)
        t->right = insertByName(y, a, w, n, f, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByName(y, a, w, n, f, t->left);
    return t;
}

BSTact::node *BSTact::insertByFilm(int y, string a, int w, string n, string f, BSTact::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (f < t->film)
        t->left = insertByFilm(y, a, w, n, f, t->left);
    else if (f > t->film)
        t->right = insertByFilm(y, a, w, n, f, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByFilm(y, a, w, n, f, t->left);
    return t;
}

BSTact::node *BSTact::insertByYear(int y, string a, int w, string n, string f, BSTact::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (y < t->year)
        t->left = insertByYear(y, a, w, n, f, t->left);
    else if (y > t->year)
        t->right = insertByYear(y, a, w, n, f, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByYear(y, a, w, n, f, t->left);
    return t;
}

BSTact::node *BSTact::insertByAward(int y, string a, int w, string n, string f, BSTact::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (a < t->award)
        t->left = insertByAward(y, a, w, n, f, t->left);
    else if (a > t->award)
        t->right = insertByAward(y, a, w, n, f, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByAward(y, a, w, n, f, t->left);
    return t;
}

BSTact::node *BSTact::insertByWinner(int y, string a, int w, string n, string f, BSTact::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (w == 0)
        t->left = insertByWinner(y, a, w, n, f, t->left);
    else if (w == 1)
        t->right = insertByWinner(y, a, w, n, f, t->right);
    return t;
}



void BSTact::inorderByName(BSTact::node *t) {
    if (t == NULL)
        return;
    inorderByName(t->left);
    cout << "\nName: " << t->name << " | Year: " << t->year << " | Film: " << t->film << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByName(t->right);
}

void BSTact::inorderByFilm(BSTact::node *t) {
    if (t == NULL)
        return;
    inorderByFilm(t->left);
    cout << "\nFilm: " << t->film << " | Year: " << t->year << " | Name: " << t->name << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByFilm(t->right);
}

void BSTact::inorderByYear(BSTact::node *t) {
    if (t == NULL)
        return;
    inorderByYear(t->left);
    cout << "\nYear: " << t->year << " | Name: " << t->name << " | Film: " << t->film << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByYear(t->right);
}

void BSTact::inorderByAward(BSTact::node *t) {
    if (t == NULL)
        return;
    inorderByAward(t->left);
    cout << "\nAward: " << t->award << " | Year: " << t->year << " | Film: " << t->film << " | Name: " << t->name << " | Winner: " << t->winner << endl;
    inorderByAward(t->right);
}

void BSTact::inorderByWinner(BSTact::node *t) {
    if (t == NULL)
        return;
    inorderByWinner(t->left);
    cout << "\nWinner: " << t->winner << " | Name: " << t->name << " | Film: " << t->film << " | Award: " << t->award << " | Year: " << t->year << endl;
    inorderByWinner(t->right);
}

BSTact::node *BSTact::deleteNode(BSTact::node *root, string key) {
// base case
    if (root == NULL) return root;

// If the key to be deleted is smaller than the root's key,
// then it lies in left subtree
    if (key < root->name)
        root->left = deleteNode(root->left, key);

// If the key to be deleted is greater than the root's key,
// then it lies in right subtree
    else if (key > root->name)
        root->right = deleteNode(root->right, key);

// if key is same as root's key, then This is the node
// to be deleted
    else
    {
// node with only one child or no child
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

// node with two children: Get the inorder successor (smallest
// in the right subtree)
        node* temp = minValueNode(root->right);

// Copy the inorder successor's content to this node
        root->name = temp->name;

// Delete the inorder successor
        root->right = deleteNode(root->right, temp->name);
    }
    return root;
}

BSTact::BSTact() {
    root = NULL;
}

void BSTact::insert(int y, string a, int w, string n, string f) {
    root = insert(y, a, w, n, f, root);
}

void BSTact::insert2_(string n, int y1, string f1, int w1, string a1) {
    root = insert2(n, y1, f1, w1, a1, root);
}

void BSTact::display() {
    inorder(root);

}

BSTact::node *BSTact::return_root() {
    return root;
}

string BSTact::return_name() {
    return root->name;
}

string BSTact::return_film() {
    return root->film;
}

int BSTact::return_year() {
    return root->year;
}

string BSTact::return_award() {
    return root->award;
}

int BSTact::return_winner() {
    return root->winner;
}

BSTact::node *BSTact::minValueNode(BSTact::node *node) {
    struct node* current = node;

/* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}

void BSTact::insertByName(int y, string a, int w, string n, string f) {
    root = insertByName(y, a, w, n, f, root);
}

void BSTact::insertByFilm(int y, string a, int w, string n, string f) {
    root = insertByFilm(y, a, w, n, f, root);
}

void BSTact::insertByYear(int y, string a, int w, string n, string f) {
    root = insertByYear(y, a, w, n, f, root);
}

void BSTact::insertByAward(int y, string a, int w, string n, string f) {
    root = insertByAward(y, a, w, n, f, root);
}

void BSTact::insertByWinner(int y, string a, int w, string n, string f) {
    root = insertByWinner(y, a, w, n, f, root);
}

void BSTact::sortByName() {
    inorderByName(root);
}

void BSTact::sortByFilm() {
    inorderByFilm(root);
}

void BSTact::sortByYear() {
    inorderByYear(root);
}

void BSTact::sortByAward() {
    inorderByAward(root);
}

void BSTact::sortByWinner() {
    inorderByWinner(root);
}

void BSTact::searchPartialByName(BSTact::node *root, string key) {

    if (root != NULL)
    {
        string str = root->name;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Film: " << root->film << " | Award: " << root->award << " | Winner: " << root->winner << endl;

        searchPartialByName(root->left, key);

        searchPartialByName(root->right, key);

    }
}

void BSTact::searchPartialByAward(BSTact::node *root, string key) {

    if (root != NULL)
    {
        string str = root->award;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Film: " << root->film << " | Award: " << root->award << " | Winner: " << root->winner << endl;

        searchPartialByAward(root->left, key);

        searchPartialByAward(root->right, key);

    }
}

void BSTact::searchPartialByFilm(BSTact::node *root, string key) {

    if (root != NULL)
    {
        string str = root->film;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Film: " << root->film << " | Award: " << root->award << " | Winner: " << root->winner << endl;

        searchPartialByFilm(root->left, key);

        searchPartialByFilm(root->right, key);

    }
}

void BSTact::searchPartialByYear(BSTact::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->year;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Film: " << root->film << " | Award: " << root->award << " | Winner: " << root->winner << endl;

        searchPartialByYear(root->left, key);

        searchPartialByYear(root->right, key);

    }
}

void BSTact::searchPartialByWinner(BSTact::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->winner;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Film: " << root->film << " | Award: " << root->award << " | Winner: " << root->winner << endl;

        searchPartialByWinner(root->left, key);

        searchPartialByWinner(root->right, key);

    }
}

BSTact::node *BSTact::delete_driver(string n) {
    root = deleteNode(root, n);
    return root;
}

BSTact::node *BSTact::search(BSTact::node *root, string key) {
// Base Cases: root is null or key is present at root
    if (root == NULL || root->name == key)
        return root;

// Key is greater than root's key
    if (root->name < key)
        return search(root->right, key);

// Key is smaller than root's key
    return search(root->left, key);
}


void BSTact::inorderPrintByName(BSTact::node *t, ofstream &outFile) {
    if (t == NULL)
        return;
    inorderPrintByName(t->left, outFile);

    int y00, w00;
    string a00, n00, f00;
    n00 = t->name;
    y00 = t->year;
    f00 = t->film;
    a00 = t->award;
    w00 = t->winner;
    outFile << y00 << ",";
    outFile << a00 << ",";
    outFile << w00 << ",";
    outFile << n00 << ",";
    outFile << f00 << "\n";

    inorderPrintByName(t->right, outFile);
}

void BSTact::sortPrintByName(ofstream &outFile) {
    inorderPrintByName(root, outFile);
}


void BSTact::searchCompleteByName(BSTact::node *root, string key) {

        if(root!=NULL)
        {

            if (key == root->name)
            {

                cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Award: "
                     << root->award << " | Film: " << root->film << " | Winner: " << root->winner << endl;

            }


            searchCompleteByName(root->left, key);

            searchCompleteByName(root->right, key);

        }



}

void BSTact::searchCompleteByFilm(BSTact::node *root, string key) {


        if (root != NULL)
        {

            if (key == root->film)
                cout << "Match Found\n" << "Name: " << root->name << " | Year: " << root->year << " | Award: " << root->award << " | Film: " << root->film << " | Winner: " << root->winner << endl;

            searchCompleteByFilm(root->left, key);

            searchCompleteByFilm(root->right, key);
        }




}

void BSTact::searchCompleteByYear(BSTact::node *root, int key) {
    if (root != NULL)
    {

        if (key == root->year)
            cout << "Match Found\n" << "Name: " << root->name << " | Year: " << root->year << " | Award: " << root->award << " | Film: " << root->film << " | Winner: " << root->winner << endl;

        searchCompleteByYear(root->left, key);

        searchCompleteByYear(root->right, key);
    }

}

void BSTact::searchCompleteByAward(BSTact::node *root, string key) {

    if (root != NULL)
    {

        if (key == root->award)
            cout << "Match Found\n" << "Name: " << root->name << " | Year: " << root->year << " | Award: " << root->award << " | Film: " << root->film << " | Winner: " << root->winner << endl;

        searchCompleteByAward(root->left, key);

        searchCompleteByAward(root->right, key);
    }

}

void BSTact::searchCompleteByWinner(BSTact::node *root, int key) {
    if (root != NULL)
    {
        if (key == root->winner)
            cout << "Match Found\n" << "Name: " << root->name << " | Year: " << root->year << " | Award: " << root->award << " | Film: " << root->film << " | Winner: " << root->winner << endl;

        searchCompleteByWinner(root->left, key);

        searchCompleteByWinner(root->right, key);
    }

}

BSTact::node *BSTact::search_name_NOMA(BSTact::node *root, string key) {
// Base Cases: root is null or key is present at root
    if (root == NULL || root->name == key)
        return root;

// Key is greater than root's key
    if (root->name < key)
        return search_name_NOMA(root->right, key);

// Key is smaller than root's key
    return search_name_NOMA(root->left, key);
}

BSTact::node *BSTact::search_year_NOMA(BSTact::node *root, int key) {
    {
// Base Cases: root is null or key is present at root
        if (root == NULL || root->year == key)
            return root;

// Key is greater than root's key
        if (root->year < key)
            return search_year_NOMA(root->right, key);

// Key is smaller than root's key
        return search_year_NOMA(root->left, key);
    }
}

BSTact::node *BSTact::search_winner_NOMA(BSTact::node *root, int key) {
    {
// Base Cases: root is null or key is present at root
        if (root == NULL || root->winner == key)
            return root;

// Key is greater than root's key
        if (root->winner < key)
            return search_winner_NOMA(root->right, key);

// Key is smaller than root's key
        return search_winner_NOMA(root->left, key);
    }
}

BSTact::node *BSTact::search_film_NOMA(BSTact::node *root, string key) {
    {
// Base Cases: root is null or key is present at root
        if (root == NULL || root->film == key)
            return root;

// Key is greater than root's key
        if (root->film < key)
            return search_film_NOMA(root->right, key);

// Key is smaller than root's key
        return search_film_NOMA(root->left, key);
    }
}

BSTact::node *BSTact::search_award_NOMA(BSTact::node *root, string key) {
    {
// Base Cases: root is null or key is present at root
        if (root == NULL || root->award == key)
            return root;

// Key is greater than root's key
        if (root->award < key)
            return search_award_NOMA(root->right, key);

// Key is smaller than root's key
        return search_award_NOMA(root->left, key);
    }
}



