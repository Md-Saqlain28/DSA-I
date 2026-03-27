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

void SWAP(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void Reverse1(struct Array *a){
    int *B;
    int i, j;
    B = new int[a->length];
    for (i = a->length - 1, j = 0; i >= 0; i--, j++){
        B[j] = a->A[i];
    }
    for(i = 0; i < a->length; i++){
        a->A[i] = B[i];
    }
    delete[] B; // Don't forget to free the dynamically allocated memory

}

void Reverse2(struct Array *a){
    int i, j;
    for(i = 0, j = a->length - 1; i < j; i++, j--){
        SWAP(&a->A[i], &a->A[j]);
    } 
    cout<<"Array reversed using method 2"<<endl;
    
}

int main(){
    struct Array a = {{1,2,3,4,5},10,5}; 
    display(a);
    Reverse1(&a);
    display(a);
    Reverse2(&a);
    display(a);

    return 0;
}