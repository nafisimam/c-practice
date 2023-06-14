// Online C compiler to run C program online
#include <stdio.h>

int main() {

// Write C code here
int myNumOne;
int myNumTwo;
int myNumThree;
int bigOne;

// Ask the user to type a number
printf("Type Three numbers: \n");

// Get and save the number the user types
scanf("%d", &myNumOne);
scanf("%d", &myNumTwo);
scanf("%d", &myNumThree);

printf("Your number is: %d\n", myNumOne);
printf("Your number is: %d\n", myNumTwo);
printf("Your number is: %d\n", myNumThree);

if(myNumOne > myNumTwo)
{
    //printf("greater number is : %d\n", myNumOne);
    bigOne = myNumOne;
    
    
} else
{

   //printf("greater number is : %d\n", myNumTwo);
    bigOne = myNumTwo;
    
    
}

// if we use if block here we will need another variable which will store the biggest from first two variable

if(bigOne > myNumThree)
{

    printf("greater number is : %d\n", bigOne);
} else
{
    printf("greater number is : %d\n", myNumThree);
}

return 0;
}
