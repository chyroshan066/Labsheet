#include<iostream>
using namespace std;

class Vehicle{
    private:
        int num_vehicle, hour;
        float rate, totalCharge;
    public:
        Vehicle(){}
        Vehicle(int num, int hr, float r): num_vehicle(num), hour(hr), rate(r){
            totalCharge = num_vehicle * hour * rate;
            if(num_vehicle > 10)
                totalCharge *= 0.9;
        }
        Vehicle(Vehicle& obj): num_vehicle(obj.num_vehicle), hour(obj.hour), rate(obj.rate), totalCharge(obj.totalCharge){}
        void display(){
            cout<< "Charge: $"<< totalCharge<< endl;
        }
};

int main()
{
    Vehicle v1(11, 6, 30), v2;
    v2 = Vehicle(v1);
    cout<< "For vehicle 1: "<< endl;
    v1.display();
    cout<< "For vehicle 2(which is copied from vehicle 1): "<< endl;
    v2.display();
    return 0;
}