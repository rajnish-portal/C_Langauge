#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PATIENTS 100
#define MAX_DOCTORS 50
#define MAX_APPOINTMENTS 100

typedef struct {
    char id[6];  
    char name[100];
    int age;
    char gender;
    char disease[100];
    char dateOfAdmission[12]; 
} Patient;

typedef struct {
    char id[6];
    char name[100];
    char specialty[100];
    int experience;
} Doctor;

typedef struct {
    int id;
    char patientId[6];
    char doctorId[6];
    char date[12];  // "DD/MM/YYYY"
    char timeSlot[10]; // e.g. "10:00AM"
} Appointment;

Patient patients[MAX_PATIENTS];
Doctor doctors[MAX_DOCTORS];
Appointment appointments[MAX_APPOINTMENTS];

int patientCount = 0, doctorCount = 0, appointmentCount = 0;

void generatePatientID(char *name, char *date, char *id) {
    id[0] = toupper(name[0]);
    id[1] = toupper(name[1] ? name[1] : 'X');
    int j = 0;
    for (int i = 0; date[i] != '\0' && j < 3; i++) {
        if (isdigit(date[i])) {
            id[2 + j] = date[i];
            j++;
        }
    }
    id[5] = '\0';
}

void generateDoctorID(char *name, char *id) {
    id[0] = toupper(name[0]);
    id[1] = toupper(name[1] ? name[1] : 'X');
    id[2] = toupper(name[2] ? name[2] : 'X');
    int num = doctorCount + 1; 
    id[3] = (num / 10) + '0';
    id[4] = (num % 10) + '0';
    id[5] = '\0';
}

void addPatient() {
    if (patientCount < MAX_PATIENTS) {
        printf("Enter patient name: ");
        scanf(" %[^\n]%*c", patients[patientCount].name);
        printf("Enter age: ");
        scanf("%d", &patients[patientCount].age);
        printf("Enter gender (M/F): ");
        scanf(" %c", &patients[patientCount].gender);
        printf("Enter disease: ");
        scanf(" %[^\n]%*c", patients[patientCount].disease);
        printf("Enter date of admission (DD/MM/YYYY): ");
        scanf(" %[^\n]%*c", patients[patientCount].dateOfAdmission);

        generatePatientID(patients[patientCount].name, patients[patientCount].dateOfAdmission, patients[patientCount].id);

        patientCount++;
        printf("Patient added with ID: %s\n", patients[patientCount - 1].id);
    } else {
        printf("Patient list full\n");
    }
}

void addDoctor() {
    if (doctorCount < MAX_DOCTORS) {
        printf("Enter doctor name: ");
        scanf(" %[^\n]%*c", doctors[doctorCount].name);
        printf("Enter specialty: ");
        scanf(" %[^\n]%*c", doctors[doctorCount].specialty);
        printf("Enter years of experience: ");
        scanf("%d", &doctors[doctorCount].experience);

        generateDoctorID(doctors[doctorCount].name, doctors[doctorCount].id);

        doctorCount++;
        printf("Doctor added with ID: %s\n", doctors[doctorCount - 1].id);
    } else {
        printf("Doctor list full\n");
    }
}

void viewPatients() {
    printf("\nList of Admitted Patients:\n");
    printf("ID\tName\tAge\tGender\tDisease\tDate of Admission\n");
    for (int i = 0; i < patientCount; i++) {
        printf("%s\t%s\t%d\t%c\t%s\t%s\n", patients[i].id, patients[i].name, patients[i].age, patients[i].gender, patients[i].disease, patients[i].dateOfAdmission);
    }
}

void viewDoctors() {
    printf("\nList of Doctors:\n");
    printf("ID\tName\tSpecialty\tExperience\n");
    for (int i = 0; i < doctorCount; i++) {
        printf("%s\t%s\t%s\t%d years\n", doctors[i].id, doctors[i].name, doctors[i].specialty, doctors[i].experience);
    }
}

void bookAppointment() {
    if (appointmentCount >= MAX_APPOINTMENTS) {
        printf("Appointment list full\n");
        return;
    }

    char pId[6], dId[6], date[12], timeSlot[10];
    printf("Enter patient ID: ");
    scanf(" %5s", pId);
    printf("Enter doctor ID: ");
    scanf(" %5s", dId);
    printf("Enter appointment date (DD/MM/YYYY): ");
    scanf(" %11s", date);

    int count = 0;
    for (int i = 0; i < appointmentCount; i++) {
        if (strcmp(appointments[i].doctorId, dId) == 0 && strcmp(appointments[i].date, date) == 0) {
            count++;
        }
    }

    if (count >= 5) {
        printf("Notice: Doctor %s is already booked for 5 patients on %s. Cannot book more appointments.\n", dId, date);
        return;
    }

    printf("Enter time slot (e.g. 10:00AM): ");
    scanf(" %9s", timeSlot);

    strcpy(appointments[appointmentCount].patientId, pId);
    strcpy(appointments[appointmentCount].doctorId, dId);
    strcpy(appointments[appointmentCount].date, date);
    strcpy(appointments[appointmentCount].timeSlot, timeSlot);
    appointments[appointmentCount].id = appointmentCount + 1;

    appointmentCount++;
    printf("Appointment booked successfully\n");
}

void viewAppointments() {
    printf("\nAppointments List:\n");
    printf("ID\tPatientID\tDoctorID\tDate\tTime\n");
    for (int i = 0; i < appointmentCount; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t%s\n",
               appointments[i].id,
               appointments[i].patientId,
               appointments[i].doctorId,
               appointments[i].date,
               appointments[i].timeSlot);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Patient\n2. Add Doctor\n3. View Patients\n4. View Doctors\n5. Book Appointment\n6. View Appointments\n7. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addPatient(); break;
            case 2: addDoctor(); break;
            case 3: viewPatients(); break;
            case 4: viewDoctors(); break;
            case 5: bookAppointment(); break;
            case 6: viewAppointments(); break;
            case 7: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
