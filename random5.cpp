#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    // Constructor
    Student() {
        count++;
    }

    // Static member function
    static void display() {
        cout << "Total objects created: " << count;
    }
};

// Initialize static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    Student::display();

    return 0;
}