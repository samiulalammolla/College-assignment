#include<iostream>
#include<string>
using namespace std;
class String{
    string s;
    public:
    void display(void){
        cout<<s<<endl;
    }
    
    void addstring(String a,String b){
        s=a.s+b.s;
    }
    String(void){
        cout<<"Enter a string :\n";
        cin>>s;
    }
    String(string temp){
        s=temp;
    }
};
int main(){
    String s1,s2,s3("");
    s3.addstring(s1,s2);
    s3.display();
    return 0;
}