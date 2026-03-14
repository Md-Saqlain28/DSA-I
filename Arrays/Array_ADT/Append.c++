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

void append(struct Array *a, int x){
    if (a->length < a->size)
    {
        a->A[a->length++] = x;
    }   
}

int main(){
    struct Array a = {{1,2,3,4,5},20,5}; 

    append(&a, 10);
    display(a);
    
    return 0;

}