#include <iostream>

using namespace std;

//By default, all members of a class declared with the class keyword have private access for all its members.
// Therefore, any member that is declared before any other access specifier has private access automatically.
class Student {
    string major = "Undecided";
    int grade = 12;
public:
    void setMajor (string major);
    void operator-();
    friend void printMajor(Student student);
    string getMajor() {return major;}
    int getGrade() {return grade;}
};

//scope operator (::, two colons)
//Member function definition
void Student::setMajor(string maj) {
    major = maj;
}

//operator overloading
void Student::operator-(){
    grade = grade + 1;
}

//not a member function of Student class but can still access private member student
void printMajor(Student student){
    cout<< "I am a " << student.major << " major! \n";
}


int main() {
    Student* student = new Student();
    cout << student->getMajor() << endl;
    student->setMajor("Computer Science");
    cout << student->getMajor() << "\n";

    //Use of friend function to print the major
    printMajor(*student);

    //What is going on here?!?!?
    -*student;
    cout << "I am in grade " << student->getGrade();
    delete(student);
}
