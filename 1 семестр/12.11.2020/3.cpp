//Дана задача:”Найти количество подмассивов с суммой элементов не превосходящих k в массиве натуральных чисел A=[a1,... ,aN]”. 
//Напишите линейный алгоритм решения такой задачи.
#include <iostream>

using namespace std;

void find(int n, int k){
    int *A = new int[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int count = 0;
    int sum = 0;
    int j;
    for(int i = 0; i < n; i += j){
        j = i;
        while(A[j] + sum <= k && j < n){
            j++;
            sum += A[j];
            count += j - i + 1;
        }
    }
    cout << count - n;
}

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    find(n, k);
    return 0;
}
