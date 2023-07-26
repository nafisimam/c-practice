#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A; // in heap
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    printf("All Array Elements:\n");
    for (int i = 0; i < arr.length; i++) // can also do with arr.size, will show all elements
    {
        printf("%d\n", arr.A[i]);
    }  
}

int main()
{
    
    struct Array arr;
    int n, i;
    
    printf("Enter Array Size\n");
    scanf("%d", &arr.size);
    
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;
    
    printf("Enter how many numbers\n");
    scanf("%d", &n);
    
    printf("Enter Array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    
    display(arr);
        
    return 0;
}
