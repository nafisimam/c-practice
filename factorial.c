// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    // int input
    
    // Write C code here
    int input ; //input
    int z = 1;
    int y;
    printf("Type your number\n");
    scanf("%d",&input);
    
    for(y=input; y>0;y--){
        //printf("i value: %d\n",input)
         z = z * y;
      // printf("Result: %d\n",z); 
    }
   
    printf("Result: %d\n",z); 

    return 0;
}
