#ifndef COURSE_H
#define COURSE_H

typedef struct Course
{
    char code[50];
    char name[100];
    double credit;
} Course;

Course createCourse(char code[], char name[], double credit);
void viewCourse(Course course);

#endif
