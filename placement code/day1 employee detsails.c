#include <stdio.h>

int main() {
    char Employee_name[50];
    int Employee_age;
    char Employee_Ph_no[15];
    float Employee_salary;
    char Employee_details[100];
    int Employee_id;

    printf("Enter the Employee name: ");
    scanf("%49s", Employee_name); 
    printf("Enter the Employee age: ");
    scanf("%d", &Employee_age);

    printf("Enter the Employee phone number: ");
    scanf("%14s", Employee_Ph_no); 

    printf("Enter the Employee salary: ");
    scanf("%f", &Employee_salary);

    printf("Enter the Employee details: ");
    scanf(" %[^\n]%*c", Employee_details); 
    printf("Enter the Employee ID: ");
    scanf("%d", &Employee_id);

    
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", Employee_name);
    printf("Age: %d\n", Employee_age);
    printf("Phone Number: %s\n", Employee_Ph_no);
    printf("Salary: %.2f\n", Employee_salary);
    printf("Details: %s\n", Employee_details);
    printf("ID: %d\n", Employee_id);

    return 0;
}
