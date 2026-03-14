#include <iostream>
using namespace std;

//Creating an array in the Heap.

struct Array
{
    int *A; //1.to create array in the stack give the size here only A[20];
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

int main(){
    struct Array a;
    int n,i;
    cout<<"Enter the size of the Array : "<<endl; //2.no need to get the size
    cin>>a.size;
    a.A = new int[a.size]; //3.no need for memory allocation
    a.length = 0; //4.Directly give the array details a.A = {{1,2,3,4,5},20,5};

    cout<<"Enter the number of elements : "<<endl;
    cin>>n;

    cout<<"Enter the Array elements : "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a.A[i];
    }
    a.length = n;

    display(a);
    
    return 0;

}
