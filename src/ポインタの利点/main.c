#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
// 関数の引数にポインタとして変数を渡す利点は、引数全ての値をコピーせず
// 変数のアドレス一個を渡す事にある。
///////////////////////////////////////////////////////////////////


struct animal {
    int age;
    int weight;
};

// 引数に構造体変数を丸ごとコピー
void show_age_struct(struct animal a) {
    printf("age %d\n", a.age);
}

// ポインタ：アドレスコピーの方法
void show_age_ptr(struct animal *a) {
    printf("age %d\n", a->age);
}

int main(void) {
    struct animal a = {1, 2};

	// 構造体丸ごと
	show_age_struct(a);

	// 構造体のアドレスをコピー
	show_age_ptr(&a);

    return 0;
}

/*
	ポインタを使う事の利点
	➀コピーする数が少ない=コストを下げる
	➁コードの見やすい実装が出来る
*/