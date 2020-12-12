//Дана аудитория и k человек желающих читать в ней в лекции.
//Каждый человек указывает время лекции со времени a_i до b_i.
//Организовать расписание, при котором наибольшее количество занятий будет проведено.

#include <iostream>
using namespace std;

void quicksort(int* arr, int* arr2, int low, int high) {
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
			swap(arr2[i], arr2[j]);
			i++;
			j--;
		}
	}
	if (low <= j) {
	      return quicksort(arr,arr2, low, j);
    }
	if (i <= high) {
		return quicksort(arr, arr2, i, high);
	}
}

int main()
{
	int n;
	int k;
	cin >> n;
	int* arr = new int[n];//начало лекции
	int* arr2 = new int[n];//конец лекции
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		cin >> arr2[i];
		cout << ' ';
	}
	int count = 0;
	int lasttime = 0;
	quicksort(arr2, arr, 0, n - 1);
	for(int i = 0; i < n; i++){
        if(lasttime <= arr[i]){
            count += 1;
            lasttime = arr2[i];
        }
	}
	cout << count;
	return 0;
}
