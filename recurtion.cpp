#include <iostream>
using namespace std;

void fun (int n)
{
    if(n>0)
    {
        //fun(n-1);
        printf("%d\n", n);
        fun(n-1);
    }
    
    printf("Recusive function %d\n", n);
}

int main()
{
    int x = 3; //
    fun(x);
    printf("Main function ends %d\n", x);
    return 0;
}
