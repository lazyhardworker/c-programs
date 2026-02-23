#include <stdio.h>
// a larger struct which may carry a log of data
struct Student{
    char name[50];
    unsigned int id;
    unsigned int semester;
    float gpa;
}

//passing by value
void print_student(struct Student s){
    printf("Name: %s, ID: %d, in semester %d, width GPA: %.2f\n", s.name, s.id, s.semesster, s.gpa);
}

//passing by pointer
void print_student(struct Student* s){
    printf("Name: %s, ID: %d, in semester %d, width GPA: %.2f\n", s->name, s->id, s->semesster, s->gpa);
}