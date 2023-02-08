#include<iostream>
#include<cstdio>
using namespace std;
class Number_List{
    int *arr;
    int size;
    public:
    void create_array(void){
        cout<<"Enter the size of Array :\n";
        cin>>size;
        arr= new int [size]; 
        cout<<"Enter the elements of array :\n";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void shrt(void){
        for(int i=0;i<size;i++){
            int x = i,min=arr[i];
            for(int j=i+1;j<size;j++){
                if(min>arr[j]){
                    min=arr[j];
                    x=j;
                }
            }
            swap(arr[i],arr[x]);
        }
    }
    void showdata(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void max_min(){
        cout<<"\nMin : "<<arr[0]<<"\nMax : "<<arr[size-1]<<endl;
    }

};
int main(){
    Number_List l;
    l.create_array();
    l.shrt();
    l.showdata();
    l.max_min();
    return 0;
}