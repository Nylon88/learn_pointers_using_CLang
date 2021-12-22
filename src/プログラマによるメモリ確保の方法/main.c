#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 意図的なメモリ要求と解放
int main() {
	// 文字の入力を受ける
	char *s;
	scanf("%s", s);

	// メモリを要求する　mallocの引数には欲しい容量をバイトで記載する
	// 戻り値はアドレスの先頭(ポインタ変数で受け取る)　＋mallocで貰ったメモリは要求時は型がない為、ポインタの型で決めてあげる必要がある。
	char *t = malloc(strlen(s) + 1);

	// nullだったらプログラムを終了
	if ( t == NULL) {
		return 1;
	}

	// 要求したメモリに入力した文字をコピーする
	strcpy(t, s);

	// コピー出来たかどうかを初めの文字を大文字にする事で検証する
	t[0] = toupper(t[0]);

	printf("s: %s\n", s);
	printf("s: %s\n", t);

	free(t);
}