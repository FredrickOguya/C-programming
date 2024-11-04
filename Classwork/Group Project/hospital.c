#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_DOCTORS 100
#define NAME_LENGTH 50

typedef struct{.;
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
    scanf("%S", doctors[doctor_count].name);
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

int main(){
    int choice;

    while(1){
        printf("\nHospital Doctor's Management System\n");
        printf("1. Add Doctor\n");
        printf("2. Delete Doctor\n");
        printf("3. List Doctors\n");
        printf("4. Show booked Doctors\n");
        printf("5. Book a Doctor\n");
        printf("6. Exit\n");
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
            printf("Exiting the program.\n");
            exit(0);
            default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
