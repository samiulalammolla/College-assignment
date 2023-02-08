#include<iostream>
using namespace std;
class leap{
    private:
     int year;
    public:
    leap(int y){
        year=y;
    }
     ~leap(){
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    cout<<year<<" is a leap year\n";
                }
                else
                   cout<<year<<" is not a leap year\n";
            }
            else
              cout<<year<<" is a leap year\n";
        }
        else
          cout<<year<<" is not a leap year\n";
     }

};
int main(){
    int y;
    cout<<"Enter a Year\n";
    cin>>y;
    leap temp(y);
    return 0;
}