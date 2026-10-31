#include <cs50.h>
#include <stdio.h>

int main (void) {
    const int N = 3; 
    int scores[N]; 
    int sum = 0;
    for (int i = 0; i < N; i++) {
        printf("%i\n", i);
        scores[i] = get_int("Scores:  ");
        sum += scores[i];
    }
    float average = (float)sum / N;
    printf("Average: %.2f\n", average);
}


