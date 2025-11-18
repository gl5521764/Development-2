#pragma once
#ifndef STUDENT_MANAGE_H
#define STUDENT_MANAGE_H


struct Student {
	char id;
	char name[50];
};
void manageStudents();
void AddStudent();
void FixStudent();
void FoundStudent();
void deleteStudent();
#endif
