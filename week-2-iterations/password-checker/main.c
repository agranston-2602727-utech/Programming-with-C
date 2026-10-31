#include <cs50.h>
#include <string.h>
#include <stdio.h>  

int main (void) {
   string password = "secure123";
   string userInput;
   do {
       userInput = get_string("Enter Password: ");
   }
   while (strcmp(password, userInput) != 0); 
printf("Success!...Access Granted \n");
}