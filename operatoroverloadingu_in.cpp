#include<iostream>
using namespace std;
class cum 
{
   private:
   int real,im;
   public:
   cum():  real(0), im(0){}
  cum (int r, int i): real(r),im(i){} 
  cum operator+(cum o)
  {
    cum rs;
    rs.real=real+o.real;
    rs.im = im+o.im;
    return rs;
  }
  void f()
  {
    
    cout<<real<<"\n and \n"<<im<<endl;

  }
  
};
int main()
{
    int r1,i1,r2,i2;
    cout<<"enter the  numbers for real numbers:";
    cin>>r1>>r2;
    cout<<"enter the numbers for imaginary numbers:";
    cin>>i1>>i2;
    cum c1(r1,i1);
    cum c2(r2, i2);
    cum c3=c1+c2;
    c3.f();
    return 0;
}