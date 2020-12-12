//Написать функцию записывающую в переданный массив все составные числа меньшие N.
//Решето Эратосфена можно считать эффективным алгоритмом.

#include <iostream>

using namespace std;


int main()
{   
    int n;
    cin >> n;
    int *A = new int[n + 1];
    for( int i = 1; i < n + 1; i++){
        A[i] = 0;
    }
    for( int i = 2; i < n + 1; i++){
        if (A[i] == 0)
            for( int k = i * i; k < n + 1; k+=i){
                A[k] = 1;
            }
    }
    for(int i = 0; i < n + 1; i++){
        if (A[i] == 1)
            cout << i <<' '; 
    }

    return 0;
}
