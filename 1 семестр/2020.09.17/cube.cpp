//Написать программу находящую среднее арифметическое кубов последовательности чисел
#include <iostream>
#include <string>

using namespace std;

float function(int n){
    int S;
    S = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        S += x*x*x;
    }
    return (double)S/n;
}

int main(){
    int n;
    cin >> n;
    cout << function(n);
    return 0;
}