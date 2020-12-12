//Даны два слова на алфавите {A,C,G,T}. 
//Найти минимальное количество операций добавления, удаления и замены буквы необходимые для приведения слова A к B.
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   string string1;
    string string2;
    int len1;
    int len2;
    cin >> string1;
    cin >> string2;
    len1 = (int) string1.length();
    len2 = (int) string2.length();
    int arr[len2][len2];
    for(int i = 0; i < len2; i++){
        arr[0][i] = i;
    }
    for(int j = 0; j < len1; j++){
        arr[j][0] = j;
    }
    for(int i = 1; i < len1; i++){
        for(int j = 1; j < len2; j++){
            arr[i][j] = min(min(arr[i - 1][j] + 1, arr[i][j - 1] + 1), arr[i - 1][j - 1] + 1 * (string1[i] != string2[j]));

        }
    }
    cout << arr[len1 - 1][len2 - 1];
    return 0;
}
