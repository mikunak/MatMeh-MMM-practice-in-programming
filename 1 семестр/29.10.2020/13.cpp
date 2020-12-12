//Написать программу, находящую наибольшую возрастающую подпоследовательность элементов идущих в массиве подряд.

#include <iostream>

using namespace std;

int search(int n){
    int *A = new int[n];
    for(int i = 0; i < n; i++)
    cin >> A[i];
    int j;
    int count;
    int ma;
    int mi;
    ma = 0;
    for(int i = 0; i < n; i += j){
        j = i;
        count = 0;
        
        while(A[j + 1] > A[j]){
            j++;
            count++;
            
        }
        if( count > ma){
            ma = count;
            mi = i;
        }
    }
    for(int i = mi; i < ma + mi + 1; i++){
        cout << A[i] << ' ';
    }
}

int main()
{
    int n;
    cin >> n;
    search(n);

    return 0;
}
