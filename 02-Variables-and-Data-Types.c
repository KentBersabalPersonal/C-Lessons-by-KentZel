#include <stdio.h>
#include <stdbool.h> // FOR BOOLEANS LIBRARY

int main() {

int age = 25;
printf("\nYou are %d years old", age);

int year = 2025;
printf("\nThe year is %d\n", year);

int quantity = 1;
printf("\nYou have ordered %d x items\n", quantity);

float gpa = 2.5;
printf("Your gpa is %.1f\n", gpa);

float price = 19.99;
printf("The price is $%.2f\n", price);

float temperature = -10.1;
printf("\nThe temperature is %.1f Degrees Celsius\n", temperature);

double pie = 3.14159265358979;
printf("The value of pie is %.15lf\n", pie);

double e = 2.7182818284590;
printf("The value of e is %.15lf\n", e);

char grade = 'A';
printf("\nYour grade is %c\n", grade);

char symbol = '!';
printf("You favorite symbol is %c\n", symbol);

char currency = '$';
printf("The currency is %c\n", currency);

char name[] = "Kent Bersabal";
printf("\nHello %s\n", name);

char food[] = "Pizza";
printf("Your favorite food is %s\n", food);

char email[] = "denzelkentbersabal0@gmail.com";
printf("Your email is %s\n", email);

bool isOnline = true;
  if (isOnline) {
    printf("\nThe system is Online\n");
  } else {
    printf("\nThe system is Offline\n");
  }

} 

// variable = A reusable container for a value.
//
// Behaves as if it were the value it contains.
// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
//
// bool = true or false (1 byte, requires ‹ stdbool.h›)


char name[100]; // STRINGS IN C //

bool passed = true; // BOOLEANS IN C //

int age; // INT IN C // // STILL THE SAME AS C++ //

double twoDecimal; // DOUBLE IN C // // STILL THE SAME AS C++ //

float manyDecimal; // FLOAT IN C // // STILL THE SAME AS C++ //

}

  return 0;
}
