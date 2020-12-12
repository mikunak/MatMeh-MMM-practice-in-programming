//Реализовать решение задачи о рюкзаке в непрерывной формулировке
#include <iostream>

using namespace std;

void quicksort(int* arr3, int left, int right){
    int i = left;
    int j = right;
    int pivot = arr3[(i + j) / 2];
    while(i <= j){
        while(arr3[i] < pivot) i++;
        while(arr3[j] > pivot) j--;
        if(i <= j) {
            swap(arr3[i], arr3[j]);
            i++, j--;
        }
    }
    if(left < j){
        quicksort(arr3, left, j);
    }
    if(i < right){
        quicksort(arr3, i, right);
    }
}

int main(){
    int n, k;
    cin >> n;// êîëè÷åñòâî âåùåé
    cin >> k;// âìåñòèìîñòü ðþêçàêà
    int* arr = new int[n];
    int* arr2 = new int[n];
    int* arr3 = new int[n];
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];//ìàññà
        cin >> arr2[i];//ñòîèìîñòü
        arr3[i] = arr2[i]/arr[i];
        cout << ' ';
    }
    int wealth;
    wealth = 0;
    quicksort(arr3, 0, n - 1);
    for(int i = 0; i < n - 1; i++){
        if(k > arr3[i] * arr[i]){
            k -= arr[i];
            wealth += arr2[i];
        }
        else{
            wealth += k * arr3[i];
            break;
        }

    }
    cout << wealth;
    return 0;
}
