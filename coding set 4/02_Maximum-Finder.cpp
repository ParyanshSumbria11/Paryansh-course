# include<iostream>
using namespace std;
class maximum{
public:
   int max(int a,int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
   }
   int max(int a,int b,int c){
    if(a>>b && a>>c){
        return a;
    }
    else if(b>>c){
        return b;
    }
    else {
        return c;
    }
   }
   float max( float a,float b){
       if(a>b){
        return a;
       }
       else {
        return b;
       }
   }
};
int main(){
    maximum m;
    cout<<"maximum of 10 and 20 are :"<<m.max(10,20)<<"\n";
    cout<<"maximum of 5,8 and 3 are :"<<m.max(5,8,3)<<"\n";
    cout<<"maximum of 3.2 and 4.5 are :"<<m.max(3.2f,4.5f);
    return 0;
}