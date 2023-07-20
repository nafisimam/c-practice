#include <iostream>
using namespace std;

int d = 5; // for global it will act same like static

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        int result = fun(n - 1) + x;
        printf("x == %d\n", x);
        printf("Result == %d\n", result);
        return result;
    }
    return 0;
}

int main()
{
    int x = 5;
    int result = fun(x);
    
    return 0;
}
