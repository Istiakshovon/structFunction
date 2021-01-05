#include <stdio.h>
#include <stdlib.h>

//struct function
struct Student{
    char name[30];
    char grade[10];
    int age;
    char major[50];
    double gpa;
    int previous_grade;
};

int main(int argc, char** argv) {
//    calling the struct function which already been created
    struct Student student;
    
//    adding values to student struct function
    student.age = 10;
    student.gpa = 3.53;
    student.previous_grade = student.age-1;
//    student.name directly doesn't work for strings. In C programming, strings are actually arrays of characters.
//    strcpy used for strings copy
    strcpy(student.name,"Name");
    strcpy(student.major,"Science");
    strcpy(student.grade,"Nine");
    
    
    printf("Your name is %s. You are %d years old. You are reading grade %s. Your major is %s, You got %f in %d grade",student.name,student.age,student.grade,student.major,student.gpa,student.previous_grade);
    
    return (EXIT_SUCCESS);
}

