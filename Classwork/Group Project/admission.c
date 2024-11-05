#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char gender;
    char disease[100];
    char address[100];
};

void inputPatientDetails(struct Patient *p) {
    printf("Enter Patient Name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0;

    printf("Enter Age: ");
    scanf("%d", &p->age);

    printf("Enter Gender (M/F): ");
    getchar(); 
    scanf("%c", &p->gender);

    printf("Enter Disease: ");
    getchar(); 
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

int main() {
    struct Patient patient;

    inputPatientDetails(&patient);

    displayPatientDetails(patient);

    return 0;
}
