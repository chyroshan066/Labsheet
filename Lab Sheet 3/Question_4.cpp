#include<iostream>
#include<cmath>
#define PI 3.1412

using namespace std;

class circle{
    private:
        float r;
    public:
        void getData(float rad){
            r = rad;
        }
        float perimeter(){
            return (2*PI*r);
        }
        float area(){
            return (PI*pow(r, 2));
        }
        void display(){
            cout<< "The perimeter of circle is "<< perimeter()<< "and the area is "<< area()<< endl;
        }
};

class rectangle{
    private:
        int l;
        int b;
    public:
        void getData(int length, int breadth){
            l = length;
            b = breadth;
        }
        int perimeter(){
            return (2*(l+b));
        }
        int area(){
            return (l*b);
        }
        void display(){
            cout<< "The perimeter of rectangle is "<< perimeter()<< "and the area is "<< area()<< endl;
        }
};

class triangle{
    private:
        int a;
        int b;
        int c;
    public:
        void getData(int s1, int s2, int s3){
            a = s1;
            b = s2;
            c = s3;
        }
        int perimeter(){
            return (a + b + c);
        }
        float area(){
            float s = (static_cast<float>(a) + b + c) / 2;
            return (pow((s * (s-a) * (s-b) * (s-c)), 0.5));
        }
        void display(){
            cout<< "The perimeter of triangle is "<< perimeter()<< "and the area is "<< area()<< endl;
        }
};

int main(){
    circle c;
    c.getData(7);
    c.area();
    c.perimeter();
    c.display();
    rectangle r;
    r.getData(6, 4);
    r.area();
    r.perimeter();
    r.display();
    triangle t;
    t.getData(4, 5, 6);
    t.area();
    t.perimeter();
    t.display();
    return 0;
}