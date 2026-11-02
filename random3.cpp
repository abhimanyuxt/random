#include <iostream>
using namespace std;

Class A {
    public:
    virtual void show(){
        cout<<"This is an animal"
    }

};

Class B : Class A {
    public:
    void show() override {
        cout<<"This is a dog"
    }
};

int main (){
    A * obj;
    B b;
    obj =&b;
    obj->show();
    return 0;
}