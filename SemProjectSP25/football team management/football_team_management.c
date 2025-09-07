#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PLAYERS 100
#define MAX_NAME_LENGTH 50
#define MAX_POSITION_LENGTH 20

struct Player
{
    char name[MAX_NAME_LENGTH 50];
    int age;
    char position[MAX_POSITION_LENGTH 20];
    int jerseyNumber;
    int goalsScored;
    int experience;
    char experienceLevel;
};

void inputPlayerDetails(struct Player players[], int *n);

void displayTeamReports(struct Player players[], int n);

void findTopScorer(struct Player players[], int n);

void findMostExperienced(struct Player players[], int n);

void classifyExperienceLevel(struct Player players[], int n);

void standardizePosition(char *position);

int main()
{
    struct Player players[MAX_PLAYERS];
    int n = 0;
    int choice;

    do
    {
        printf("\n---Football Team Management---\n");
        printf("1.Add Player");
        printf("Display Team Report\n");
        printf("3.Find Top Scorer\n");
        printf("4.Find Most Experienced Player");
        printf("5.Exit");
        printf("Enter Your Choice");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please Enter a Number(1-5)\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice)
        {
        case 1:
            inputPlayerDetails(players, &n);
            classifyExperienceLevel(players, n);
            break;
        case 2:
            displayTeamReports(players, n);
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
            printf("Invalid Choice. Please try again!");
        }
    }while(choice !=5);

    return 0;
}

void inputPlayerDetails(struct Player players[], int *n){
if(*n>=MAX_PLAYERS){
printf("Player limit reached.Cannot add more.\n");
return;
}

printf("Enter details for player %d:\n",n+1);

printf("Name: ");
scanf("%[^\n]",players[*n].name);

printf("Age: ");
while(scanf("%d", &players[*n].age)!=1 || players[*n].age<15 ||  players[*n].age>50)
printf("Please Enter A Valid Age!(15-50)");
while(getchar()!='\n');

}