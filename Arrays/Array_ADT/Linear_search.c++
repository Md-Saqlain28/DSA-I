#include<iostream>
using namespace std;    

struct Array{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *a, int key){
    int i;
    for(i=0; i<a->length; i++){
        if(key==a->A[i]){
            //TRANSPOSITION.....
            swap(&a->A[i], &a->A[i-1]);
            //  MOVE TO HEAD.....
            swap(&a->A[i], &a->A[0]);
            return i;
        }
    }
    return -1;
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
    cout<<LinearSearch(&a, 6)<<endl;

    display(a);
    return 0;
}
