#include<iostream>
using namespace std;

class EmployeeReport{
    private:
        int empID;
        float totBonus;
        int totOvertime;
    public:
        void setpara(int ID, float bonus, int time){
            empID = ID;
            totBonus = bonus;
            totOvertime = time;
        }
        void displayreport(){
            cout<< "An employee with "<< empID << " has received Rs"<< totBonus << " as a bonus and had worked "<< totOvertime<< "hours as overtime in the year 2024"<< endl;
        }
};

int main(){
    int n;
    cout<< "Enter the number of employees report to be created: ";
    cin>> n;
    EmployeeReport emp[n];
    for(int i=0; i<n; i++){
        int ID;
        float bonus;
        int time;
        cout<< "Enter the report for Employee"<< i+1<< endl;
        cout<< "Enter employee id: ";
        cin>> ID;
        cout<< "Enter total bonus: ";
        cin>> bonus;
        cout<< "Enter total overtime in 2024: ";
        cin>> time;
        emp[i].setpara(ID, bonus, time);
    }
    for(int i=0; i<n; i++){
        emp[i].displayreport();
    }
    return 0;
}