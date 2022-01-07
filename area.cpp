#include <iostream>
using namespace std;

class A
{
    float area,r;
    public :
    void circle ()
    {
        cout<<"enter value of radius"<<endl;
        cin>>r;
        area=3.14*r*r;
        cout<<"area of the circle ="<<area<<endl;
    };
};
class B
{
	  float ar,l,b;
	  public :
	  void rectangle ()
	  {
	  	 cin>>l>>b;
	  	 cout<<"enter the value of length "<<l<<endl;
	  	 cout<<"enter the value of bidth "<<b<<endl;
	  	 ar=l*b;
	  	 cout<<"area of the rectangle ="<<ar;
	  };
};
int main()
{
    A obj;
    obj.circle();
    B obj2;
    obj2.rectangle();
    return 0;
};
