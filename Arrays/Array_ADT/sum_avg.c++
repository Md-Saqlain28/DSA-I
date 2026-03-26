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

int SUM(struct Array a){
    int sum = 0;
    for(int i = 0; i < a.length; i++){
        sum += a.A[i];
    }
    return sum;
}

float AVERAGE(struct Array a){
    float avg = (float)SUM(a) / a.length;
    return avg;
}

int main(){
    struct Array a = {{1,2,3,4,5},10,5}; 
    display(a);
    cout<<"Sum of elements is: "<<SUM(a)<<endl;
    cout<<"Average of elements is: "<<AVERAGE(a)<<endl;
    return 0;

}