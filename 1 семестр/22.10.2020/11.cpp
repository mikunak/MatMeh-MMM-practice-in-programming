//Написать функцию эффективного поиска k-ой порядковой статистики

#include <iostream>
using namespace std;

int quicksort(int* arr, int low, int high, int k) {
	int i = low, j = high;
	int x = arr[(low + high) / 2];
	while (i <= j) {
		while (arr[i] < x) {
			i++;
		}
		while (arr[j] > x) {
			j--;
		}
		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	if (low <= k && k <= j) {
	      return quicksort(arr, low, j, k);
    }
	if (i <= k && k <= high) {
		return quicksort(arr, i, high, k);
	}
	return arr[k];
}

int main()
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int answer;
	answer = quicksort(arr, 0, n-1, k-1);
	delete arr;
	cout << answer;
	return 0;
}
