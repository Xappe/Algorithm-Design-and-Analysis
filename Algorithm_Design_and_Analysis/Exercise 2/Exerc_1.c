#include <stdio.h>
#include <stdlib.h>
#define NUMBER 2

struct students
{
    int registration;
    char first_name[30];
    float grade1, grade2, average_grade;
}typedef students;


void fill_vector(students vector[NUMBER]);
void sequential_search(students vector[NUMBER], float average);


int main()
{
    float average;
    students vector[NUMBER];

    fill_vector(&vector);

    printf("\nEnter an average value:");
    scanf("%f", &average);

    sequential_search(&vector, average);

    printf("\nClosed Program!");

    return 0;
}



void fill_vector(students vector[NUMBER])
{
    int i;
    char name[30];
    float a=0, b=0;
    int regis;

    for(i=0; i<NUMBER; i++)
    {
        printf("\nEnter the register: ");
        scanf("%d", &regis);

        printf("\nEnter a name: ");
        scanf("%s", &name);

        printf("\nEnter the first grade: ");
        scanf("%f", &a);

        printf("\nEnter the second grade: ");
        scanf("%f", &b);


        strcpy(vector[i].first_name, name);
        vector[i].registration = regis;
        vector[i].grade1 = a;
        vector[i].grade2 = a;
        vector[i].average_grade = (a+b)/2;

    }
}


void sequential_search(students vector[NUMBER], float average)
{
    int i;
    for(i=0; i<NUMBER; i++)
    {
        if(average < vector[i].average_grade)
        {
            printf("%d - ", vector[i].registration);
            printf("%s - ", vector[i].first_name);
            printf("%f\n", vector[i].average_grade);
        }
    }
}

