#include<iostream>
#include<cstdio>
class circle{
    private:
    int radius;
    float ar;
    public:
    void add_data(){
        int r;
        printf("Enter the Radius :\n");
        scanf("%d",&r);
        radius=r;
    }
    void area(){
        ar=3.141*radius*radius;
    }
    void showdata(){
        printf("Area of a Circle is : %f\n",ar);
    }
};
int main(){
    system("cls");
    circle c;
    c.add_data();
    c.area();
    c.showdata();
    return 0;
}

