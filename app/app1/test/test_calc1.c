#include "unity.h"
#include "calc1.h"
// モックに置き換えるライブラリをmock_XXX.hで宣言する。
#include "mock_libpackage.h"

// テスト実行前に実施することをここに記載する。
void setUp(void)
{
}

// テスト実行後に実施することをここに記載する。
void tearDown(void)
{
}

void test_addsub_1()
{
	// packageのaddのモックの動作を定義する。
	// 10,5を引数に取り15を返す。
	add_ExpectAndReturn(10, 5, 15);
	// packageのsubのモックの動作を定義する。
	// 10,5を引数に取り5を返す。
	sub_ExpectAndReturn(10, 5, 5);
	// テスト対象を実行する。
	int result = addsub(10, 5);
	// テスト結果を検証する。
	// テスト対象が返した値20ならOK。
	TEST_ASSERT_EQUAL_INT(20, result);
}

void test_subadd_1()
{
	add_ExpectAndReturn(10, 5, 15);
	sub_ExpectAndReturn(10, 5, 5);
	int result = subadd(10, 5);

	TEST_ASSERT_EQUAL_INT(10, result);
}
