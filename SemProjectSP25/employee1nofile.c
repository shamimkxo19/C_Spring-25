#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50
#define MAX_POSITION_LENGTH 50

struct Employee {
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
    char position[MAX_POSITION_LENGTH];
    int experience;
    char experienceLevel[20];
};

void inputEmployeeDetails(struct Employee employees[], int n);
void calculateAverageSalary(struct Employee employees[], int n);
void classifyExperienceLevel(struct Employee employees[], int n);
void findHighestPaidEmployee(struct Employee employees[], int n);
void generateReport(struct Employee employees[], int n);

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees. Please enter a value between 1 and %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    inputEmployeeDetails(employees, n);
    classifyExperienceLevel(employees, n);
    calculateAverageSalary(employees, n);
    findHighestPaidEmployee(employees, n);
    generateReport(employees, n);

    return 0;
}

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

void calculateAverageSalary(struct Employee employees[], int n) {
    float totalSalary = 0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / n;
    printf("\nAverage Salary of Employees: %.2f\n\n", averageSalary);
}

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

void findHighestPaidEmployee(struct Employee employees[], int n) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }
    printf("Highest-Paid Employee:\n");
    printf("Name: %s\n", employees[highestIndex].name);
    printf("Age: %d\n", employees[highestIndex].age);
    printf("Salary: %.2f\n", employees[highestIndex].salary);
    printf("Position: %s\n", employees[highestIndex].position);
    printf("Experience Level: %s\n\n", employees[highestIndex].experienceLevel);
}

void generateReport(struct Employee employees[], int n) {
    printf("Employee Report:\n");
    printf("------------------------------------------------------------\n");
    printf("Name\t\tAge\tSalary\t\tPosition\t\tExperience Level\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t%.2f\t\t%s\t\t%s\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].position, employees[i].experienceLevel);
    }
    printf("------------------------------------------------------------\n");
}
