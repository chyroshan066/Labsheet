#include<iostream>
using namespace std;

class Point{
    private:
        int x, y, z;
    public:
        Point(): x(0), y(0), z(0){}
        Point(int a, int b, int c): x(a), y(b), z(c){}
        friend Point operator +(Point, Point);
        friend Point operator -(Point, Point);
        void display(){
            cout<< "("<< x<< ","<< y<< ","<< z<< ")";
        }
};

Point operator +(Point o1, Point o2){
    int tempX = o1.x + o2.x;
    int tempY = o1.y + o2.y;
    int tempZ = o1.z + o2.z;
    return Point(tempX, tempY, tempZ);
}

Point operator -(Point o1, Point o2){
    int tempX = o1.x - o2.x;
    int tempY = o1.y - o2.y;
    int tempZ = o1.z - o2.z;
    return Point(tempX, tempY, tempZ);
}

int main()
{
    Point p1(1, 3, 5), p2(2, 4, 6), p3, p4;

    p3 = p1 + p2;
    p1.display();
    cout<< " + ";
    p2.display();
    cout<< " = ";
    p3.display();
    cout<< endl;

    p4 = p1 - p2;
    p1.display();
    cout<< " - ";
    p2.display();
    cout<< " = ";
    p4.display();
    cout<< endl;

    return 0;
}