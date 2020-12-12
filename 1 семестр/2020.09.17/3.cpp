//Написать программу вычисляющую биномиальный коэффициент из n по k. Подумать об эффективности реализации;
#include <iostream>
#include <string>

using namespace std;
int S = 1;
int M = 1;

unsigned long long int binomup(int a, int b){
    for(int i = b + 1; i <= a; i++){
        S *= i;
    }
    return(S);
}

unsigned long long int binomdown(int a, int b){
    for(int i = 2; i <= a - b; i++){
        M *= i;
    }
    return(M);
}

int main() 
{
    int n, k;
    long long int c;
    cin >> n;
    cin >> k;
    int S = binomup(n, k);
    int M = binomdown(n , k);
    c = S / M;
    cout << c;

    return 0;
}
