#include<iostream>
using namespace std;

class Time{
    private:
        int hour, minute, second;
    public:
        Time(): hour(0), minute(0), second(0){}
        Time(int hr, int min, int sec): hour(hr), minute(min), second(sec){}
        Time add(Time o1){
            Time temp;
            temp.second = (second + o1.second) % 60;
            temp.minute = (minute + o1.minute + ((second + o1.second) / 60)) % 60;
            temp.hour = hour + o1.hour + ((minute + o1.minute + ((second + o1.second) / 60)) / 60);
            return temp;
        }
        void display12(){
            cout<< "After adding time, displaying in 12 hour format: "<< endl;
            if(hour >= 12){
                cout<< (hour%12)<< ":"<< minute<< ":"<< second<< endl;
            }
            else
                cout<< hour<< ":"<< minute<< ":"<< second<< endl;
        }
        void display24(){
            cout<< "After adding time, displaying in 24 hour format: "<< endl;
            if(hour >= 24){
                cout<< (hour%24)<< ":"<< minute<< ":"<< second<< endl;
            }
            else
                cout<< hour<< ":"<< minute<< ":"<< second<< endl;
        }
};

int main(){
    Time t1, t2, t3;
    int hr, min, sec;
    cout<< "Enter first time in hour, minute and second format: "<< endl;
    cin>> hr>> min>> sec;
    t1 = Time(hr, min, sec);
    cout<< "Enter second time in hour, minute and second format: "<< endl;
    cin>> hr>> min>> sec;
    t2 = Time(hr, min, sec);
    t3 = t1.add(t2);
    t3.display12();
    t3.display24();
    return 0;
}