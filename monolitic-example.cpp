#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int lenth=0,breadth=0;
    
    printf("Enter lenth and breadth\n");
    cin>>lenth>> breadth;
    
    cout<<lenth<<endl<<breadth<<endl;
    
    int area = lenth *breadth;
    
    int peri = 2*(lenth+breadth);
    
    cout<<area<<endl<<peri<<endl;

    return 0;
}
