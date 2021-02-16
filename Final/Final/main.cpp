#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
class BST
{
private:
    struct node
    {
        int year;
        string award;
        int winner;
        string name;
        string film;
        node* left;
        node* right;
    };
    node* root;
   node* insert(int y, string a, int w,string n, string f, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->year = y;
            t->award = a;
            t->winner = w;
            t->name = n;
            t->film = f;
            t->left = t->right = NULL;
        }
        else if(n < t->name)
            t->left = insert(y,a,w,n,f, t->left);
        else if(n > t->name)
            t->right = insert(y,a,w,n,f, t->right);
        return t;
    }
    node* insert2(string n,int y1, string f1,int w1, string a1,node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->name = n;
            t->year = y1;
            t->film = f1;
            t->winner = w1;
            t-> award = a1;
            t->left = t->right = NULL;
        }
        else if(n < t->name)
            t->left = insert2(n,y1,f1,w1,a1, t->left);
        else if(n > t->name)
            t->right = insert2(n,y1,f1,w1,a1,t->right);
        return t;
    }
    void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << "\n" << t->name << " " << t->year << " " << t->film <<  "\n" << t->award  << t->winner << endl;
        inorder(t->right);
    }
public:

    node * minValueNode(node* node)
    {
        struct node* current = node;

        /* loop down to find the leftmost leaf */
        while (current->left != NULL)
            current = current->left;

        return current;
    }
     node* deleteNode(node* root, string key)
    {
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
    node* search(node* root, string key)
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
    BST()
    {
        root = NULL;
    }
    void insert(int y, string a, int w,string n, string f)
    {
        root = insert(y,a,w,n,f, root);
    }
    void insert2_(string n,int y1,string f1, int w1,string a1)
    {
        root = insert2(n,y1,f1,w1,a1, root);
    }
    void display()
    {
        inorder(root);
        cout << endl;
    }
    string return_name(node* root)
    {
       return root->name;
    }
    node* return_root()
    {
       return root;
    }

    node* delete_driver(string n)
    {
       root = deleteNode(root,n);
    }



};

int main() {

    BST o;

    ifstream infile;
    infile.open("ac_actr.csv");


    while(infile.good())
    {
        string year, award, winner, name, film;

        getline(infile,year,',');
        getline(infile, award, ',');
        getline(infile, winner, ',');
        getline(infile, name, ',');
        getline(infile, film, '\n');


        int year1, winner1;
        year1 = stoi(year);
        winner1 = stoi(winner);

        o.insert(year1,award,winner1,name,film);

        cout << year1 << " " << award << " " << winner1 << " " << name << " " << film << endl;

    }
    cout << endl << endl;
    o.display();

/// search for a record(name) and modify name

    cout << "please enter a name to modify its field\n";
    string n;
    getline(cin,n);


///modifying name
   cout << "please enter a name to replace\n";
            string n1;
            getline(cin, n1);
            int y1,w1;
            string f1,a1;
            y1 = o.search(o.return_root(), n)->year;
            f1 = o.search(o.return_root(), n)->film;
            w1 = o.search(o.return_root(),n)->winner;
            a1 = o.search(o.return_root(),n)->award;
            o.insert2_(n1, y1, f1, w1,a1);
            ///delete the old node
            o.delete_driver(n);
/*
     ///modifying year

                 cout << "enter the year you want to replace\n";
                 int y2;
                 cin >> y2;
                 o.search(o.return_root(),n)->year = y2;




                 cout << "1.Actor\n";
                 cout << "2.Actress\n";
                 int a3,a4;
                 cin >> a3;
                 cout << "3. Leading role\n";
                 cout << "4. Supporting role\n";
                 cin >> a4;
                 if(a3 == 1 & a4 == 3)
                 {
                     o.search(o.return_root(),n)->award = "Actor in a Leading Role";
                 }
                 if(a3==1 & a4==4)
                 {
                     o.search(o.return_root(),n)->award = "Actor in a Supporting Role";
                 }
                 if(a3==2 & a4==3)
                 {
                     o.search(o.return_root(),n)->award = "Actress in a Leading Role";
                 }
                 if(a3==2 & a4==4)
                 {
                     o.search(o.return_root(),n)->award = "Actress in a Supporting Role";
                 }




                 cout << "enter the name of film\n";
                 string f3;
                 getline(cin,f3);
                 o.search(o.return_root(),n)->film = f3;




                 cout << "1. winner\n";
                 cout << "2. loser\n";
                 int w2;
                 cin >> w2;
                 if(w2==1)
                 {
                     o.search(o.return_root(),n)->winner = 1;
                 } else
                 {
                     o.search(o.return_root(),n)->winner = 0;
                 }

*/

/* delete record
cout << "enter a name to delete\n";
string n_to_delete;
getline(cin,n_to_delete);
o.delete_driver(n_to_delete);
*/


 /// cout << "key not found\n";

  o.display();



    return 0;
}