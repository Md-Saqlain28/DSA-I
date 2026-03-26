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

int MAX(struct Array a){
    int max = a.A[0];
    for (int i = 0; i < a.length; i++)
    {
        if(a.A[i] > max){
            max = a.A[i];
        }
    }
    return max;
}

int MIN(struct Array a){
    int min = a.A[0];
    for (int i = 0; i < a.length; i++)
    {
        if(a.A[i] < min){
            min = a.A[i];
        }
    }
    return min;
}

int main(){
    struct Array a = {{1,2,3,4,5},10,5}; 
    display(a);
    cout<<"Maximum element is: "<<MAX(a)<<endl;
    cout<<"Minimum element is: "<<MIN(a)<<endl;
    
    return 0;

}