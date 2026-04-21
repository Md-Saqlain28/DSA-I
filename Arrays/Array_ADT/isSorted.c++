#include<iostream>
using namespace std;    

struct Array{
    int A[10];
    int size;
    int length;
};

void IsSorted(struct Array a){
    int i;
    for ( i = 0; i < a.length-1; i++)
    {
        if(a.A[i] > a.A[i+1]){
            cout<<"Array is not sorted"<<endl;
            return;
        }
    }
    cout<<"Array is sorted"<<endl;
    
}

void display(struct Array a){
    int i;
    cout<<"Array elements are : "<<endl;
    for ( i = 0; i < a.length; i++)
    {
        cout<<a.A[i]<<endl;
    }
    
}
int main(){
    struct Array a = {{2,4,6,8,10},10,5};
    IsSorted(a);
    display(a);
    return 0;
}