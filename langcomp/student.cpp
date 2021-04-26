#include <iostream>

using namespace std;

//By default, all members of a class declared with the class keyword have private access for all its members.
// Therefore, any member that is declared before any other access specifier has private access automatically.
class Student {
    string major = "Undecided";
public:
    void setMajor (string major);
    friend void printMajor(Student student);
    string getMajor() {return major;}
};

//scope operator (::, two colons)
//Member function definition
void Student::setMajor(string maj) {
    major = maj;
}

//not a member function of Student class but can still access private member major
void printMajor(Student student){
    cout<< "I am a " << student.major << " major! ";
}


int main() {
    Student* student = new Student();
    cout << student->getMajor() << endl;
    student->setMajor("Computer Science");
    cout << student->getMajor() << "\n";

    //Use of friend function to print the major
    printMajor(*student);
    delete(student);
}
