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
//The scope operator (::) specifies the class to which the member being defined belongs, granting exactly the same scope properties as if this function definition was directly included within the class definition. For example, the function set_values in the previous example has access to the variables width and height, which are private members of class Rectangle, and thus only accessible from other members of the class, such as this.
//
//The only difference between defining a member function completely within the class definition or to just include its declaration in the function and define it later outside the class, is that in the first case the function is automatically considered an inline member function by the compiler, while in the second it is a normal (not-inline) class member function. This causes no differences in behavior, but only on possible compiler optimizations.
//
//Members width and height have private access (remember that if nothing else is specified, all members of a class defined with keyword class have private access).
// By declaring them private, access from outside the class is not allowed. This makes sense, since we have already defined a member function to set values for those
// members within the object: the member function set_values. Therefore, the rest of the program does not need to have direct access to them. Perhaps in a so simple
// example as this, it is difficult to see how restricting access to these variables may be useful, but in greater projects
// it may be very important that values cannot be modified in an unexpected way (unexpected from the point of view of the object).
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
