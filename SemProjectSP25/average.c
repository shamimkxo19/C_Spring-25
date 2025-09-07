#include <stdio.h>

// Function to calculate average salary
float calculateAverageSalary(float salaries[], int n) {
    float total = 0.0;
    
    // Sum all salaries
    for (int i = 0; i < n; i++) {
        total += salaries[i];
    }
    
    // Calculate and return average
    return (n > 0) ? (total / n) : 0.0;  // Handle division by zero
}

int main() {
    float salaries[] = {50000.0, 60000.0, 45000.0, 70000.0};
    int n = sizeof(salaries) / sizeof(salaries[0]);  // Number of employees
    
    float avg = calculateAverageSalary(salaries, n);
    printf("Average Salary: %.2f\n", avg);  // Output: 56250.00
    
    return 0;
}