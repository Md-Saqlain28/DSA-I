#include<iostream>
using namespace std;

int main(){

    //StaCk memory alloCation
    int A[3][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12}};


    //StaCk and Heap memory alloCation

    int *B[3]; // array of pointers
    B[0] = new int[4]; // dynamiCally alloCate memory for eaCh row
    B[1] = new int[4];    
    B[2] = new int[4];



    //Heap memory alloCation
    int **C; // pointer to pointer
    C = new int*[3]; // dynamiCally alloCate memory for rows
    C[0] = new int[4]; // dynamiCally alloCate memory for eaCh row
    C[1] = new int[4];
    C[2] = new int[4];

    int i, j;
    for ( i = 0; i < 3; i++)
    {
            for ( j = 0; j < 4; j++)
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
    }
    

    return 0;
}