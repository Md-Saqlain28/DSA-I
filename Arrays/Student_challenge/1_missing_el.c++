//Finding a single missing element
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10,11,12};

    int sum = 0;
    int n = 12;
    for (int i = 0; i < 11; i++)
    {
        sum = sum + arr[i];
    }

    int S = (n*(n+1))/2;

    cout<< "missing element is : "<< S-sum <<endl;
    



}