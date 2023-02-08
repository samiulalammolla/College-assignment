#include<iostream>
using namespace std;
inline float square(float x){
    return x*x;
}
int main(){
    float x,y;
    cout<<"Enter the number :\n";
    cin>>x;
    y=square(x);
    cout<<"The Square is : "<<y<<endl;
    return 0;
}