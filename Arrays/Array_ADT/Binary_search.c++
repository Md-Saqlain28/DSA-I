#include <iostream>
using namespace std;

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

// Binary Search function for sorted array using iterative method....
int BinarySearch(struct Array a, int key){
    int l,mid,h;
    l = 0;
    h = a.length - 1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == a.A[mid]){
            return mid;
        }
        else if(key<a.A[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

// Binary Search function for sorted array using recursive method....
int RBinarySearch(struct Array a, int l, int h, int key){
    int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(key == a.A[mid]){
            return mid;
        }
        else if(key<a.A[mid]){
            return RBinarySearch(a, l, mid-1, key);
        }
        else{
            return RBinarySearch(a, mid+1, h, key);
        }
    }
    return -1;

}

int main(){
    struct Array a = {{1,2,3,4,5},10,5}; 

    int iIndex = BinarySearch(a, 4);
    int rIndex = RBinarySearch(a, 0, a.length - 1, 4);
    cout << "Element found at index (iterative): " << iIndex << endl;
    cout << "Element found at index (recursive): " << rIndex << endl;
    display(a);
    
    return 0;
}