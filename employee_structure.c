#include <stdio.h>
#include <string.h>

struct Employee 
{
    int emp_id;
    char emp_name[50];
    char emp_designation[50];
    float emp_salary;
    char emp_department[50];
};

float findHighestSalary(struct Employee employees[], int numEmployees) 
{
    float highestSalary = employees[0].emp_salary;
    for (int i = 1; i < numEmployees; i++) 
    {
        if (employees[i].emp_salary > highestSalary) 
        {
            highestSalary = employees[i].emp_salary;
        }
    }
    return highestSalary;
}

int countEmployeesInDepartment(struct Employee employees[], int numEmployees, char department[]) 
{
    int count = 0;
    for (int i = 0; i < numEmployees; i++) 
    {
        if (strcmp(employees[i].emp_department, department) == 0) 
        {
            count++;
        }
    }
    return count;
}

void displayAllRecords(struct Employee employees[], int numEmployees) 
{
    printf("\nEmployee Records:\n");
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("\n--------------------------------------------------------------");
        printf("Employee ID : %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Designation: %s\n", employees[i].emp_designation);
        printf("Salary: %.2f\n", employees[i].emp_salary);
        printf("Department: %s\n", employees[i].emp_department);
        printf("\n--------------------------------------------------------------");
    }
}

int main() 
{
    struct Employee employees[5];
    int choice;

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter Employee %d Details:\n", i + 1);
        employees[i].emp_id = i + 1;
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Designation: ");
        scanf("%s", employees[i].emp_designation);
        printf("Salary: ");
        scanf("%f", &employees[i].emp_salary);
        printf("Department: ");
        scanf("%s", employees[i].emp_department);
        printf("\n--------------------------------------------------------------");
    }

    while(1) 
    {
        printf("1. Find Highest Salary\n");
        printf("2. Count Employees in a Department\n");
        printf("3. Display All Records\n");
        printf("4. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Highest Salary among all employees: %.2f\n", findHighestSalary(employees, 5));
                break;
            case 2:
                char department[50];
                printf("Enter Department name: ");
                scanf("%s", department);
                printf("Number of employees in %s department: %d\n", department,
                       countEmployeesInDepartment(employees, 5, department));
                break;
            case 3:
                displayAllRecords(employees, 5);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("\n !! ENTER VALID CHOICE !!");
        }
    } 
    return 0;
}