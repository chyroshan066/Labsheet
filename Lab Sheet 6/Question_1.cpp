#include<iostream>
using namespace std;

class Distance{
    private:
        int meter, centimeter;
    public:
        Distance(){}
        Distance(int m, int cm): meter(m), centimeter(cm){}

        void setData(){
            cout<< "Enter distance in meter, centimeter format: ";
            cin>> meter>> centimeter;
        }

        float centimeter_to_meter(){
            float temp_m = meter + (static_cast<float>(centimeter) / 100);
            return temp_m;
        }

        int meter_to_centimeter(){
            int temp_cm = centimeter + (meter * 100);
            return temp_cm;
        }

        void getData(){
            cout<< meter<< "m "<< centimeter<< "cm";
        }
};

int main()
{
    Distance d1;
    d1.setData();

    d1.getData();
    cout<< " is equivalent to "<< d1.centimeter_to_meter()<< "m."<< endl;

    d1.getData();
    cout<< " is equivalent to "<< d1.meter_to_centimeter()<< "cm."<< endl;

    return 0;
}