
#include <iostream>

using namespace std;

int fun(int n)
{
    if(n>100)
    {
        //cout<<n<<endl;
        return n-10;
    }
    else 
    {
        return fun(fun(n+11));
    }
} 


int main()
{
    int x;
    x=fun(100);
    cout<<x<<endl;
    return 0;
}
