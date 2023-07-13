#include <iostream>

using namespace std;

void fun(int *A,int n)
{
    // int arraySize = sizeof(A)/sizeof(int); 
    // cout<<arraySize<<endl;
    
   for (int i = 0; i < 5; i++ )
   cout<<A[i]<<endl;
   
   // FORACH LOOP UPON POINTER WON'T WORK
}

int main()
{
    int A[]={2,4,6,8,10};
    int n=5;
    
    for(int i = 2; i < n + 2; i++ )
    {
        //cout<<i<<endl;
        //cout<<A[i-2]<<endl;
        
    }
    fun(A, n);    
    
    //int arraySize = sizeof(A)/sizeof(int);
    
    //cout<<arraySize<<endl;

    return 0;
}
