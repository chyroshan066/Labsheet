#include<iostream>
using namespace std;

class Example{
    private:
        int data;
    public:
        Example(){}
        Example(int n): data(n){}
        //Declaration of constant member function
        void constantMemberFunction() const{
            cout<< "Calling the constant member function."<< endl;
        }
        //Declaration of non-constant member function
        void nonConstantMemberFunction(){
            cout<< "Calling a non-constant member function."<< endl;
        }
};

int main()
{
    Example e1(2);             //Initialization of non-constant object
    const Example e2(4);       //Initialization of constant object
    // e2.nonConstantMemberFunction(); //This throws error since constant object cannot call non-constant member function
    e2.constantMemberFunction(); //Accepted since, constant object can call constant member function
    e1.nonConstantMemberFunction(); //Accepted since, non-constant object can call non-constant member function
    e1.constantMemberFunction(); //Accepted since, non-constant object can call constant member function
    return 0;
}