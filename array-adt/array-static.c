#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
}; 

void Display(struct Array arr)
{
    int i;
    printf("All Array Elements:\n");
    for (int i = 0; i < arr.length; i++) // can also do with arr.size, will show all elements
    {
        printf("%d\n", arr.A[i]);
    }  
}
void Append(struct Array *arr,int x) // structure pass by address is needed here to modify the values
{
    if(arr->length < arr->size) // checks if the array length is less then array size
    {
      arr->A[arr->length++]=x; // inserts element to the last position of array
    }
      
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for(i = arr->length; i > index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr={{1,2,3,4,5},20,5};
    Append(&arr,10);
    Insert(&arr, 100, 100);
    Display(arr);
    return 0;
}
