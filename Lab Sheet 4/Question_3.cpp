#include<iostream>
#include<string>

using namespace std;

class Department{
    private:
        int departmentID;
        string departmentName;
        static int count, left;
    public:
        Department(){}
        Department(int id, string name): departmentID(id), departmentName(name){
            count++;
            left++;
            cout<< "Object"<< count<< " is created."<< endl;
        }
        ~Department(){
            cout<< "Object"<< left<< " goes out of scope"<< endl;
            left--;
        }
};

int Department::count = 0;
int Department::left = 0;

int main()
{
    Department d1(1001, "Electronics"), d2(1002, "Computer");
    {
        Department d3(1003, "Mechanical");
    }
    Department d4(1004, "Electronics");
    {
        Department d5(1005, "Civil");
    }
    Department d6(1006, "Architecture"), d7(1007, "Agriculture");
    return 0;
}