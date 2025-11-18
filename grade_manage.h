#ifndef Grade_MANAGE_H
#define Grade_MANAGE_H
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