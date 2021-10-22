//REG No: CIT-227-003/2021
//NAME: MAINA JIMMY GICHURI



#include<stdio.h>
int main(){
    // declaration
    float units, bill1, bill2, bill3, bill4, bill5;

    // input
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // calculation & output

    if (units <= 100)
    {
        bill1 = 200;
        printf("\nTotal bill to be paid: %.2f KSHs", bill1);
    }
    else if(units <= 150)
    {
        bill2 = 200 + ((units - 100) * 25);
        printf("\nTotal bill to be paid: %.2f KSHs", bill2);
    }
    else if(units <= 200)
    {
        bill3 = 200 + (50 * 25) + ((units - 150) * 20);
        printf("\nTotal bill to be paid: %.2f KSHs", bill3);
    }
    else if(units <= 250)
    {
        bill4 = 200 + (50 * 25) + (50 * 20) + ((units - 200) * 15);
        printf("\nTotal bill to be paid: %.2f KSHs", bill4);
    }
    else
    {
        bill5 = 200 + (50 * 25) + (50 * 20) + (50 * 15) + ((units - 250) * 10);
        printf("\nTotal bill to be paid: %.2f KSHs", bill5);
    }

    return 0;
}




