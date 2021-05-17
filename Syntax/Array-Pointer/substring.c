#include <stdio.h>

// substring関数を自作し、部分文字列を取得
// 配列を利用した文字列操作に慣れたい

/**
* 文字列の長さを取得

* @param text 対象文字列
* @return 文字列長
*/
size_t getStrLength(char text[]);
/**
* 部分文字列を設定

* @param text 対象文字列
* @param dest 部分文字列格納対象
* @param begin 取得開始位置
* @param length 取得長
*/
void substring(char text[], char dest[], int begin, int length);

int main() {
    
    char text[] = "apple banana";
    size_t subLength = getStrLength("apple");
    // NULLターミネータ用に1つ余分に確保
    char subText[subLength + 1];

    substring(text, subText, 0, subLength);

    printf("size: %ld\n", getStrLength(text));
    printf("substring: %s\n", subText);

    return 0;
}

size_t getStrLength(char text[]) {

    size_t length = 0;

    for (int i=0;;i++) {

        if (text[i] == '\0') {
            break;
        }
        length++;
    }
    return length;
}

void substring(char text[], char dest[], int begin, int length) {

    for (int i=begin; i < (begin + length); i++) {
        dest[i] = text[i];
    }
    dest[length] = '\0';
}