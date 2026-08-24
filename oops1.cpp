#include<iostream>
using namespace std;

class Fruit{ //class create
    public:
    string name;
    string color;
};
int main(){
    Fruit mango;//object create
    mango.name="AAM";
    mango.color="Yellow";
    cout<< mango.name <<'-' << mango.color<< endl;

    Fruit *apple = new Fruit();// object create
    apple->name = "APPLE";
    apple->color = "RED";
    cout << apple->name<< "-" << apple->color << endl;


    
    return 0;
}

