#include <stdio.h>
#include <math.h>

int main() {

  double num1 = 0.0;
  double num2 = 0.0;
  double result = 0.0;
  char operatorChoice = '\0';

  printf("\nC CALCULATOR\n");

  printf("\nEnter the first number: ");
  scanf(" %lf", &num1);

  printf("Enter the operator (+ - * /): ");
  scanf(" %c", &operatorChoice);

  printf("Enter the second number: ");
  scanf(" %lf", &num2);

  switch(operatorChoice) {
      case '+':
        result = num1 + num2;
        break;
      
      case '-':
        result = num1 - num2;
        break;

      case '*':
        result = num1 * num2;
        break;

      case '/':
        result = num1 / num2;
        break;

      default: 
        printf("Invalid Operator\n");
  }

  printf("\nResult: %.2lf\n", result);

  return 0;
}
