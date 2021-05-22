#include <stdio.h>

// 1からnまでの和を出力
int main() {

    char buff[256];
    int num;

    // 入力値読み取り
    printf("数値を入力してください。");
    fgets(buff, sizeof(buff), stdin);
    sscanf(buff, "%d", &num);

    // 和の算出
    int sum = 0;
    for (int i=1; i <= num; i++) {
        sum += i;
    }

    printf("sum: %d\n", sum);
}