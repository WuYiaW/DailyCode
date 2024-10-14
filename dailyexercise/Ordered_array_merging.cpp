#include <iostream>
using namespace std;

void move(int arr_1[], int arr_2[], int arr[] ,int n, int m)
{
    int p1 = 0;
    int p2 = 0;
    int p = 0;

    while ((p1 < n) && (p2 < m)) {
       if ((arr_1[p1] < arr_2[p2]))
        arr[p++] = arr_1[p1++];
    
       else
       {
        arr[p++] = arr_2[p2++];
       } 
    }


    if (p1 < n)
    {
        for (int i = p1; i < n; i++) {
            arr[p++] = arr_1[i];
        }
    } 
    else
    {
        for (int i = p2; i < m; i++) {
            arr[p++] = arr_2[i];
        }
    }
}


int main() {


    int n, m;
    cin >> n >> m;

    int arr_1[n];
    int arr_2[m];
    int arr[m + n];
    for (int i = 0; i < n; i++) {
        cin >> arr_1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr_2[i];
    }

    move(arr_1, arr_2, arr, n, m);

    for (int i = 0; i < m + n; i++) {
        cout << arr[i] << " ";
    }

    system("pause");
    return 0;

}
