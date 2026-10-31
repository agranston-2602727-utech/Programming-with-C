// Portland Rafting Company — Daily Customer Trip Cost Management System.
#include <cs50.h>
#include <stdio.h>

int main () {
    int exit, packageCost, userHours, packageTotal;
    int custID = 0;
    int scenicTour = 119;
    int relaxationTour = 139;
    int joyousTour = 149;
    string custName; 
    char packageType;

    do {
        printf("\nWelcome to Portland Rafting Compant Trip Cost Management System\n");

        custName = get_string("\nEnter your name: ");
        printf("Select a Tour to continue: ..\n");
        packageType = get_char("[1] = Scenic Tour (1hr), [2] = Relaxation Tour (2hr), [3] = Joyous Fun Tour (3hr)");

        if (packageType == '1') {
            printf("Good Choice! You Selected The Scenic Tour. This Trip Lasts for an hour.\n");
            printf("Kindly Note you can spend additional hours at the cost of $20USD");
            printf("This Package only includes stopping for drinks or snacks\n");
            
            custID ++;
            printf("Hello, %s", custName);
            printf(" your ID is: %d\n", custID);
            userHours = get_int("Enter how many hours spent on the trip: \n");
            if (userHours == 1) {
                printf("The cost of the trip is: %.d\n", scenicTour);
            } else {
                packageTotal = ((userHours * 20) + scenicTour);
                printf("The cost of the trip is: %.d\n", packageTotal);
            }
            printf("The Base cost is $119 and for each extra hour an additional cost of $20 is added\n");

        } else if (packageType == '2') {
            printf("Great Choice! You Selected The Relaxation Tour. This Trip Lasts for an 2 hours.\n");
            printf("Kindly Note you can spend additional hours at the cost of $20USD");
            printf("Package includes stopping for  at popular landmarks or for photos\n");

            custID ++;
            printf("Hello, %s", custName);
            printf(" your ID is: %d\n", custID);
            userHours = get_int("Enter how many hours spent on the trip: \n");
            if (userHours == 2) {
                printf("The cost of the trip is: %.d\n", relaxationTour);
            } else {
                packageTotal = ((userHours * 20) + relaxationTour);
                printf("The cost of the trip is: %.d\n", packageTotal);
            }
            printf("The Base cost is $139 and for each extra hour an additional cost of $20 is added\n");

        } else if (packageType == '3') {
            printf("Great Choice! You Selected The Joyous Tour. This Trip Lasts for an 3 hours.\n");
            printf("Kindly Note you can spend additional hours at the cost of $20USD");
            printf("Package includes swimming\n");

            custID ++;
            printf("Hello, %s", custName);
            printf(" your ID is: %d\n", custID);
            userHours = get_int("Enter how many hours spent on the trip: \n");

            if (userHours == 3) {
                printf("The cost of the trip is: %.d\n", joyousTour);
            } else {
                packageTotal = ((userHours * 20) + joyousTour);
                printf("The cost of the trip is: %.d\n", packageTotal);
            }
            printf("The Base cost is $149 and for each extra hour an additional cost of $20 is added\n");
        } else {
            continue;
        }
    } while (exit != -1);
}