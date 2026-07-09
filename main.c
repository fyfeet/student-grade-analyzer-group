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


//===========================
//       Mengchheang
//===========================

void add_student(struct Student students[])
{
    int i, j, new_count;
    float total;

    printf("Enter number of students to add (1-%d): ", MAX_STUDENT - num_stu);
    scanf("%d", &new_count);

    while (new_count < 1 || new_count > MAX_STUDENT - num_stu)
    {
        printf("Invalid! Enter again: ");
        scanf("%d", &new_count);
    }

    printf("Enter number of subjects (1-%d): ", MAX_SUBS);
    scanf("%d", &num_sub);

    while (num_sub < 1 || num_sub > MAX_SUBS)
    {
        printf("Invalid! Enter again: ");
        scanf("%d", &num_sub);
    }

    for (i = num_stu; i < num_stu + new_count; i++)
    {
        total = 0;
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        for (j = 0; j < num_sub; j++)
        {
            printf("Enter mark for Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);

            while (students[i].marks[j] < 0 || students[i].marks[j] > 100)
            {
                printf("Invalid! Enter mark (0-100): ");
                scanf("%f", &students[i].marks[j]);
            }

            total += students[i].marks[j];
        }

        students[i].total = total;
        students[i].average = total / num_sub;
        students[i].grade = getgrade(students[i].average);

        printf("Average = %.2f\n", students[i].average);
    }

    num_stu += new_count;
}

//========================
//        Monika
//=======================
char getgrade(float average){
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else if (average >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

void Individual(struct Student students[])
{
    int search_Id;
    int found = 0;
    printf("Enter Student ID : ");
    scanf("%d", &search_Id);
    if (num_stu == 0)
    {
        printf("No student yet!");
    }

    for (int i = 0; i < num_stu; i++)
    {
        if (search_Id == students[i].id)
        {
            found = 1;

            printf("==================================\n");
            printf("Student name : %s\n", students[i].name);
            printf("ID : %d\n", students[i].id);
            for (int j = 0; j < num_sub; j++)
            {
                printf("mark %d  : %.2f\n", j + 1, students[i].marks[j]);
            }
            printf("Total marks  : %.2f\n", students[i].total);
            printf("Average      : %.2f\n", students[i].average);
            printf("Grade        : %c", students[i].grade);
            break;
        }
    }
    if (!found)
    {
        printf("Student with id %d is not found\n", search_Id);
    }
}

//===============================
//         Peijing
//===============================
void Allresults(struct Student students[])
{

    if (num_stu == 0)
    {
        printf("\nNo student yet\n");
        return;
    }

    printf("\n================GRADING RESULTS================\n");
    printf("ID\tName\t\tTotal score\t\tAverage\tGrade\n");
    for (int i = 0; i < num_stu; i++)
    {
        float total = 0;
        char temp[10];

        for (int j = 0; j < num_sub; j++)
        {
            total += students[i].marks[j];
            sprintf(temp, "%.2f", students[i].marks[j]);
            
        }

        students[i].average = total / num_sub;

        students[i].grade = getgrade(students[i].average);

        printf("%d\t%s\t\t%.2f\t\t\t%.2f\t%c\n",
               students[i].id,
               students[i].name,
               students[i].total,
               students[i].average,
               students[i].grade);
    }
}
