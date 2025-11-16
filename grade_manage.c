#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "grade_manage.h"
struct Grade grades[50];//最多储存的成绩记录条数
int gradeCount = 0;//初始成绩记录条数
void manageGrades()
{
    int option;
    while(1)
    {
        printf("欢迎使用成绩管理系统\n");
        printf("1.成绩录入\n");
        printf("2.成绩查询\n");
        printf("3.成绩排序\n");
        printf("4.返回主菜单\n");
        printf("请选择操作：\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            inputGrades();
            break;
        case 2:
            queryGrades();
            break;
        case 3:
            sortGrades();
            break;
        case 4:
            return;
        default:
            printf("请输入正确选择\n");
        }
    }
}
void inputGrades()
{
    int studentId;
    char course[50];
    double score;
    printf("请输入学号：");
    scanf("%d",&studentId);
    printf("请输入课程名称：");
    scanf("%s",&course);
    printf("请输入成绩：");
    scanf("%lf",&score);
    grades[gradeCount].studentId = studentId;
    strcpy(grades[gradeCount].course,course);
    grades[gradeCount].score = score;
    gradeCount++;
    printf("已成功录入");
}
void queryGrades()
{
    int studentId;
    int result=0;
    int i;
    printf("请输入学号：");
    scanf("%d",&studentId);
    for(i = 0;i<gradeCount;i++);
    {
        if(grades[i].studentId=studentId)
        {
            printf("学号为%d的学生，%s课程的成绩为：%lf\n",studentId,grades[i].course,grades[i].score);
            result = 1;
        }
    }
    if(!result)
    {
        printf("查无此人");
    }
}
void sortGrades()
{
    int i;
    int j;
    for(i = 0;i<gradeCount - 1;i++)
    {
        for(j = 0;j<gradeCount - 1 - i;j++)
        {
            if(grades[j].score < grades[j + 1].score)
            {
                struct Grade temp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = temp;
            }
        }
    }
    printf("已排序完成");
 }