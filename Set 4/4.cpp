#include<iostream>
using namespace std;
class temp{
    private :
    int n;
    public :
    void addsize(void){
        cout<<"Enter the No. of Rows :"<<endl;
        cin>>n;
    }
    void pattern(void){
        for(int i=0;i<n;i++){
            for(int j=0;j<2*n-1;j++){
                if(j>=i && j<2*n-1-i)
                  cout<<"*";
                else
                 cout<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    temp a;
    a.addsize();
    a.pattern();
}