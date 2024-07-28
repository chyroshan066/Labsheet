#include<iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date(){}
        Date(int dd, int mm, int yr): day(dd), month(mm), year(yr){}

        //Pre increment
        Date operator ++(){
            int temp_day = ++day;
            day = day % 30;
            int temp_month = month;
            month  = (month + (temp_day / 30)) % 12;
            year = year + ((temp_month + (temp_day / 30)) / 12);
            return Date(day, month, year);
        }

        //Post increment
        Date operator ++(int){
            int temp_day = day;
            day = day % 30;
            int temp_month  = month;
            month  = (month + (temp_day / 30)) % 12;
            year = year + ((temp_month + (temp_day / 30)) / 12);
            return Date(day, month, year);
            day++;
        }

        void display(){
            cout<< day<< "/"<< month<< "/"<< year;
        }
};

int main()
{
    Date d1(31, 11, 3),d2, d3, d4(30, 11, 2);

    d1.display();
    d2 = ++d1;  //Pre-increment
    cout<< " after pre-increment gives ";
    d2.display();
    cout<< endl;

    d4.display();
    d3 = d4++;  //Post-increment
    cout<< " after post-increment gives ";
    d3.display();
    cout<< endl;

    return 0;
}