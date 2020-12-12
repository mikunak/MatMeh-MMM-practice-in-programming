//Написать программу, выписывающую первые N простых чисел.
//Решето Эратосфена можно считать эффективным алгоритмом. Оценить сложность решения.
//O(n*n^1/2)
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
{   
    int n;
    cin >> n;
    int cnt = 0;
    int x = 2;
    while(cnt < n){
        if (prime(x)){
            cout << x << ' ';
            cnt++;
        }
        x++;
    }

    return 0;
}
