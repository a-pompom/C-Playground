#include <stdio.h>

void printFizzBuzz(int num);

int main() {

    for (int i=0; i < 50; i++) {
        printFizzBuzz(i);
    }
    return 0;
}

// 与えられた数値からfizz-buzzを出力
void printFizzBuzz(int num) {

    if (num % 15 == 0) {
        printf("fizzbuzz!!\n");
        return;
    }

    if (num % 3 == 0) {
        printf("fizz\n");
        return;
    }

    if (num % 5 == 0) {
        printf("buzz\n");
        return;
    }

    printf("%d\n", num);
}