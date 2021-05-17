#include <stdio.h>

// 配列を操作する関数の例

int* generateArray();
void printArray(int array[], int size);

int main() {

    int *array = generateArray();
    printArray(array, 10);
}

// 配列を返す関数
int* generateArray() {

    static int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    return array;
}

// 配列を引数にとる関数
void printArray(int array[], int size) {

    for (int i=0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}