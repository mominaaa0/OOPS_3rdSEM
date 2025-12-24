#include <iostream>
using namespace std;
class Interest {
private:
    float principal, rate, time;   
public:
    Interest(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }
    float calculateSI() {
        return (principal * rate * time) / 100;
    }
    void display() {
        cout << "Principal: " << principal << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Simple Interest: " << calculateSI() << endl;
    }
};
int main() {
    float p, r, t;
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time (in years): ";
    cin >> t;
    Interest obj(p, r, t);
    obj.display();
    return 0;
}
