#include <iostream>

using namespace std;

//By default, all members of a class declared with the class keyword have private access for all its members.
// Therefore, any member that is declared before any other access specifier has private access automatically.
class Student {
    string major = "Undecided";
public:
    void setMajor (string major);
    string getMajor() {return major;}
};

//scope operator (::, two colons)
void Student::setMajor(string maj) {
    major = maj;
}


int main() {
    Student* student = new Student();
    cout << student->getMajor() << endl;
    student->setMajor("Computer Science");
    cout << student->getMajor();
    delete(student);
}
