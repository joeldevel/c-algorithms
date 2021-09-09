#include<stdio.h>

int linear_search(int arr[],int length, int element) {
    int i = 0;
    while (i < length) {
        if (arr[i] == element)
            return i;
        i = i + 1;
    }
    return -1;
}

int main() {
    int arr[] = { 1, 9, 5, 4, 7, 2 };

    if (linear_search(arr, 6, 40) > -1) {
        printf("element exists in array\n");
    } else {
        printf("element does not exists in array\n");
    }

    return 0;
}
