//Написать функцию удаляющую из целочисленного массива все четные элементы.
//Гарантируется, что в массиве есть хотя бы один нечетный элемент. 
//После исполнения такой функции массив должен уменьшить свой размер.
#include <iostream>

using namespace std;

int f(int n){
    int k = 0;
    int l = 0;
    int *A = new int[n];
    for( int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] % 2 != 0) k+=1;
    }
    int *temp = new int[k];
    for( int i = 0; i < n; i++){
        if(A[i] % 2 != 0){
            temp[l] = A[i];
            l++;
        }
    }
    delete A;
    for(int i = 0; i < l; i++){
        cout << temp[i] <<' ';
    }
    delete temp;
}

int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}
