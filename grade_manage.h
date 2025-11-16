#ifndef Grade_MANAGER_H
#define Grade_MANAGER_H
struct Grade
{
    int studentId;
    char course[50];
    double score;
};
 
void menuGrades();
void inputGrades();
void queryGrades();
void sortGrades();

#endif