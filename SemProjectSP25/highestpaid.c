#include <stdio.h>

#define MAX_EMPLOYEES 50  // TechFirm's new hires

struct Employee {
    char name[50];
    float salary;
};

// Function to find the highest-paid employee
void findHighestPaid(struct Employee employees[], int n) {
    if (n <= 0) {
        printf("Alert HR: No employees found!\n");
        return;
    }

    int topEarner = 0;  // Assume the first employee is the highest paid

    // Investigate all employees
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[topEarner].salary) {
            topEarner = i;  // New highest salary found!
        }
    }

    // Case cracked! Print the results.
    printf("\n=== Payroll Investigation Results ===\n");
    printf("Highest-Paid Employee: %s\n", employees[topEarner].name);
    printf("Salary: Tk. %.2f\n", employees[topEarner].salary);
    printf("------------------------------------\n");
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];  // Database for employee records
    int n;

    printf("Payroll Clerk: How many employees to process? (1-%d): ", MAX_EMPLOYEES);
    scanf("%d", &n);

    // Validate input (HR hates errors)
    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Error: Enter a number between 1 and %d!\n", MAX_EMPLOYEES);
        return 1;  // Exit with an error code (HR will see this)
    }

    // Collect employee data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee #%d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);  // Reads full names (e.g., "John Doe")
        printf("Salary: Tk. ");
        scanf("%f", &employees[i].salary);
    }

    findHighestPaid(employees, n);  // Solve the case!
    return 0;  // Mission accomplished
}
