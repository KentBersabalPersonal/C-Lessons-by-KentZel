#include <stdio.h>
#include <string.h>

char loginUsername[100];
char loginPassword[100];
char username[100];
char password[100];
char confirmPassword[100];
char fullName[100];

int age;
int registered = 0;

void removeNewLine(char str[]) {
    str[strcspn(str, "\n")] = '\0';
}

// REGISTER LOOP FUNCTION FOR C //

void registerUser() {

  if (registered) {
    printf("\nAlready registered. Please Login.\n");
    return;
  }

  printf("\nRegister Selected\n");

  printf("\n========== REGISTER ==========\n");

  printf("Username: ");
      fgets(username, sizeof(username), stdin); // IF PRINTING CHAR IN C //
      removeNewLine(username);

  printf("Password: ");
      fgets(password, sizeof(password), stdin);
      removeNewLine(password);

  while(1) {

  printf("Confirm Password: ");
      fgets(confirmPassword, sizeof(confirmPassword), stdin);
      removeNewLine(confirmPassword);

      if (strcmp(password, confirmPassword) == 0) {
        break;
      }
      else {
            printf("\nPassword does not match. Try Again.\n\n");
        }
      }

  printf("Full Name: ");
      fgets(fullName, sizeof(fullName), stdin); 
      removeNewLine(fullName);

  printf("Age: ");
      scanf("%d", &age); // IF PRINTING INT IN C //
      getchar(); 

  printf("\nRegistered Successful!\n");
  registered = 1;

  printf("\nBack To Menu\n");

}

// USER'S PROFILE //

void userProfile() {
  printf("\n========== PROFILE ==========\n");

  printf("Username: %s\n", username);
  printf("Password: %s\n", password);
  printf("Fullname: %s\n", fullName);
  printf("Age: %d\n", age);
}

// LOGOUT PROFILE //

void logoutUser() {
  printf("\nLogging Out...\n");
}

// USER DASH BOARD //

void userDashBoard() {

  int boardChoice;

  while(1) {
    printf("\n========== DASHBOARD ==========\n");
      printf("Welcome, %s!\n", username); 

      printf("1. View Profile\n");
      printf("2. Logout\n");

      printf("\n===============================\n");

      printf("Type Your Choice: ");
          scanf("%d", &boardChoice);
          getchar();

      switch(boardChoice) {

        case 1: 
          userProfile();
          break;

        case 2: 
          logoutUser();
          return;

        default:
          printf("Invalid Choice");
      }
  }
}

// LOGIN LOOP FUNCTION FOR C //

void loginUser() {

  printf("Login Selected");

  printf("\n========== LOGIN ==========\n");

  if (!registered) {
    printf("\nNo account found. Please register first!\n");
    return;
  }

  for (int attempts = 1; attempts <= 3; attempts++) {

  printf("\nAttempt %d/3\n", attempts);

  printf("Username: ");
      fgets(loginUsername, sizeof(loginUsername), stdin);
      removeNewLine(loginUsername);

  printf("Password: ");
      fgets(loginPassword, sizeof(loginPassword), stdin);
      removeNewLine(loginPassword);

  if (strcmp(password, loginPassword) == 0 &&
      strcmp(username, loginUsername) == 0) {

        printf("\nLogin Successful!\n");
        userDashBoard();
        return;

      } else {
        printf("Invalid Username or Password.\n");
      }
  }
  printf("\nToo many failed attempts.\n");
  printf("Returning to Menu...\n");
}

void exitUser() {

  printf("\nThank You For Using The Form, Please Come Again!\n");

}

int main() {

while(1) { // 1 in c not true for while loops //

  int choice;

  printf("\n========== MENU ==========\n");

  printf("1. Register\n");
  printf("2. Login\n");
  printf("3. Exit\n");

  printf("==========================\n"); 

  printf("Type The Number Of Choice Here: ");
  scanf("%d", &choice); // %d IS INT FOR C //
  getchar();

  switch(choice) {

    case 1: 
      registerUser();
      break;

    case 2: 
      loginUser();
      break;

    case 3: 
      exitUser();
      return 0;

    default: 
      printf("Invalid Choice!\n");
  }
}
  return 0;
}
