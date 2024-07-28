#include<iostream>
using namespace std;

class Counter{
    private:
        int SerialNumnber;
        static int nextSerialNumber;
    public:
        Counter(){
            SerialNumnber = nextSerialNumber;
            nextSerialNumber++;
        }
        void displaySerialNumber(){
            cout<< "Serial Number: "<< SerialNumnber<< endl;
        }
        static void displayNextSerialNumber(){
            cout<< "Next Serial Number to be assigned: "<< nextSerialNumber<< endl;
        }
};

int Counter::nextSerialNumber = 1;

int main()
{
    Counter c1, c2, c3;
    c1.displaySerialNumber();
    c2.displaySerialNumber();
    c3.displaySerialNumber();
    Counter::displayNextSerialNumber();
}