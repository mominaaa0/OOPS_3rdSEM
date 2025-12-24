#include<iostream>
using namespace std;
class rectangle {
    private:
    int length,width;
    public:
    rectangle(int l,int b){
        length=l;
        width=b;
    }
    int area(){
        return (length*width);
    }
    int parameter(){
        return (2*(length+width));
    }
    void display(){
        cout<<"\tlength= "<<length <<endl;
        cout<<"\twidhth= "<<width<<endl;
        cout<<"\tarea= "<<area()<<endl;
        cout<<"\tparameter= "<<parameter()<<endl;
    }
};
int main(){
    int l,b;
    cout<<"enter length"<<endl;
    cin>>l;
    cout<<"enter widhth"<<endl;
    cin>>b;
    rectangle x(l,b);
    x.display();
    return 0;
}