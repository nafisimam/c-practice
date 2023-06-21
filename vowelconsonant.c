// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char vowel;
    printf("Type your cart\n");
    
    
     scanf("%c",&vowel);
     if(vowel=='a'|| vowel=='e' || vowel=='i' || vowel=='o' ||vowel=='u' ||vowel=='A'||vowel=='E'||vowel=='I'||vowel=='O'||vowel=='U' ){
         printf("This is vowel\n");
         
     }
     else
     {
         printf("This is Consonant\n");
     }
     

    return 0;
}
