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

void insert(struct Array *a, int index, int x){
    if (index >= 0 && index <= a->length)
    {
        for (int i = a->length; i > index; i--)
        {
            a->A[i] = a->A[i-1];
        }
        a->A[index] = x;
        a->length++;
    }
}

int Delete(struct Array *a, int index){
    int x=0;
    int i;
    if(index>=0 && index<a->length){
        x = a->A[index];
        for ( i = index; i < a->length-1; i++)
        {
            a->A[i] = a->A[i+1];
        }
        a->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array a = {{1,2,3,4,5,6,7,8},10,8}; 

    int deletedElement = Delete(&a, 0);
    cout << "Deleted element: " << deletedElement << endl;
    display(a);
    
    return 0;

}