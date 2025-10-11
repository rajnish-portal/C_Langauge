#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100


struct Student {
    int rollNumber;
    char name[50];
    char dob[15];  
    float grade;
};


void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student list full!\n");
        return;
    }
    students[*count].rollNumber = *count + 1; 
    printf("Roll number assigned: %d\n", students[*count].rollNumber);
    printf("Enter name: ");
    scanf(" %[^\n]%*c", students[*count].name); 
    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf(" %[^\n]%*c", students[*count].dob);
    printf("Enter grade: ");
    scanf("%f", &students[*count].grade);
    (*count)++;
}


void displayStudents(struct Student students[], int count) {
    printf("\nStudent Records:\n");
    printf("Roll No.\tName\t\tDOB\t\tGrade\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t\t%s\t\t%s\t\t%.2f\n", students[i].rollNumber, students[i].name, students[i].dob, students[i].grade);
    }
}

// Search student by roll number
void searchStudent(struct Student students[], int count) {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == roll) {
            printf("Found student: %s, DOB: %s, Grade: %.2f\n", students[i].name, students[i].dob, students[i].grade);
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nStudent Record System Menu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
