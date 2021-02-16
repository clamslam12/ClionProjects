//
// Created by clams on 4/29/2019.
//

#include "pictures.h"

BSTpic::node *
BSTpic::insert(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn,
               BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (na < t->name)
        t->left = insert(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (na > t->name)
        t->right = insert(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insert(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insert2(int ye, string na, int nom, double rat, int dur, string g1, string g2, string rel, int meta, string syn,
                BSTpic::node *t)  {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (na < t->name)
        t->left = insert2(ye, na, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (na > t->name)
        t->right = insert2(ye, na, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else
        t->left = insert2(ye, na, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

void BSTpic::inorder(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorder(t->left);
    cout << "\nName: " << t->name << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorder(t->right);
}

BSTpic::node *
BSTpic::insertByName(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                     string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (na < t->name)
        t->left = insertByName(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (na > t->name)
        t->right = insertByName(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else
        t->left = insertByName(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByYear(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                     string syn, BSTpic::node *t) {
    if (t == NULL) {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (ye < t->year)
        t->left = insertByYear(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (ye > t->year)
        t->right = insertByYear(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByYear(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByNominations(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                            string syn, BSTpic::node *t) {
    if (t == NULL) {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (nom < t->nominations)
        t->left = insertByNominations(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (nom > t->nominations)
        t->right = insertByNominations(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByNominations(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByRating(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                       string syn, BSTpic::node *t) {
    if (t == NULL) {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (rat < t->rating)
        t->left = insertByRating(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (rat > t->rating)
        t->right = insertByRating(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByRating(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByDuration(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                         string syn, BSTpic::node *t) {
    if (t == NULL) {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (dur < t->duration)
        t->left = insertByDuration(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (dur > t->duration)
        t->right = insertByDuration(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByDuration(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByGenre1(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                       string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (g1 < t->genre1)
        t->left = insertByGenre1(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (g1 > t->genre1)
        t->right = insertByGenre1(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByGenre1(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByGenre2(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                       string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (g2 < t->genre2)
        t->left = insertByGenre2(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (g2 > t->genre2)
        t->right = insertByGenre2(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByGenre2(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByRelease(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                        string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (rel < t->release)
        t->left = insertByRelease(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (rel > t->release)
        t->right = insertByRelease(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByRelease(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertByMetacritic(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                           string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (meta < t->metacritic)
        t->left = insertByMetacritic(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (meta > t->metacritic)
        t->right = insertByMetacritic(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertByMetacritic(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

BSTpic::node *
BSTpic::insertBySynopsis(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                         string syn, BSTpic::node *t) {
    if (t == NULL)
    {
        t = new node;
        t->name = na;
        t->year = ye;
        t->nominations = nom;
        t->rating = rat;
        t->duration = dur;
        t->genre1 = g1;
        t->genre2 = g2;
        t->release = rel;
        t->metacritic = meta;
        t->synopsis = syn;

        t->left = t->right = NULL;
    }
    else if (syn < t->synopsis)
        t->left = insertBySynopsis(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    else if (syn > t->synopsis)
        t->right = insertBySynopsis(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->right);
    else //this eliminates the duplicates problem. Insert the duplicates on the left leaf each time
        t->left = insertBySynopsis(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, t->left);
    return t;
}

void BSTpic::inorderByName(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByName(t->left);
    cout << "\nName: " << t->name << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByName(t->right);
}

void BSTpic::inorderByYear(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByYear(t->left);
    cout << "\nYear: " << t->year << " | Name: " << t->name << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByYear(t->right);
}

void BSTpic::inorderByNominations(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByNominations(t->left);
    cout << "\nNominations: " << t->nominations << " | Year: " << t->year << " | Name: " <<t->name << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByNominations(t->right);
}

void BSTpic::inorderByRating(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByRating(t->left);
    cout << "\nRating: " << t->rating <<" | Year: " << t->year << " | Nominations: " << t->nominations << " | Name: " << t->name << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByRating(t->right);
}

void BSTpic::inorderByDuration(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByDuration(t->left);
    cout << "\nDuration: " << t->duration << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Name: " << t->name  << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByDuration(t->right);
}

void BSTpic::inorderByGenre1(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByGenre1(t->left);
    cout << "\nGenre1: " << t->genre1 << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Name: " << t->name << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByGenre1(t->right);
}

void BSTpic::inorderByGenre2(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByGenre2(t->left);
    cout << "\nGenre2: " << t->genre2 << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Name: " << t->name << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByGenre2(t->right);
}

void BSTpic::inorderByRelease(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByRelease(t->left);
    cout << "\nRelease: " << t->release << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Name: " << t->name << " | Metacritic: " << t->metacritic << " | Synopsis: " << t->synopsis << endl;
    inorderByRelease(t->right);
}

void BSTpic::inorderByMetacritic(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderByMetacritic(t->left);
    cout << "\nMetacritic: " << t->metacritic << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Name: " << t->name << " | Synopsis: " << t->synopsis << endl;
    inorderByMetacritic(t->right);
}

void BSTpic::inorderBySynopsis(BSTpic::node *t) {
    if (t == NULL)
        return;
    inorderBySynopsis(t->left);
    cout << "\nSynopsis: " << t->synopsis << " | Year: " << t->year << " | Nominations: " << t->nominations << " | Rating: " << t->rating << " | Duration: " << t->duration << " | Genre1: " << t->genre1 << " | Genre2: " << t->genre2 << " | Release: " << t->release << " | Metacritic: " << t->metacritic << " | Name: " << t->name  << endl;
    inorderBySynopsis(t->right);
}

BSTpic::node *BSTpic::deleteNode(BSTpic::node *root, string key) {
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

BSTpic::BSTpic() {
    root = NULL;
}

void BSTpic::insert(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                    string syn) {
    root = insert(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::insert2_(int ye, string na, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                      string syn) {
    root = insert2(ye, na, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::display() {
    inorder(root);
    cout << endl;
}

BSTpic::node *BSTpic::return_root() {
    return root;
}

string BSTpic::return_name() {
    return root->name;
}

int BSTpic::return_year(){
    return root->year;
}

int BSTpic::return_nominations()  {
    return root->nominations;
}

double BSTpic::return_rating()  {
    return root->rating;
}

int BSTpic::return_duration() {
    return root->duration;
}

string BSTpic::return_genre1() {
    return root->genre1;
}

string BSTpic::return_genre2() {
    return root->genre2;
}

string BSTpic::return_release() {
    return root->release;
}

int BSTpic::return_metacritic() {
    return root->metacritic;
}

string BSTpic::return_synopsis() {
    return root->synopsis;
}

BSTpic::node *BSTpic::minValueNode(BSTpic::node *node) {
    struct node* current = node;

/* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}

void BSTpic::insertByName(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                          string syn) {
    root = insertByName(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::insertByYear(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                          string syn) {
    root = insertByYear(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void
BSTpic::insertByNominations(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                            string syn) {
    root = insertByNominations(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::insertByRating(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                            string syn) {
    root = insertByRating(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void
BSTpic::insertByDuration(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                         string syn) {
    root = insertByDuration(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::insertByGenre1(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                            string syn) {
    root = insertByGenre1(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::insertByGenre2(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                            string syn) {
    root = insertByGenre2(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void
BSTpic::insertByRelease(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                        string syn) {
    root = insertByRelease(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void
BSTpic::insertByMetacritic(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                           string syn) {
    root = insertByMetacritic(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void
BSTpic::insertBySynopsis(string na, int ye, int nom, double rat, int dur, string g1, string g2, string rel, int meta,
                         string syn) {
    root = insertBySynopsis(na, ye, nom, rat, dur, g1, g2, rel, meta, syn, root);
}

void BSTpic::sortByName() {
    inorderByName(root);
}

void BSTpic::sortByYear() {
    inorderByYear(root);
}

void BSTpic::sortByNominations() {
    inorderByNominations(root);
}

void BSTpic::sortByRating() {
    inorderByRating(root);
}

void BSTpic::sortByDuration() {
    inorderByDuration(root);
}

void BSTpic::sortByGenre1() {
    inorderByGenre1(root);
}

void BSTpic::sortByGenre2() {
    inorderByGenre2(root);
}

void BSTpic::sortByRelease() {
    inorderByRelease(root);
}

void BSTpic::sortByMetacritic() {
    inorderByMetacritic(root);
}

void BSTpic::sortBySynopsis() {
    inorderBySynopsis(root);
}

void BSTpic::searchCompleteByName(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        string str1 = key;

        if (key == root->name)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByName(root->left, key);

        searchCompleteByName(root->right, key);


    }

}

void BSTpic::searchCompleteByYear(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        int convertedKey = stoi(key);

        if (convertedKey == root->year)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByYear(root->left, key);

        searchCompleteByYear(root->right, key);

    }

}

void BSTpic::searchCompleteByNominations(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        int convertedKey = stoi(key);

        if (convertedKey == root->nominations)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByNominations(root->left, key);

        searchCompleteByNominations(root->right, key);

    }

}

void BSTpic::searchCompleteByRating(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        double convertedKey = stod(key);

        if (convertedKey == root->rating)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByRating(root->left, key);

        searchCompleteByRating(root->right, key);
    }

}

void BSTpic::searchCompleteByDuration(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        int convertedKey = stoi(key);

        if (convertedKey == root->duration)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByDuration(root->left, key);

        searchCompleteByDuration(root->right, key);

    }

}

void BSTpic::searchCompleteByGenre1(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        if (key == root->genre1)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByGenre1(root->left, key);

        searchCompleteByGenre1(root->right, key);


    }
}

void BSTpic::searchCompleteByGenre2(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        if (key == root->genre2)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByGenre2(root->left, key);

        searchCompleteByGenre2(root->right, key);

    }
}

void BSTpic::searchCompleteByRelease(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        if (key == root->release)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;


        searchCompleteByRelease(root->left, key);

        searchCompleteByRelease(root->right, key);

    }
}

void BSTpic::searchCompleteByMetacritic(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        int convertedKey = stoi(key);

        if (convertedKey == root->metacritic)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchCompleteByMetacritic(root->left, key);

        searchCompleteByMetacritic(root->right, key);

    }

}

void BSTpic::searchPartialByName(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        string str = root->name;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)

            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByName(root->left, key);

        searchPartialByName(root->right, key);

    }

}

void BSTpic::searchPartialByYear(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->year;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByYear(root->left, key);

        searchPartialByYear(root->right, key);

    }
}

void BSTpic::searchPartialByNominations(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->nominations;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByNominations(root->left, key);

        searchPartialByNominations(root->right, key);

    }
}

void BSTpic::searchPartialByRating(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->rating;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByRating(root->left, key);

        searchPartialByRating(root->right, key);

    }
}

void BSTpic::searchPartialByDuration(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->duration;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByDuration(root->left, key);

        searchPartialByDuration(root->right, key);

    }
}

void BSTpic::searchPartialByGenre1(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        string str = root->genre1;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByGenre1(root->left, key);

        searchPartialByGenre1(root->right, key);

    }
}

void BSTpic::searchPartialByGenre2(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        string str = root->genre2;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByGenre2(root->left, key);

        searchPartialByGenre2(root->right, key);

    }
}

void BSTpic::searchPartialByRelease(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        string str = root->release;

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByRelease(root->left, key);

        searchPartialByRelease(root->right, key);

    }
}

void BSTpic::searchPartialByMetacritic(BSTpic::node *root, string key) {

    if (root != NULL)
    {
        stringstream ss;
        ss << root->metacritic;

        string str = ss.str();

        string str1 = key;

        size_t found = str.find(str1);

        if (found != string::npos)
            cout << "Match Found! \n" << "Name: " << root->name << " | Year: " << root->year << " | Nominations: " << root->nominations << " | Rating: " << root->rating << " | Duration: " << root->duration << " | Genre1: " << root->genre1 << " | Genre2: " << root->genre2 << " | Release: " << root->release << " | Metacritic: " << root->metacritic << " | Synopsis: " << root->synopsis << endl;

        searchPartialByMetacritic(root->left, key);

        searchPartialByMetacritic(root->right, key);

    }
}

BSTpic::node *BSTpic::delete_driver(string n) {
    root = deleteNode(root, n);
    return root;
}

BSTpic::node *BSTpic::search(BSTpic::node *root, string key) {
// Base Cases: root is null or key is present at root
    if (root == NULL || root->name == key)
        return root;

// Key is greater than root's key
    if (root->name < key)
        return search(root->right, key);

// Key is smaller than root's key
    return search(root->left, key);
}

void BSTpic::inorderPrintByName(BSTpic::node *t, ofstream &outFile) {
    if (t == NULL)
        return;
    inorderPrintByName(t->left, outFile);

    int y00, nom00, rat00, dur00, met00;
    string n00, gen100, gen200, rel00, syn00;
    n00 = t->name;
    y00 = t->year;
    nom00 = t->nominations;
    rat00 = t->rating;
    dur00 = t->duration;
    gen100 = t->genre1;
    gen200 = t->genre2;
    rel00 = t->release;
    met00 = t->metacritic;
    syn00 = t->synopsis;

    outFile << n00 << ",";
    outFile << y00 << ",";
    outFile << nom00 << ",";
    outFile << rat00 << ",";
    outFile << dur00 << ",";
    outFile << gen100 << ",";
    outFile << gen200 << ",";
    outFile << rel00 << ",";
    outFile << met00 << ",";
    outFile << syn00 << "\n";


    inorderPrintByName(t->right, outFile);
}

void BSTpic::sortPrintByName(ofstream &outFile) {
    inorderPrintByName(root, outFile);
}


BSTpic::node *BSTpic::search_name_NOMA(BSTpic::node *root, string key) {
    {
// Base Cases: root is null or key is present at root
        if (root == NULL || root->name == key)
            return root;

// Key is greater than root's key
        if (root->name < key)
            return search_name_NOMA(root->right, key);

// Key is smaller than root's key
        return search_name_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_year_NOMA(BSTpic::node *root, string key) {
    {

        int convertedKey = stoi(key);

// Base Cases: root is null or key is present at root
        if (root == NULL || root->year == convertedKey)
            return root;

// Key is greater than root's key
        if (root->year < convertedKey)
            return search_year_NOMA(root->right, key);

// Key is smaller than root's key
        return search_name_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_nominations_NOMA(BSTpic::node *root, string key) {
    {

        int convertedKey = stoi(key);

// Base Cases: root is null or key is present at root
        if (root == NULL || root->nominations == convertedKey)
            return root;

// Key is greater than root's key
        if (root->nominations < convertedKey)
            return search_nominations_NOMA(root->right, key);

// Key is smaller than root's key
        return search_nominations_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_rating_NOMA(BSTpic::node *root, string key) {
    {

        int convertedKey = stod(key);

// Base Cases: root is null or key is present at root
        if (root == NULL || root->rating == convertedKey)
            return root;

// Key is greater than root's key
        if (root->rating < convertedKey)
            return search_rating_NOMA(root->right, key);

// Key is smaller than root's key
        return search_rating_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_duration_NOMA(BSTpic::node *root, string key) {
    {

        int convertedKey = stoi(key);

// Base Cases: root is null or key is present at root
        if (root == NULL || root->duration == convertedKey)
            return root;

// Key is greater than root's key
        if (root->duration < convertedKey)
            return search_duration_NOMA(root->right, key);

// Key is smaller than root's key
        return search_duration_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_genre1_NOMA(BSTpic::node *root, string key) {
    {

// Base Cases: root is null or key is present at root
        if (root == NULL || root->genre1 == key)
            return root;

// Key is greater than root's key
        if (root->genre1 < key)
            return search_genre1_NOMA(root->right, key);

// Key is smaller than root's key
        return search_genre1_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_genre2_NOMA(BSTpic::node *root, string key) {
    {

// Base Cases: root is null or key is present at root
        if (root == NULL || root->genre2 == key)
            return root;

// Key is greater than root's key
        if (root->genre2 < key)
            return search_genre2_NOMA(root->right, key);

// Key is smaller than root's key
        return search_genre2_NOMA(root->left, key);
    }

}

BSTpic::node *BSTpic::search_release_NOMA(BSTpic::node *root, string key) {
    {

// Base Cases: root is null or key is present at root
        if (root == NULL || root->release == key)
            return root;

// Key is greater than root's key
        if (root->release < key)
            return search_release_NOMA(root->right, key);

// Key is smaller than root's key
        return search_release_NOMA(root->left, key);
    }
}

BSTpic::node *BSTpic::search_metacritic_NOMA(BSTpic::node *root, string key) {
    {

        int convertedKey = stoi(key);

// Base Cases: root is null or key is present at root
        if (root == NULL || root->metacritic == convertedKey)
            return root;

// Key is greater than root's key
        if (root->metacritic < convertedKey)
            return search_metacritic_NOMA(root->right, key);

// Key is smaller than root's key
        return search_metacritic_NOMA(root->left, key);
    }
}
