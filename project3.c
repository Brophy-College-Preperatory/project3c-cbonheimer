// Cody Bonheimer. My partner was Mario Montes.
#include <stdio.h>
#include <math.h>

int main(void){
    int Quarters = 25;
    int Dimes = 10;
    int Nickels = 5;
    int Pennies = 1;
    int TotalQ = 0;
    int TotalD = 0;
    int TotalN = 0;
    int TotalP = 0;
    int TotalC = 0;
    int WhoNum;
    char Choice = 'y';

while(Choice == 'y'){
    printf("How much change is owed?\n");
    printf("Enter as a whole number, For example, enter 0.41 as 41.\n");
    
    scanf("%i", &WhoNum);
    
    while (WhoNum > 24){
         WhoNum = WhoNum - Quarters;
        TotalQ++;

    }
    while (WhoNum > 9){
         WhoNum = WhoNum - Dimes;
        TotalD++;

    }
    while (WhoNum > 4){
         WhoNum = WhoNum - Nickels;
        TotalN++;
    
    }
    while (WhoNum > 0){
        WhoNum = WhoNum - Pennies;
        TotalP++;

    }
     if (WhoNum == 0){
        TotalC = TotalQ + TotalD + TotalN + TotalP;
        
        printf("Quarters: %i\n", TotalQ);
        printf("Dimes: %i\n", TotalD);
        printf("Nickels: %i\n", TotalN);
        printf("Pennies: %i\n", TotalP);
        printf("Total Coins: %i\n", TotalC);

     }

printf("Would you like to ask again (y/n)?\n");
    scanf("%s", &Choice);
    if (Choice != 'y' && Choice != 'n'){
        printf("Put in an answer that is (y/n)?\n");
        scanf("%s", &Choice);
    }
    }
     
    return 0;
}
