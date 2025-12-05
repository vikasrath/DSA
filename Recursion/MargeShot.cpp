#include <iostream>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < n1) arr[k++] = arr1[i++];
    while (j < n2) arr[k++] = arr2[j++];
}

void mergeSort(int arr[], int n) {
    if (n <= 1) return; // Base case

    int l1 = n / 2;
    int l2 = n - l1;

    int arr1[l1], arr2[l2];

    for (int i = 0; i < l1; i++) arr1[i] = arr[i];
    for (int i = 0; i < l2; i++) arr2[i] = arr[l1 + i];

    mergeSort(arr1, l1);
    mergeSort(arr2, l2);

    merge(arr1, l1, arr2, l2, arr);
}

int main() {
    int arr[] = {10, -208, 30, 55, 50, -60};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
