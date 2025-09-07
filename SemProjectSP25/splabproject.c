#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PLAYERS 100
#define MAX_NAME_LENGTH 50
#define MAX_POSITION_LENGTH 20

struct Player {
    char name[MAX_NAME_LENGTH];
    int age;
    char position[MAX_POSITION_LENGTH];
    int jerseyNumber;
    int goalsScored;
    int experience;
    char experienceLevel[20];
};

void inputPlayerDetails(struct Player players[], int *n);
void displayTeamReport(struct Player players[], int n);
void findTopScorer(struct Player players[], int n);
void findMostExperienced(struct Player players[], int n);
void classifyExperienceLevel(struct Player players[], int n);
void standardizePosition(char *position);

int main() {
    struct Player players[MAX_PLAYERS];
    int n = 0, choice;

    do {
        printf("\n--- Football Team Management ---\n");
        printf("1. Add Player\n");
        printf("2. Display Team Report\n");
        printf("3. Find Top Scorer\n");
        printf("4. Find Most Experienced Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                inputPlayerDetails(players, &n);
                classifyExperienceLevel(players, n);
                break;
            case 2:
                displayTeamReport(players, n);
                break;
            case 3:
                findTopScorer(players, n);
                break;
            case 4:
                findMostExperienced(players, n);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void inputPlayerDetails(struct Player players[], int *n) {
    if (*n >= MAX_PLAYERS) {
        printf("Player limit reached. Cannot add more.\n");
        return;
    }

    printf("\nEnter details for player %d:\n", *n + 1);

    printf("Name: ");
    scanf(" %[^\n]", players[*n].name);

    printf("Age: ");
    while (scanf("%d", &players[*n].age) != 1 || players[*n].age < 15 || players[*n].age > 50) {
        printf("Please enter a valid age (15-50): ");
        while (getchar() != '\n');
    }

    printf("Position (Goalkeeper/Defender/Midfielder/Forward): ");
    scanf(" %[^\n]", players[*n].position);
    standardizePosition(players[*n].position);

    printf("Jersey Number: ");
    while (scanf("%d", &players[*n].jerseyNumber) != 1 || players[*n].jerseyNumber < 1) {
        printf("Please enter a valid jersey number (positive integer): ");
        while (getchar() != '\n');
    }

    printf("Goals Scored: ");
    while (scanf("%d", &players[*n].goalsScored) != 1 || players[*n].goalsScored < 0) {
        printf("Please enter a valid goal count (non-negative integer): ");
        while (getchar() != '\n');
    }

    printf("Years of Experience: ");
    while (scanf("%d", &players[*n].experience) != 1 || players[*n].experience < 0) {
        printf("Please enter a valid experience (non-negative integer): ");
        while (getchar() != '\n');
    }

    (*n)++;
}

void standardizePosition(char *position) {
    for (int i = 0; position[i]; i++) {
        position[i] = tolower(position[i]);
    }
    if (position[0]) {
        position[0] = toupper(position[0]);
    }
}

void classifyExperienceLevel(struct Player players[], int n) {
    for (int i = 0; i < n; i++) {
        if (players[i].experience <= 1)
            strcpy(players[i].experienceLevel, "Rookie");
        else if (players[i].experience <= 4)
            strcpy(players[i].experienceLevel, "Experienced");
        else
            strcpy(players[i].experienceLevel, "Veteran");
    }
}

void displayTeamReport(struct Player players[], int n) {
    if (n == 0) {
        printf("\nNo players in the team.\n");
        return;
    }

    FILE *file = fopen("team_report.txt", "w");
    if (file == NULL) {
        printf("Error writing to file.\n");
        return;
    }

    printf("\nTeam Report:\n");
    fprintf(file, "Team Report:\n");

    printf("-----------------------------------------------------------------------------\n");
    fprintf(file, "-----------------------------------------------------------------------------\n");

    printf("%-20s %-5s %-8s %-6s %-15s %-20s\n",
           "Name", "Age", "Jersey#", "Goals", "Position", "Experience Level");
    fprintf(file, "%-20s %-5s %-8s %-6s %-15s %-20s\n",
            "Name", "Age", "Jersey#", "Goals", "Position", "Experience Level");

    printf("-----------------------------------------------------------------------------\n");
    fprintf(file, "-----------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-5d %-8d %-6d %-15s %-20s\n",
               players[i].name,
               players[i].age,
               players[i].jerseyNumber,
               players[i].goalsScored,
               players[i].position,
               players[i].experienceLevel);

        fprintf(file, "%-20s %-5d %-8d %-6d %-15s %-20s\n",
                players[i].name,
                players[i].age,
                players[i].jerseyNumber,
                players[i].goalsScored,
                players[i].position,
                players[i].experienceLevel);
    }

    printf("-----------------------------------------------------------------------------\n");
    fprintf(file, "-----------------------------------------------------------------------------\n");

    fclose(file);
    printf("Team report also saved to 'team_report.txt'.\n");
}

void findTopScorer(struct Player players[], int n) {
    if (n == 0) {
        printf("\nNo players available.\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (players[i].goalsScored > players[topIndex].goalsScored) {
            topIndex = i;
        }
    }

    printf("\nTop Scorer:\n");
    printf("Name: %s\n", players[topIndex].name);
    printf("Position: %s\n", players[topIndex].position);
    printf("Jersey Number: %d\n", players[topIndex].jerseyNumber);
    printf("Goals Scored: %d\n", players[topIndex].goalsScored);
}

void findMostExperienced(struct Player players[], int n) {
    if (n == 0) {
        printf("\nNo players available.\n");
        return;
    }

    int expIndex = 0;
    for (int i = 1; i < n; i++) {
        if (players[i].experience > players[expIndex].experience) {
            expIndex = i;
        }
    }

    printf("\nMost Experienced Player:\n");
    printf("Name: %s\n", players[expIndex].name);
    printf("Position: %s\n", players[expIndex].position);
    printf("Jersey Number: %d\n", players[expIndex].jerseyNumber);
    printf("Experience: %d years (%s)\n",
           players[expIndex].experience,
           players[expIndex].experienceLevel);
}
