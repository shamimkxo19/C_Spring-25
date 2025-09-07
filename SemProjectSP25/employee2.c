#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
};

// Function prototypes
void findHighestPaid(struct Employee employees[], int n);

int main() {
    int max_size, n;

    printf("Enter maximum number of employees (array size): ");
    scanf("%d", &max_size);

    if (max_size <= 0) {
        printf("Invalid array size. Must be positive.\n");
        return 1;
    }

    struct Employee *employees = (struct Employee*)malloc(max_size * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter number of employees to input (1-%d): ", max_size);
    scanf("%d", &n);

    if (n <= 0 || n > max_size) {
        printf("Invalid number of employees. Must be between 1 and %d.\n", max_size);
        free(employees);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: $");
        scanf("%f", &employees[i].salary);
    }

    findHighestPaid(employees, n);
    free(employees);
    return 0;
}

// Function definition
void findHighestPaid(struct Employee employees[], int n) {
    if (n <= 0) {
        printf("No employees to compare.\n");
        return;
    }

    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }

    printf("\nHighest-Paid Employee:\n");
    printf("Name: %s\n", employees[highestIndex].name);
    printf("Salary: $%.2f\n", employees[highestIndex].salary);
}