#include <iostream>
#include <stdio.h>
using namespace std;

  int area(int lenth,int breadth)
  {
      return lenth*breadth;
  }
 
int pera(int lenth,int breadth)
{
    return 2*(lenth+breadth);
}





int main()
{
    int lenth=0,breadth=0;
    
    printf("Enter lenth and breadth\n");
    cin>>lenth>> breadth;
    
   
    
    int a= area( lenth, breadth);
    
    int peri = pera(lenth,breadth);
    
    cout<<a<<endl<<peri<<endl;

    return 0;
}
