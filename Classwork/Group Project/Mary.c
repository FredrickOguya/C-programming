#include <stdio.h>

int main () {
    printf("Welcome!\n");
    printf("CHAPPY'S private Hospital \n");

    printf("patients Information\n");
    printf("Kindly fill in the information.");

    char first_name[10];
    char middle_name[10];
    char last_name[10];

    printf("Enter the first name\n");
    scanf("%s",first_name);

    printf("Enter the middle name\n");
    scanf("%s",middle_name);

    printf("Enter the last name\n");
    scanf("%s",last_name);

    char gender[10];
    printf("enter your gender: \n");
    scanf("%s",gender);

    int day;
    int month;
    int year;
    printf("Enter the day:;");
    scanf("%d",&day);

    printf("enter the month: ");
    scanf("%d",&month);

    printf("enter the year");
    scanf("%d",&year);
    
    printf("the entered date is:%d. %d. %d", day,month,year);

    return 0;
}