#include<iostream>
using namespace std;    

struct Array{
    int A[10];
    int size;
    int length;
};

struct Array* Merge(struct Array *a1, struct Array *a2){
    int i, j, k;
    i = j = k = 0;
    struct Array *a = new struct Array;

    while(i < a1->length && j < a2->length){
        if(a1->A[i] < a2->A[j]){
            a->A[k++] = a1->A[i++];
        }
        else{
            a->A[k++] = a2->A[j++];
        }
    }
    for( ; i<a1->length; i++){
        a->A[k++] = a1->A[i];
    }
    for( ; j<a2->length; j++){
        a->A[k++] = a2->A[j];
    }

    a->length = a1->length + a2->length;
    a->size = 10;

    return a;
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
    struct Array a1 = {{2,4,6,8,10},10,5};
    struct Array a2 = {{1,3,5,7,9},10,5};
    struct Array *a;

    a = Merge(&a1, &a2);

    display(a1);
    display(a2);
    display(*a);
    return 0;
}