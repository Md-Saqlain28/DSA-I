#include<iostream>
using namespace std;    

struct Array{
    int A[10];
    int size;
    int length;
};

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Rearrange(struct Array *a){
    int i,j;
    i = 0;
    j = a->length-1;
    while(i<j){
        while(a->A[i] < 0) i++;
        while(a->A[j] >= 0) j--;
        if(i<j){
            swap(a->A[i], a->A[j]);
        }

    }
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
    struct Array a = {{2,4,6,-8,-10},10,5};
    Rearrange(&a);
    display(a);
    return 0;
}