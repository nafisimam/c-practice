#include <iostream>
using namespace std;

int fun(int n)
{
    printf("fun(%d) called.\n", n); // Print the function call with its argument

    if (n > 0)
    {
        int result = fun(n - 1) + n;
        printf("Intermediate result: fun(%d) = fun(%d) + %d = %d\n", n, n - 1, n, result);
        return result;
    }

    printf("Base case reached: fun(%d) returns 0.\n", n);
    return 0;
}

int main()
{
    int x = 5;
    int result = fun(x);
    
    return 0;
}
