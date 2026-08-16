#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char questions[][100] = {"\nWhat is the largest planter in the solar system?", 
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the earth flat?"};

  char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                        "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
                        "A. Yes\nB. No\nC. Maybe\nD. Sometimes\n"};

  char answerKey[] = {'A', 'B', 'D', 'B'};

  int questionCount = sizeof(questions) / sizeof(questions[0]);

  char guess = '\0';
  int score = 0;

  printf("\n***** QUIZ GAME *****");

  for (int i = 0; i < questionCount; i++) {
      printf("\n%s\n", questions[i]);
      printf("%s\n", options[i]);
      printf("\nEnter your choice: ");
      scanf(" %c", &guess);
      
      guess = toupper(guess);

      if (guess == answerKey[i]) {
          printf("CORRECT!\n");
          score++;
      }
      else {
        printf("WRONG!\n");
      }
  }

  printf("\nYour Score is %d out of %d points\n", score, questionCount);

  return 0;
}
