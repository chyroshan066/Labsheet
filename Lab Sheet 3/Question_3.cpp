#include<iostream>
using namespace std;

class carpark{
	private:
		int carId, charge_hr;
		float parkedTime;
	public:
		void setdata(){
			cout<< "Enter the car ID: ";
			cin>> carId;
			cout<< "Enter charge per hour of car "<< carId<< " : ";
			cin>> charge_hr;
			cout<< "Enter time parked by the car "<< carId<< " in minutes: ";
			cin>> parkedTime;
		}
		void getdata(){
			cout<< endl<< endl;
			cout<< "Car ID: "<< carId<< endl;
			cout<< "Charge per hour: "<< charge_hr<< endl;
			cout<< "Time parked: "<< parkedTime<< "min"<< endl;
		}
};

int main(){
	carpark CP1;
	CP1.setdata();
	CP1.getdata();
	return 0;
}
