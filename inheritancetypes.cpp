#include <iostream>
using namespace std;

class Parent{

    public:
    Parent(){
        cout << "Parent Class" << endl;
    }
    

};
// class Parent2{

//     public:
//     Parent2(){
//         cout << "Parent2 Class" << endl;
//     }
// };
class child1 : public Parent{
   public:
   child1(){
    cout<< "Child Class" << endl;
   }

};
class child2 : public Parent{
   public:
   child2(){
    cout<< "Child2 Class" << endl;
   }

};

class grandchild :public child1, public child2{
    public:
    grandchild(){
        cout << "Grandchild class" << endl;
    }
};

int main(){
    grandchild c;

    return 0;
}