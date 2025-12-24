/*3. Temperature Conversion (Celsius → Fahrenheit)
Create a class Temperature with a Celsius value.
Use a parameterized constructor to take Celsius.
Compute F = (C × 9/5) + 32 and display both.*/

#include<iostream>
using namespace std;
class temperature {
    private:
    float celcius;
    public:
    temperature(float C ){
        celcius=C;
    }
    float fahrenheit(){
        return ((celcius*9/5)+32);
    }
    void display(){
        cout<<"\ttemp in celcius= "<<celcius<<endl;
        cout<<"\ttemp in fahrenheit= "<<fahrenheit()<<endl;
    }
};
int main(){
    float C;
    cout<<"temperature in celcius is :"<<endl;
    cin>>C;
   temperature T(C);
   T.display();
   return 0;
}