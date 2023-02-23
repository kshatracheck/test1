#include <iostream>
using namespace std;

class parent{
    public:
        virtual void display(){
            
        }
};

parent* ptr_parent;

class a{
    public:
        void display(){
            cout << "This is from class A" << endl;
        }
};

a obj_a;

class b : public a{
    public:
        void display(){
            cout << "This is from class B" << endl;
        }
};

b obj_b;

int main(){
   ptr_parent = &obj_a;
   ptr_parent->display();
}
