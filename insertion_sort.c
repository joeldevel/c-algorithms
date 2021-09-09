#include<stdio.h>

void insertion_sort(int arr[], int length);
//void insertion_sort_desc(int arr[], int length);
void show_array(int arr[], int length);

int main() {
  int arr[] = { 1, 9, 5, 4, 7, 2 };
  show_array(arr, 6);
  insertion_sort(arr, 6);
  printf("------sorted----\n");
  show_array(arr, 6);

  return 0;
}

void insertion_sort(int arr[], int length) {
    for (int j = 1; j < length; j++) {
        int key = arr[j];
        int i = j - 1;
        while (i > 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i -1;
        }
        arr[i + 1] = key;
    }
}

void show_array(int arr[], int length) {
    printf("[ ");
    for (int i = 0; i < length-1 ; i++)
        printf("%d, ", arr[i]);
    printf("%d", arr[length-1]);
    printf(" ]\n");
}

/*
void insertion_sort_desc(int arr[], int length) {
    for (int j = length-2; j >= 0; j--) {
        int key = arr[j];
        int i = j - 1; // i es el anterior a j
        while (i > 0 && arr[i] < key) {
            //printf("arr[i]<key\n");
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
}
*/
