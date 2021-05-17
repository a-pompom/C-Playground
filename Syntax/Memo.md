[参考](https://www.tutorialspoint.com/cprogramming/index.htm)

# 型・変数

### 1バイト

* char
* unsigned char

### 2バイト

* short
* unsigned short

### 2バイトor4バイト

* int
* unsigned int

### 4バイト

* long
* unsigned long

### 小数

* float(4バイト)
* double(8バイト)

### その他

* void


# 関数

関数は下記のように記述。

```c
return_type function_name(parameter_list) {
    body of the function
}
```


## 練習問題: fizz-buzz

<details>
<summary>コード</summary>

```C++
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
```
</details>

---

# 配列

`type arrayName[arraySize]`で定義。

<details>
<summary>サンプル</summary>

```C++
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
```

</details>

# ポインタ

## 練習問題: substring

## 練習問題: じゃんけん

## 練習問題: 線形探索

## TODO: splitをやりたい

# 構造体

# マクロ