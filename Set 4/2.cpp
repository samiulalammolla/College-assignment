#include<iostream>
using namespace std;
class traingle{
    float height;
    float base;
    float ta,tb,tc;
    float ar;
    float pr;
    public:
    void add_data(void){
        float h;float bs;float a;float b;float c;
        cout<<"\nEnter the Height of traingle :";
        cin>>h;
        cout<<"\nEnter the Base of traingle :";
        cin>>bs;
        cout<<"\nEnter the Sides of traingle a,b and c :";
        cin>>a>>b>>c;
        height=h;
        base=bs;
        ta=a;
        tb=b;
        tc=c;
    }
    void show_data(void){
        cout<<"\nHeight of traingle :"<<height<<"\nBase of Traingle :"<<base<<"\nArea of Traingle :"<<ar<<"\nPerimeter of Traingle :"<<pr<<endl;
    }
    void area(void);
    void perimeter(void);
};
void traingle ::area(void){
    ar=(height*base)/2;
}
void traingle ::perimeter(void){
    pr=ta+tb+tc;
}
int main(){
    system("cls");
    traingle t;
    t.add_data();
    t.area();
    t.perimeter();
    t.show_data();
    return 0;
}