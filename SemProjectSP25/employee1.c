#include <stdio.h>
#include <string.h>

// Constants
#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50
#define MAX_POSITION_LENGTH 50

// Employee structure
struct Employee {
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
    char position[MAX_POSITION_LENGTH];
    int experience;
    char experienceLevel[20];
};

// Function prototypes
void inputEmployeeDetails(struct Employee employees[], int n);
void calculateAverageSalary(struct Employee employees[], int n, FILE *file);
void classifyExperienceLevel(struct Employee employees[], int n);
void findHighestPaidEmployee(struct Employee employees[], int n, FILE *file);
void generateReport(struct Employee employees[], int n, FILE *file);

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    // Open a file for writing the output
    FILE *file = fopen("employee_report.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees. Please enter a value between 1 and %d.\n", MAX_EMPLOYEES);
        fclose(file);
        return 1;
    }

    // Input employee details
    inputEmployeeDetails(employees, n);

    // Classify experience levels
    classifyExperienceLevel(employees, n);

    // Calculate and display average salary
    calculateAverageSalary(employees, n, file);

    // Find and display the highest-paid employee
    findHighestPaidEmployee(employees, n, file);

    // Generate and display the final report
    generateReport(employees, n, file);

    // Close the file
    fclose(file);

    printf("\nReport generated successfully. Check 'employee_report.txt' for details.\n");

    return 0;
}

// Function to input employee details
void inputEmployeeDetails(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Job Position: ");
        scanf(" %[^\n]", employees[i].position);
        printf("Years of Experience: ");
        scanf("%d", &employees[i].experience);
    }
}

// Function to calculate and display the average salary
void calculateAverageSalary(struct Employee employees[], int n, FILE *file) {
    float totalSalary = 0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / n;
    fprintf(file, "Average Salary of Employees: %.2f\n\n", averageSalary);
}

// Function to classify employees based on experience level
void classifyExperienceLevel(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        if (employees[i].experience >= 0 && employees[i].experience <= 2) {
            strcpy(employees[i].experienceLevel, "Junior");
        } else if (employees[i].experience >= 3 && employees[i].experience <= 6) {
            strcpy(employees[i].experienceLevel, "Mid-Level");
        } else if (employees[i].experience >= 7) {
            strcpy(employees[i].experienceLevel, "Senior");
        } else {
            strcpy(employees[i].experienceLevel, "Invalid");
        }
    }
}

// Function to find and display the highest-paid employee
void findHighestPaidEmployee(struct Employee employees[], int n, FILE *file) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }
    fprintf(file, "Highest-Paid Employee:\n");
    fprintf(file, "Name: %s\n", employees[highestIndex].name);
    fprintf(file, "Age: %d\n", employees[highestIndex].age);
    fprintf(file, "Salary: %.2f\n", employees[highestIndex].salary);
    fprintf(file, "Position: %s\n", employees[highestIndex].position);
    fprintf(file, "Experience Level: %s\n\n", employees[highestIndex].experienceLevel);
}

// Function to generate and display the final report
void generateReport(struct Employee employees[], int n, FILE *file) {
    fprintf(file, "Employee Report:\n");
    fprintf(file, "------------------------------------------------------------\n");
    fprintf(file, "Name\t\tAge\tSalary\t\tPosition\t\tExperience Level\n");
    fprintf(file, "------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s\t\t%d\t%.2f\t\t%s\t\t%s\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].position, employees[i].experienceLevel);
    }
    fprintf(file, "------------------------------------------------------------\n");
}