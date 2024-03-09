#include <stdio.h>

void BubbleSort(int arr[], int n) {

    int Indeces[] = {0,0,0,0,0,0,0,0,0};

    int i, j, temp, t;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                Indeces[j]++;
                arr[j+1]=temp;
                Indeces[j+1]++;

                t = Indeces[j];
                Indeces[j] = Indeces[j+1];
                Indeces[j+1] = t;
            }
        }
    }
    for(int k = 0 ; k < n ; k++)
        printf("Swaps for %d = %d\n", arr[k], Indeces[k]);

    int total = 0;
    for (int m = 0 ; m < n ; m++){
        total = total + Indeces[m];
    }
    printf("Total swaps = %d", total/2);
}

void SelectionSort(int arr[], int n) {

    int Indeces[] = {0,0,0,0,0,0,0,0,0};

    int i, j, min, temp, t;
   
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        
        if (i != min){
            temp = arr[i];
            arr[i] = arr[min];
            Indeces[i]++;
            arr[min] = temp;
            Indeces[min]++;

            t = Indeces[i];
            Indeces[i] = Indeces[min];
            Indeces[min] = t;
        }
    }

    for(int k = 0 ; k < n ; k++)
        printf("Swaps for %d = %d\n", arr[k], Indeces[k]);

    int total = 0;
    for (int m = 0 ; m < n ; m++){
        total = total + Indeces[m];
    }
    printf("Total swaps = %d", total/2);
}

void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}


void main() {
    int Bubble_1 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int Bubble_2 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int Selection_1 [] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int Selection_2 [] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int size = 9;   //size for both arrays is the same

    // Sorting Arrays using Bubble Sort:
    printf("Swaps for first Array using Bubble Sort:\n");
    BubbleSort(Bubble_1, size);

    printf("\n\n");

    printf("Swaps for second Array using Bubble Sort:\n");
    BubbleSort(Bubble_2, size);

    printf("\n\n");

    // Sorting Arrays using Selection Sort:
    printf("Swaps for first Array using Selection Sort:\n");
    SelectionSort(Selection_1, size);

    printf("\n\n");

    printf("Swaps for second Array using Selection Sort:\n");
    SelectionSort(Selection_2, size);
}