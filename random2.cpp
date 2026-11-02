#include <iostream>
using namespace std;

inline int mult(int n){
    return n*n;
}

int main(){
    int n=5;
    cout<<mult(n)<<endl;
}

class A{
    private: 
    int x=10;

    friend void display(A obj);

};
void display(A obj){
    cout<<obj.x;

}

int main(){
    A obj;
    display(obj);
    return 0;
}