//======================
//       Metrey
//======================
#include <stdio.h>
#include <string.h>
#define MAX_STUDENT 100
#define MAX_SUBS 10
#define FILENAME "students.txt"

int num_stu;
int num_sub;

struct Student
{
    int id;
    char name[30];
    float marks[MAX_SUBS];
    float total;
    float average;
    char grade;
};

// all function
void add_student(struct Student students[]);
char getgrade(float average);
void Individual(struct Student students[]);
void classstatistics(struct Student students[]);
void Allresults(struct Student students[]);
void saveToFile(struct Student students[], int count);
void saveFinalReport(struct Student students[]);

struct Student students[MAX_STUDENT];

int loadFromFile(struct Student students[], int maxSize);