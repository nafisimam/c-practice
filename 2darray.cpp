#include <iostream>

using namespace std;

int main()
{
    // int X[5]; // index 0-4
    // for(int i=0; i < 5; i++)
    // {
    //     X[i] = i;
    //     cout<<X[i]<<endl;
    // }
    
    /*
    
    00
    01
    02
    10
    11
    12
    
    */
    
    int A[3][4];
    
 for(int i=0; i < 5; i++)
    {
        cout<<"i == "<<i<<endl;
        for(int j=0; j < 5; j++){
         cout<<"j == "<<j<<endl;
         A[i][j] = i + j;
         cout<<A[i][j]<<endl;
        }
        
    }
    
    
    return 0;
}
