#include<iostream>
using namespace std;

class Compare{
    private:
        int data;
    public:
        Compare(){}
        Compare(int val): data(val){}

        bool operator ==(Compare o1){
            return (data == o1.data);
        }

        bool operator <(Compare o1){
            return (data < o1.data);
        }

        bool operator >(Compare o1){
            return (data > o1.data);
        }

        bool operator !=(Compare o1){
            return (data != o1.data);
        }

        bool operator >=(Compare o1){
            return (data >= o1.data);
        }

        bool operator <=(Compare o1){
            return (data <= o1.data);
        }

        void getData(){
            cout<< data;
        }
};

int main()
{
    Compare c1(4), c2(5);

    c1.getData();
    cout<< " == ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 == c2)<< endl;

    c1.getData();
    cout<< " < ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 < c2)<< endl;

    c1.getData();
    cout<< " > ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 > c2)<< endl;

    c1.getData();
    cout<< " != ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 != c2)<< endl;

    c1.getData();
    cout<< " >= ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 >= c2)<< endl;

    c1.getData();
    cout<< " <= ";
    c2.getData();
    cout<< ": ";
    cout<< (c1 <= c2)<< endl;

    return 0;
}