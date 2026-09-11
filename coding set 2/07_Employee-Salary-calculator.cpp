#include<iostream>
using namespace std;
 class employee{
     string employeename; 
     double basicsalary;
     
     public:
     employee(){
         cout<<"please enter your name  :";
         getline(cin,employeename);
         cout<<"enter the basic salary:";
         cin>>basicsalary;
     }
     double calculateHRA(){
         return 0.2*basicsalary;
     }
     double calculateDA(){
         return 0.1*basicsalary;
     }
     void displaygrosssalary(){
     cout<<"the gross salary is :"<<(basicsalary+calculateDA()+calculateHRA())<<endl;
     }
     
 };
 int main()
{
    employee e;
    e.displaygrosssalary();
    return 0;
}