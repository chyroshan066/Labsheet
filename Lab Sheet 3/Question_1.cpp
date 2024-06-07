#include<iostream>
using namespace std;

class Celsius{
	private:
		float temp;
	public:
		float toFahrenheit(float temp){
			return (((9*temp)/5)+32);
		}	
};

class Fahrenheit{
	private:
		float temp;
	public:
		float toCelsius(int temp){
			return (((temp-32)*5)/9);
		}
};

int main(){
	Celsius C1;
	Fahrenheit F1;
	float temp1, temp2;
	cout<< "Enter the temperature in Celsius: ";
	cin>> temp1;
	cout<< temp1<< "C in Fahrenheit scale is "<< C1.toFahrenheit(temp1)<< "F"<< endl<< endl;
	cout<< "Enter the temperature in Fahrenheit: ";
	cin>> temp2;
	cout<< temp2<< "F in Celsius scale is "<< F1.toCelsius(temp2)<< "C"<< endl<< endl;
	return 0;
}
