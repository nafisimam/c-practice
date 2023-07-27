#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;
    for(i = 0; i < arr->length; i++)
    {
        if(key == arr->A[i])
        {
            //making search faster by moving the search key one position ahead
            //swap(&arr->A[i], &arr->A[i - 1]); // for transposition method
            swap(&arr->A[i], &arr->A[0]); // making the position of key to the first/head 
            
            return i;
        }
    }
    return -1;
}

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

int Delete(struct Array *arr,int index)
{
    int x = 0;
    int i;
    if(index >= 0 && index <= arr->length)
    {
        x = arr->A[index]; // which value we are going to delete/remove
        for(i = index; i < arr->length - 1;i++) // length - 1 means till the end of array
        {
            arr->A[i] = arr->A[i+1];
        }
        
        // below print shows that the last element still exists but only the length is reduced by length--
        
        printf("%d", arr->A[arr->length - 3]);
        printf("%d", arr->A[arr->length - 2]);
        printf("%d", arr->A[arr->length - 1]);
        arr->length--;
        printf("%d", arr->A[arr->length - 1]);
        return x;
    }
    
    return 0;
}


int BinarySearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;
    
    while(l <= h)
    {
    
        mid=(l+h)/2;
        
        if(arr.A[mid] == key)
        {
            return mid;
        }
        else if(arr.A[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }    
    return -1;
    
    
    
}

int main()
{
    struct Array arr={{1,2,4,5,6,7,8,9},20,5};
    
    //Append(&arr,10);
    //Insert(&arr, 100, 100);
    //Delete(&arr, 3);
    //Display(arr);
    
    //printf("%d\n", LinearSearch(&arr, 4));
    //printf("%d\n", LinearSearch(&arr, 4));
    
    printf("%d\n", BinarySearch(arr, 3));
    return 0;
}
