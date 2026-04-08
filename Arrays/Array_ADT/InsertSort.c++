#include<iostream>
using namespace std;    

struct Array{
    int A[10];
    int size;
    int length;
};

void InsertSort(struct Array *a, int key){
    int i = a->length-1;
    if(a->length==a->size){
        return;
    }
    while(i>=0 && a->A[i]>key){
        a->A[i+1] = a->A[i];
        i--;
    }
    a->A[i+1] = key;
    a->length++;
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
    InsertSort(&a, 5);

    display(a);
    return 0;
}
