#include <iostream>

using namespace std;

class Rectangle
{
  private:
    int length;
    int breadth;
    
  public:
    // CONSTRUCTOR
    Rectangle()
    {
        cout<<"CONSTRUCTOR IS CALLED!"<<endl;
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b)
    {
        cout<<"Parameterized CONSTRUCTOR IS CALLED!"<<endl;
        length=l;
        breadth=b;
    }   
    
    int area()
    {
        return length*breadth;
    }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }
    
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    
    int getLength()
    {
        return length;
    }
    
    int getBreadth()
    {
        return breadth;
    }
    
    ~Rectangle()
    {
       cout<<"DESTRUCTOR IS CALLED!"<<endl; 
       
       
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 20);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    
    cout<<"Enter length and breadth"<<endl;
    int inputlength;
    int inputbreadth;
    cin>>inputbreadth>>inputlength;
    
    r1.setLength(inputlength);
    r1.setBreadth(inputbreadth);
    
    cout<<r1.getLength()<<endl;
    cout<<r1.getBreadth()<<endl;
    return 0;
}
