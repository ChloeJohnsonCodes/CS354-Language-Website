#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct student_object_struct {
    char major[40];
};
typedef struct student_object_struct Student;

Student* CreateStudent() {

    Student * newStudent = (Student *) malloc(sizeof(Student));

    if(newStudent == NULL){
        return NULL;
    }
    strncpy(newStudent->major, "Undecided", 40);

    return newStudent;
};

Student* setMajor(Student* student, const char major[]){
    if(student == NULL) {
        return NULL;
    }
    strncpy(student->major, major,40);
    return student;
};

char* getMajor(Student* student){
    student->major;
};




int main()
{

    Student* student = CreateStudent("Undecided");

    if(student == NULL){
        return 1;
    }

    printf("%s \n", getMajor(student));
    setMajor(student, "Computer Science");

    printf("%s", getMajor(student));

    free(student);

    return 0;
}