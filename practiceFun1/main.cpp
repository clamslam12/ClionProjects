#include <iostream>
#include <string>
using namespace std;
class automobile{
private:
    string model;
    int year;
public:
    string getModel(){
        return model;
    }
    void setModel(string m){
        model = m ;

    }
    void hello(){
        cout << "hello from automobile class" << endl;
    }

};

class truck : public automobile{
public:
    void hello(){
        cout << "hello from truck class" << endl;
    }

};

int main() {
    automobile a1;
    truck t1;

    a1.hello();
    t1.hello();
    a1.setModel("civic");
    t1.setModel("accord");
    cout << t1.getModel() << endl << a1.getModel();

    a1 = t1;
     cout << endl << a1.getModel();
    return 0;
}