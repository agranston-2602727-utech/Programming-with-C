#include <stdio.h>
#include <cs50.h>

// Format Specifiers 
// char      =>     %c
// int       =>     %f or %F
// double    =>     %lf
// strings   =>     %s
// short int =>     %u
// long int  =>     %ld
// long long =>     %lld

int main (void) {
  float score1 = 82.5f;
  float score2 = 91.0f;
  float average = (score1 + score2) / 2.0f;
  
  // printf("Average: %.2f\n", average);
  for (int i = 0; i <= 10; i++){
    // printf("Num: %d\n", i);
  }
  
  string name = get_string("What is your name? ");
  printf("Hello %s\n", name);
}
//Installed Cmake || sudo apt install cmake