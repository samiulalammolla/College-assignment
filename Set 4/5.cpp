#include<iostream>
using namespace std;
class complex{
    private :
    float real;
    float imaginary;
    public :
    void show(){
        cout<<"Complex No : "<<real<<" + "<<imaginary<<"i\n";
    }
    complex sum(complex a)
    {
        complex temp;
        temp.real=real+a.real;
        temp.imaginary=imaginary+a.imaginary;
        return temp;
    }
    complex(void)
    {
        real=0;
        imaginary=0;
    }
    complex(float r)
    {
        real=r;
        imaginary=0;
    }

    complex(float r,float i)
    {
        real=r;
        imaginary=i;
    }
};

int main(){
    complex c1(1,4),c2(3),c3;
    c1.show();
    c2.show();
    c3.show();
    c3=c1.sum(c2);
    c3.show();
    return 0;
}