# include<iostream>
using namespace std;
class complex {
  private:
  int real;
  int imaginary;
  public:
  complex(int r,int i){
    real=r;
    imaginary=i;
  }
   complex operator + (complex c){
   complex temp(0,0);
   temp.real=real+c.real;
   temp.imaginary=imaginary + c.imaginary;
   return temp;
   }
   void display()
{
cout<<real<<"+"<<imaginary<<"i"<<endl;
}
};
 int main(){
    complex c1(3,4);
    complex c2(2,5);
    complex c3=c1+c2;
    cout<<"RESULT=";
    c3.display();
    return 0;
 }