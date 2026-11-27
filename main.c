#include <stdio.h>

int main(void)
{
    // 入力された整数を保存する変数
    int input_value;

    scanf("%d", &input_value);

    // 0以上10未満、または12以上15未満ならOK
    if ((input_value >= 0 && input_value < 10) ||
        (input_value >= 12 && input_value < 15))
    {
        printf("OK");
    }
    else
    {
        // 条件に当てはまらない場合はNG
        printf("NG");
    }

    return 0;
}

