# include<iostream>
using namespace std;
class Book{
    protected:
    string title;
    string author;
public:
Book(string t,string a){
    title=t;
    author=a;
}
};
class EBook:public Book{
    private:
    float filesize;
    string format;
public:
EBook(string t,string a,float f,string fm):Book(t,a){
           filesize=f;
           format=fm;
        }
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"File Size: "<<filesize<<" MB"<<endl;
            cout<<"Format: "<<format<<endl;
        }
    };
    int main(){
        EBook Books[3]={
            EBook("Bade Ghar ki Beti","Munshi Premchand",2.5,"PDF"),
            EBook("man vs wild","john Brave",3.0,"EPUB"),
            EBook("fundamentals of C","Yashavant Kanetkar",1.8,"MOBI")
        };
        for(int i=0;i<3;i++){
            Books[i].display();
        }
        return 0;
    }