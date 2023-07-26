#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
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
    struct Array arr={{1,2,3,4,5},20,5};

    display(arr);
        
    return 0;
}
