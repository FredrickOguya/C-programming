#include <stdio.h>
#include <stdlib.h>
#include<string.h>



/*Start of doctors section*/
#define MAX_DOCTORS 100
#define NAME_LENGTH 50

typedef struct{
    char name[NAME_LENGTH];
    int booked;
}Doctor;

Doctor doctors[MAX_DOCTORS];
int doctor_count = 0;

void addDoctor(){
    if(doctor_count >= MAX_DOCTORS){
        printf("Doctors list is full\n");
        return;
    }
    printf("Enter Doctor's fullname: ");
    scanf("%s", doctors[doctor_count].name);
    doctors[doctor_count].booked = 0; // Not booked initially
    doctor_count++;
    printf("Doctor added successfully!\n");
};

void deleteDoctor(){
    char name[NAME_LENGTH];
    printf("Enter Doctor's name to delete: ");
    scanf("%s",name);

    for(int i = 0;i < doctor_count; i++){
        if(strcmp(doctors[i].name,name) == 0){
            //Shift the remaining doctors down
            for(int j = i; j < doctor_count - 1; j++){
                doctors[j] = doctors[j + 1];
            }

            doctor_count--;
            printf("Doctor deleted successfully!\n");
            return;
        }
    }
    printf("Doctor not found\n");
}

void listDoctors(){
    if(doctor_count == 0){
        printf("No doctor in the list\n");
        return;
    }
    printf("List of doctors: \n");
    for(int i = 0; i < doctor_count; i++){
        printf("%s\n", doctors[i].name);
    }
}

void showBookedDoctors(){
    int found = 0;
    printf("Booked doctors: \n");
    for(int i = 0; i < doctor_count; i++){
        if(doctors[i].booked){
            printf("%s\n",doctors[i].name);
            found = 1;
        }
    }
    if(!found){
        printf("No booked doctors.\n");
    }
}

void bookDoctor(){
    char name[NAME_LENGTH];
    printf("Enter Doctor's name to book: ");
    scanf("%s", name);

    for(int i = 0; i < doctor_count; i++){
        if(strcmp(doctors[i].name, name) == 0){
            if(!doctors[i].booked){
                doctors[i].booked = 1;
                printf("Doctor booked successfully!\n");
            }
            else{
                printf("Doctor is already booked!\n");
            }
            return;
        }
    }
    printf("Doctor not found!\n");
};
void doctor()
{
    int choice;

    while(1 && choice!= 6){
        printf("\nHospital Doctor's Management System\n");
        printf("1. Add Doctor\n");
        printf("2. Delete Doctor\n");
        printf("3. List Doctors\n");
        printf("4. Show booked Doctors\n");
        printf("5. Book a Doctor\n");
        printf("6. Go back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            addDoctor();
            break;
            case 2:
            deleteDoctor();
            break;
            case 3:
            listDoctors();
            break;
            case 4:
            showBookedDoctors();
            break;
            case 5:
            bookDoctor();
            break;
            case 6:
                break;
            default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
/*End of doctors section*/
/*Start of patient admissions section*/
struct Patient {
    char name[50];
    int age;
    char gender;
    char disease[100];
    char address[100];
};

void inputPatientDetails(struct Patient *p) {
    printf("Enter Patient Name: ");
    getchar();
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0;


    printf("Enter Age: ");
    scanf("%d", &p->age);
    getchar();

    printf("Enter Gender (M/F): ");
    scanf("%c", &p->gender);
    getchar(); 

    printf("Enter Disease: ");
    fgets(p->disease, sizeof(p->disease), stdin);
    p->disease[strcspn(p->disease, "\n")] = 0;


    printf("Enter Address: ");
    fgets(p->address, sizeof(p->address), stdin);
    p->address[strcspn(p->address, "\n")] = 0;
}


void displayPatientDetails(struct Patient p) {
    printf("\nPatient Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %c\n", p.gender);
    printf("Disease: %s\n", p.disease);
}

void admission(){
    struct Patient patient;

    inputPatientDetails(&patient);

    displayPatientDetails(patient);

}


int main(){
    while(1)
    {
        int option;
        printf("\nEnter an option\n1.Admission.\n2.Doctors \n");
        scanf(" %d",&option);

        switch (option)
        {
        case 1:
            admission();
            break;
        case 2:
            doctor();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice try again");
            break;
        }
    }
}