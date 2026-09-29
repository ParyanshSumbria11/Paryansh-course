# include<iostream>
using namespace std;
class Student
{
protected:
string name;
int roll;
int age;
public:
Student(string n,int r,int a){
    name =n;
    roll=r;
    age=a;
}
};
class EngineeringStudent : public Student{
    private:
    string branch;
    int semester;
    public:
    EngineeringStudent(string n,int r,int a,string b,int s):Student(n,r,a){
        branch=b;
        semester=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Semester: "<<semester<<endl;
    }
};

int main(){
    
    EngineeringStudent e1("John",101,20,"Computer Science",4);
    e1.display();
    return 0;
}