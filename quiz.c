#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define Max_lenght_for_questions 256
#define Max_lenght_for_answers 128

#define Total_Questions 10

typedef struct 
{
    char question[Max_lenght_for_questions];
    char answerA[Max_lenght_for_answers];
    char answerB[Max_lenght_for_answers];
    char answerC[Max_lenght_for_answers];
    char answerD[Max_lenght_for_answers];
    char correct_answer;
} quiz42;

int main(void)
{
    quiz42 quiz[Total_Questions];

    strcpy(quiz[0].question, "Who finished the piscine as a top contributor?");
    strcpy(quiz[0].answerA, "Simon");
    strcpy(quiz[0].answerB, "Arthur");
    strcpy(quiz[0].answerC, "Pia");
    strcpy(quiz[0].answerD, "Felix");
    quiz[0].correct_answer = 'A';

    strcpy(quiz[1].question, "Who got 100 percent in all exams? (except for the final)");
    strcpy(quiz[1].answerA, "Benedikt");
    strcpy(quiz[1].answerB, "Fabian");
    strcpy(quiz[1].answerC, "Marco");
    strcpy(quiz[1].answerD, "Javid");
    quiz[1].correct_answer = 'B';

    strcpy(quiz[2].question, "Who kept sharing instagram stories about 42 and the piscine?");
    strcpy(quiz[2].answerA, "Lana");
    strcpy(quiz[2].answerB, "Valentina");
    strcpy(quiz[2].answerC, "Zuzana");
    strcpy(quiz[2].answerD, "Ekaterina");
    quiz[2].correct_answer = 'D';

    strcpy(quiz[3].question, "Who was always there for a smoke?");
    strcpy(quiz[3].answerA, "Marian");
    strcpy(quiz[3].answerB, "Mingwei");
    strcpy(quiz[3].answerC, "Norman");
    strcpy(quiz[3].answerD, "Jasmin");
    quiz[3].correct_answer = 'C';

    strcpy(quiz[4].question, "Who loves to eat beans for lunch?");
    strcpy(quiz[4].answerA, "Michal");
    strcpy(quiz[4].answerB, "Marcel");
    strcpy(quiz[4].answerC, "Anastasia");
    strcpy(quiz[4].answerD, "Jullien");
    quiz[4].correct_answer = 'B';

    strcpy(quiz[5].question, "Who loves to play foosball most?");
    strcpy(quiz[5].answerA, "Christian");
    strcpy(quiz[5].answerB, "Carla");
    strcpy(quiz[5].answerC, "Daniel");
    strcpy(quiz[5].answerD, "Kyuri");
    quiz[5].correct_answer = 'D';

    strcpy(quiz[6].question, "Who managed to get 10 percent in all exams?(except for the final)");
    strcpy(quiz[6].answerA, "Marian Marta");
    strcpy(quiz[6].answerB, "Moritz");
    strcpy(quiz[6].answerC, "Melih");
    strcpy(quiz[6].answerD, "Paul");
    quiz[6].correct_answer = 'C';

    strcpy(quiz[7].question, "Which was the most annoying thing to do?");
    strcpy(quiz[7].answerA, "Retrying the projects :d");
    strcpy(quiz[7].answerB, "Checking norminette and correcting the mistakes :d");
    strcpy(quiz[7].answerC, "Working on rush projects :d");
    strcpy(quiz[7].answerD, "Evaluating someone at the same time u were supposed to be evaluated :d");
    quiz[7].correct_answer = 'B';

    strcpy(quiz[8].question, "What was the most common mistake a lot of us did during the first exam?");
    strcpy(quiz[8].answerA, "Login");
    strcpy(quiz[8].answerB, "Forgot to login on time!");
    strcpy(quiz[8].answerC, "Creating a project folder first");
    strcpy(quiz[8].answerD, "Forgot to push properly");
    quiz[8].correct_answer = 'C';

    strcpy(quiz[9].question, "What was the most relieving thing during the whole piscine?");
    strcpy(quiz[9].answerA, "Sending 'Grademe' and see it's a Success!");
    strcpy(quiz[9].answerB, "Getting a success rate from a project");
    strcpy(quiz[9].answerC, "Passing the exam");
    strcpy(quiz[9].answerD, "Getting points from the coalition games");
    quiz[9].correct_answer = 'A';

    double  total_correct = 0;
    char answer;

    for (int i = 0; i < Total_Questions; i++)
    {
        printf("Question %d: %s\n\n", (i+1), quiz[i].question);
        printf("A) %s\n", quiz[i].answerA);
        printf("B) %s\n", quiz[i].answerB);
        printf("C) %s\n", quiz[i].answerC);
        printf("D) %s\n", quiz[i].answerD);
        printf("\n Your Answer? (A,B,C or D): ");
        scanf(" %c", &answer);
        if (toupper(answer) == quiz[i].correct_answer)
        {
            total_correct++;
            printf("\n Correct Answer! Congrats!");
        }
        else
        {
            printf("\nIncorrect Answer!");
            printf("\nThe correct answer was %c.", quiz[i].correct_answer);
        }
    
    printf("\n\n\n");
    }

     printf("%d/%d questions answered correctly",
         (int) total_correct, 
         Total_Questions);
    printf(" (%.1f%%)\n\n", (total_correct / Total_Questions) * 100);

    return 0;
}
