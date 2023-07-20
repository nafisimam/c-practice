#include <iostream>

using namespace std;

int fun(int x){
    if(x==0){
        return 1;
    }
    else{
        return fun(x-1)*x;
    }
    
}

int main()
{   
    int b;
    int a;
    cout<<"Enter a number"<<endl;
    cin>>b;
    a=fun(b);
    
    cout<<"The factorial of "<<b<<" is : "<<a<<endl;
    return 0;
}
