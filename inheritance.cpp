#include<iostream>
using namespacestd;

class Parent{
    

    public:
    int x;


    private:
    int y;

    protected:
    int z;

};
class child1 = public Parent{
    

};
class child2 = private Parent{

};
class child13 = protected Parent{

};

int main(){
    Parent p;
    p.x;
    return 0;
}