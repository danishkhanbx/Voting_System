#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

#define CANDIDATE_COUNT

// Declaring Candidates
#define CANDIDATE1 "Joe Biden"
#define CANDIDATE2 "Vladimir Putin"
#define CANDIDATE3 "Xi Jinping"
#define CANDIDATE4 "Narendra Modi"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

// Login form ID & PASSWORD protected
void loginID()
{
    char username[40];

    printf("\n  ::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::  \n\n");

  do{
        printf(" \n                       ENTER USERNAME:- ");
        scanf("%s",username);

    if(strcmp(username,"danishkhanbx") == 0 || strcmp(username,"rameshkapoorcc") == 0 || strcmp(username,"alexwoodhj") == 0 || strcmp(username,"dmitriantonovyg") == 0 || strcmp(username,"lizhangio") == 0)
    {
        printf("\n        Now Enter the Password\n");
    }else{
            printf("\n        SORRY !!!!  INCORRECT USERNAME");
            printf("\n        ENTER TO TRY AGAIN\n");
        }
        }while(strcmp(username,"danishkhanbx") != 0 && strcmp(username,"rameshkapoorcc") != 0 && strcmp(username,"alexwoodhj") != 0 && strcmp(username,"dmitriantonovyg") != 0 && strcmp(username,"lizhangio") != 0);
}
void loginPASSWORD()
{
    char password[40];

  do{
        printf(" \n                       ENTER PASSWORD:- ");
        scanf("%s",password);

        if(strcmp(password,"124421") == 0 || strcmp(password,"indxy91") == 0 || strcmp(password,"usrec420") == 0 || strcmp(password,"ussr675") == 0 || strcmp(password,"commu48") == 0)
        {
        }else
        {
            printf("\n        SORRY !!!!  INCORRECT PASSWORD");
            printf("\n        ENTER TO TRY AGAIN\n");
        }
    }while(strcmp(password,"124421") != 0 && strcmp(password,"indxy91") != 0 && strcmp(password,"usrec420") != 0 && strcmp(password,"ussr675") != 0 && strcmp(password,"commu48") != 0);
}

// Vote preferable candidate
void castVote()
{
    int choice;
    printf("\n\n ### Please choose your Candidate ####\n\n");
    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);
    printf("\n 5. %s", "None of These");

    printf("\n\n Input your choice (1 - 4) : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            votesCount1++; // increase the vote count after user has selected the candidate
            break;
        case 2:
            votesCount2++;
            break;
        case 3:
            votesCount3++;
            break;
        case 4:
            votesCount4++;
            break;
        case 5:
            spoiledtvotes++;
            break;
        default:
            printf("\n Error: Wrong Choice !! Please retry");

        getchar();
    }
    printf("\n Thanks for voting !!");
    exit(1);
}

// Counts the stored number of votes individually
void votesCount()
{
    printf("\n\n ##### Voting Statics ####");
    printf("\n %s - %d ", CANDIDATE1, votesCount1);
    printf("\n %s - %d ", CANDIDATE1, votesCount2);
    printf("\n %s - %d ", CANDIDATE1, votesCount3);
    printf("\n %s - %d ", CANDIDATE1, votesCount4);
    printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

// Compares votes of all the candidates and show result
void getLeadingCandidate(){
    printf("\n\n  #### Leading Candidate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4) /// Comparing the rest of the candidates votes from candid 1 to see whose ahead
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Its a No-win situation !!!----");
}

int main()
{
    int choice;
    loginID();
    loginPASSWORD();
    system("cls");
    printf("\n\n ###### Welcome to One World One Election #####");

    do{
            printf("\n\n 1. Cast the Vote");
            printf("\n 2. Find Vote Count");
            printf("\n 3. Find leading Candidate");
            printf("\n 0. Exit");

            printf("\n\n Please enter your choice : ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    castVote();
                    break;
                case 2:
                    votesCount();
                    break;
                case 3:
                    getLeadingCandidate();
                    break;
                default:
                    printf("\n Error: Invalid Choice");
            }
        }while(choice!=0);
        //hold the screen
        getchar();

        return 0;
}
