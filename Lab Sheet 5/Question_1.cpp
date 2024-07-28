#include<iostream>
using namespace std;

class Point;

class Vector{
    public:
        float dx, dy;
    public:
        Vector(): dx(0), dy(0){}
        Vector(float dx, float dy): dx(dx), dy(dy){}
        friend class Point;
};

class Point{
    private:
        float x, y;
    public:
        Point(): x(0), y(0){}
        Point(float x, float y): x(x), y(y){}

        void add(const Vector& vec){
            x += vec.dx;
            y += vec.dy;
        }

        void subtract(const Vector& vec){
            x -= vec.dx;
            y -=vec.dy;
        }

        void multiply(const Vector& vec){
            x *= vec.dx;
            y *=vec.dy;
        }

        void divide(const Vector& vec){
            if(vec.dx!=0 && vec.dy!=0){
                x /= vec.dx;
                y /=vec.dy;
            }
            else
                cout<< "Division couldn't be done"<< endl;
        }

        void display(){
            cout<< "("<< x<< ","<< y<< ")"<< endl;
        }
};



int main()
{
    Point pt(4.0, 3.0);
    Vector vec(0.4, 0.3);

    cout<< "Initially: ";
    pt.display();

    pt.add(vec);
    cout<< "After adding: ";
    pt.display();

    pt.multiply(vec);
    cout<< "After multiplying: ";
    pt.display();

    pt.divide(vec);
    cout<< "After dividing: ";
    pt.display();

    pt.subtract(vec);
    cout<< "After subtracting: ";
    pt.display();

    return 0;
}