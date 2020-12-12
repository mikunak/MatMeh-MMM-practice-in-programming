//Реализовать быстрое(бинарное возведение) в целую степень
#include <iostream>
using namespace std;

int bin (int n, int k) {
	if (n == 0)
		return 1;
	if (k % 2 == 1)
		return bin(n, k-1) * n;
	else {
		int s = bin(n, k/2);
		return s * s;
	}
}

int main(){
    
    int n;
    int k;
    cin >> n >> k;
    cout << bin(n, k);
    
    return 0;
}
