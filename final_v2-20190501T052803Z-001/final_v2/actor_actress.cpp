//
// Created by clams on 4/24/2019.
//

#include "actor_actress.h"
/*
actor_actress::node *actor_actress::insert(int y, string a, int w, string n, string f, actor_actress::node *t)
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
    return t;
}

actor_actress::node *actor_actress::insert2(string n, int y1, string f1, int w1, string a1, actor_actress::node *t)
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
    return t;
}

void actor_actress::inorder(actor_actress::node *t)
    {
        if (t == NULL)
            return;
        inorder(t->left);
        cout << "\n" << t->name << " " << t->year << " " << t->film << "\n" << t->award << t->winner << endl;
        inorder(t->right);
    }

actor_actress::node *actor_actress::insertByName(int y, string a, int w, string n, string f, actor_actress::node *t) {
    if (t == NULL) {
        t = new node;
        t->year = y;
        t->award = a;
        t->winner = w;
        t->name = n;
        t->film = f;
        t->left = t->right = NULL;
    }
    else if (n <= t->name)
        t->left = insertByName(y, a, w, n, f, t->left);
    else if (n > t->name)
        t->right = insertByName(y, a, w, n, f, t->right);
    return t;
}

actor_actress::node *actor_actress::insertByFilm(int y, string a, int w, string n, string f, actor_actress::node *t) {
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
    return t;
}

actor_actress::node *actor_actress::insertByYear(int y, string a, int w, string n, string f, actor_actress::node *t) {
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

actor_actress::node *actor_actress::insertByAward(int y, string a, int w, string n, string f, actor_actress::node *t) {
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

actor_actress::node *actor_actress::insertByWinner(int y, string a, int w, string n, string f, actor_actress::node *t) {
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

actor_actress::node *actor_actress::searchCompleteByName(actor_actress::node *root, string keyName) {
// Base Cases: root is null
    if (root == NULL || root->name == keyName)

        return root;

// Key is smaller than root's key
    else if (keyName <= root->name)
        return searchCompleteByName(root->left, keyName);

// Key is greater than root's key
    else if (keyName > root->name)
        return searchCompleteByName(root->right, keyName);

}

actor_actress::node *actor_actress::searchCompleteByFilm(actor_actress::node *root, string keyFilm) {
// Base Cases: root is null
    if (root == NULL || root->film == keyFilm)
        return root;

// Key is smaller than root's key
    else if (keyFilm <= root->film)
        return searchCompleteByFilm(root->left, keyFilm);

// Key is greater than root's key
    else if (keyFilm > root->film)
        return searchCompleteByFilm(root->right, keyFilm);
}

actor_actress::node *actor_actress::searchCompleteByYear(actor_actress::node *root, int keyYear) {
// Base Cases: root is null
    if (root == NULL || root->year == keyYear)
        return root;

// Key is smaller than root's key
    else if (keyYear < root->year)
        return searchCompleteByYear(root->left, keyYear);

// Key is greater than root's key
    else if (keyYear > root->year)
        return searchCompleteByYear(root->right, keyYear);
}

actor_actress::node *actor_actress::searchCompleteByAward(actor_actress::node *root, string keyAward) {
// Base Cases: root is null
    if (root == NULL || root->award == keyAward)
        return root;

// Key is smaller than root's key
    else if (keyAward < root->award)
        return searchCompleteByAward(root->left, keyAward);

// Key is greater than root's key
    else if (keyAward > root->award)
        return searchCompleteByAward(root->right, keyAward);

}

actor_actress::node *actor_actress::searchCompleteByWinner(actor_actress::node *root, int keyWinner)  {
// Base Cases: root is null
    if (root == NULL || root->winner == keyWinner)
        return root;

// Key is smaller than root's key
    else if (keyWinner < root->winner)
        return searchCompleteByWinner(root->left, keyWinner);

// Key is greater than root's key
    else if (keyWinner > root->winner)
        return searchCompleteByWinner(root->right, keyWinner);
}

void actor_actress::inorderByName(actor_actress::node *t) {
    if (t == NULL)
        return;
    inorderByName(t->left);
    cout << "\nName: " << t->name << " | Year: " << t->year << " | Film: " << t->film << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByName(t->right);
}

void actor_actress::inorderByFilm(actor_actress::node *t) {
    if (t == NULL)
        return;
    inorderByFilm(t->left);
    cout << "\nFilm: " << t->film << " | Year: " << t->year << " | Name: " << t->name << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByFilm(t->right);
}

void actor_actress::inorderByYear(actor_actress::node *t) {
    if (t == NULL)
        return;
    inorderByYear(t->left);
    cout << "\nYear: " << t->year << " | Name: " << t->name << " | Film: " << t->film << " | Award: " << t->award << " | Winner: " << t->winner << endl;
    inorderByYear(t->right);
}

void actor_actress::inorderByAward(actor_actress::node *t) {
    if (t == NULL)
        return;
    inorderByAward(t->left);
    cout << "\nAward: " << t->award << " | Year: " << t->year << " | Film: " << t->film << " | Name: " << t->name << " | Winner: " << t->winner << endl;
    inorderByAward(t->right);
}

void actor_actress::inorderByWinner(actor_actress::node *t){
    if (t == NULL)
        return;
    inorderByWinner(t->left);
    cout << "\nWinner: " << t->winner << " | Name: " << t->name << " | Film: " << t->film << " | Award: " << t->award << " | Year: " << t->year << endl;
    inorderByWinner(t->right);
}

actor_actress::node *actor_actress::deleteNode(actor_actress::node *root, string key) {
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

actor_actress::actor_actress() {
    root = NULL;
}

void actor_actress::insert(int y, string a, int w, string n, string f) {
    root = insert(y, a, w, n, f, root);
}

void actor_actress::insert2_(string n, int y1, string f1, int w1, string a1) {
    root = insert2(n, y1, f1, w1, a1, root);
}

void actor_actress::display() {
    inorder(root);
    cout << endl;
}

actor_actress::node *actor_actress::return_root() {
    return root;
}

string actor_actress::return_name() {
    return root->name;
}

string actor_actress::return_film()  {
    return root->film;
}

int actor_actress::return_year() {
    return root->year;
}

string actor_actress::return_award() {
    return root->award;
}

int actor_actress::return_winner() {
    return root->winner;
}

actor_actress::node *actor_actress::minValueNode(actor_actress::node *node) {
    struct node* current = node;

// loop down to find the leftmost leaf
    while (current->left != NULL)
        current = current->left;

    return current;
}

actor_actress::node *actor_actress::maxValueNode(actor_actress::node *node) {
    struct node* current = node;

// loop down to find the rightmost leaf
    while (current->right != NULL)
        current = current->right;

    return current;
}

void actor_actress::insertByName(int y, string a, int w, string n, string f) {
    root = insertByName(y, a, w, n, f, root);
}

void actor_actress::insertByFilm(int y, string a, int w, string n, string f) {
    root = insertByFilm(y, a, w, n, f, root);
}

void actor_actress::insertByYear(int y, string a, int w, string n, string f){
    root = insertByYear(y, a, w, n, f, root);
}

void actor_actress::insertByAward(int y, string a, int w, string n, string f) {
    root = insertByAward(y, a, w, n, f, root);
}

void actor_actress::insertByWinner(int y, string a, int w, string n, string f) {
    root = insertByWinner(y, a, w, n, f, root);
}

void actor_actress::sortByName() {
    inorderByName(root);
}

void actor_actress::sortByFilm() {
    inorderByFilm(root);
}

void actor_actress::sortByYear() {
    inorderByYear(root);
}

void actor_actress::sortByAward() {
    inorderByAward(root);
}

void actor_actress::sortByWinner() {
    inorderByWinner(root);
}

void actor_actress::searchCompleteByName(int y, string a, int w, string n, string f, string keyName) {


    root = searchCompleteByName(root, keyName);


    if (root != NULL && keyName==root->name)
    {
        cout << "Match Found! \n" << "Name: " << return_name() << " | Year: " << return_year() << " | Film: " << return_film() << " | Award: " << return_award() << " | Winner: " << return_winner() << endl;

    }
    else
        cout << "no match\n";

}

void actor_actress::searchCompleteByFilm(int y, string a, int w, string n, string f, string keyFilm) {
    root = searchCompleteByFilm(root, keyFilm);
    if (root != NULL && keyFilm == root->film)
        cout << "Match Found! \n" << "Name: " << return_name() << " | Year: " << return_year() << " | Film: " << return_film() << " | Award: " << return_award() << " | Winner: " << return_winner() << endl;
    else
        cout << "No match found" << endl;
}

void actor_actress::searchCompleteByYear(int y, string a, int w, string n, string f, int keyYear) {
    root = searchCompleteByYear(root, keyYear);
    if (root == NULL)
        cout << "No Match found" << endl;
    if (root != NULL && keyYear == root->year) {
        do {
            cout << "Match Found! \n" << "Name: " << return_name() << " | Year: " << return_year() << " | Film: "
                 << return_film() << " | Award: " << return_award() << " | Winner: " << return_winner() << endl;
            root = root->left;
            if (root == NULL)
                break;
        } while (keyYear == root->year);
    }
}

void actor_actress::searchCompleteByAward(int y, string a, int w, string n, string f, string keyAward) {
    root = searchCompleteByAward(root, keyAward);
    if (root == NULL)
        cout << "No Match found" << endl;
    if (root != NULL && keyAward == root->award) {
        do {
            cout << "Match Found! \n" << "Name: " << return_name() << " | Year: " << return_year() << " | Film: "
                 << return_film() << " | Award: " << return_award() << " | Winner: " << return_winner() << endl;
            root = root->left;
            if (root == NULL)
                break;
        } while (keyAward == root->award);
    }
}

void actor_actress::searchCompleteByWinner(int y, string a, int w, string n, string f, int keyWinner) {
    root = searchCompleteByWinner(root, keyWinner);
    if (root == NULL)
        cout << "No Match found" << endl;
    if (root != NULL && keyWinner == root->winner) {
        do {
            cout << "Match Found! \n" << "Winner: " << return_winner() << " | Year: " << return_year() << " | Film: "
                 << return_film() << " | Award: " << return_award() << " | Name: " << return_name() << endl;
            if (keyWinner == 0)
                root = root->left;
            else
                root = root->right;
            if (root == NULL)
                break;
        } while (keyWinner == root->winner);
    }
}

actor_actress::node *actor_actress::delete_driver(string n) {
    root = deleteNode(root, n);
    return root;
}

actor_actress::node *actor_actress::search(actor_actress::node *root, string key)
{
// Base Cases: root is null or key is present at root
    if (root == NULL || root->name == key)
        return root;

// Key is greater than root's key
    if (root->name < key)
        return search(root->right, key);

// Key is smaller than root's key
    return search(root->left, key);
}

void actor_actress::search_p(actor_actress::node *root, string key) {

    if(root != NULL)
    {
        string str = root->name;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << root->name << " " << root->award << " " << root->winner << endl;

        search_p(root -> left, key);

        search_p(root -> right,key);
    }
}

*/






