//Дана задача: “Выбрать все простые элементы из массива натуральных чисел не превосходящих k: A=[a1,... ,aN]”
#include <iostream>

using namespace std;

bool prime(int x){
    for( int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}

int main()
{   int n;
    int k;
    cin >> n;
    cin >> k;
    int* arr = new int[n];
    for(int i = 1; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        if(prime(arr[i]) && arr[i] <= k) cout << arr[i] << ' ';
    }

    return 0;
}
