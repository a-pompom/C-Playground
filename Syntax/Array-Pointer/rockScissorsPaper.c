#include <stdio.h>
#include <string.h>

// じゃんけんプログラム
// rock/scissors/paperのいずれかを入力として受け付け、ENDが入力されるまで続行
// ランダム関数で都度勝敗を判定

void replaceChar(char input[], char output[], char source, char dest);
void replaceCharToEmpty(char input[], char output[], char source);

int main() {

    // fgetsを試す
    char buff[1024];
    fgets(buff, sizeof(buff), stdin);

    // rockと等しいか
    char input[1024];
    replaceCharToEmpty(buff, input, '\n');
    printf("%s\n", input);
    printf("%d\n", strcmp("rock", input));
    // TODO replace関数を作成
    // 正規表現のように、先頭から文字列を走査 パターンに合致したらバッファへ蓄積し、完全に一致したら置き換え
    // text, result, source, destを受け取る感じになるか
}

void replaceChar(char input[], char output[], char source, char dest) {

    for (int i=0;;i++) {

        if (input[i] == '\0') {
            output[i] = input[i];
            return;
        }

        if (input[i] == source) {
            output[i] = dest;
            continue;
        }

        output[i] = input[i];
    }
}
void replaceCharToEmpty(char input[], char output[], char source) {

    int j=0;
    for (int i=0;; i++) {

        if (input[i] == '\0') {
            output[j] = input[i];
            return;
        }

        if (input[i] == source) {
            continue;
        }
        output[j] = input[i];
        j++;
    }
}