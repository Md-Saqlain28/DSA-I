#include <iostream>
using namespace std;

//Creating an array in the stack.

struct Array
{
    int A[20]; 
    int size;
    int length;
};

void display(struct Array a){
    int i;
    cout<<"Array elements are : "<<endl;
    for ( i = 0; i < a.length; i++)
    {
        cout<<a.A[i]<<endl;
    }
    
}

int Get(struct Array a, int index){
    if(index >= 0 && index < a.length){
        return a.A[index];
    }
    return -1;
}

void Set(struct Array *a, int index, int x){
    if(index >= 0 && index < a->length){
        a->A[index] = x;    
    }

}

int main(){
    struct Array a = {{1,2,3,4,5},10,5}; 
    display(a);
    cout<<"Element at index 2 is: "<<Get(a, 2)<<endl;
    cout<<"Setting element at index 2 to 15."<<endl;
    Set(&a, 2, 15);
    display(a);

    return 0;

}