#include "unity.h"
#include "calc2.h"
#include "mock_libpackage.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_addsub_1(void)
{
	args_t args1;
	args1.a = 10;
	args1.b = 5;

	args_t args2;
	args2.a = 10;
	args2.b = 5;

	// packageのcreateArgsモックの動作を定義する。
	createArgs_ExpectAndReturn(10, 5, &args1);
	// packageのaddArgsモックの動作を定義する。
	addArgs_ExpectAndReturn(&args2, 15);
	// packageのsubArgsモックの動作を定義する。
	subArgs_ExpectAndReturn(&args2, 5);
	int result = addsub(10, 5);

	TEST_ASSERT_EQUAL_INT(20, result);
}

void test_subadd_1(void)
{
	args_t args1;
	args1.a = 10;
	args1.b = 5;

	args_t args2;
	args2.a = 10;
	args2.b = 5;

	// packageのcreateArgsモックの動作を定義する。
	createArgs_ExpectAndReturn(10, 5, &args1);
	// packageのaddArgsモックの動作を定義する。
	addArgs_ExpectAndReturn(&args2, 15);
	// packageのsubArgsモックの動作を定義する。
	subArgs_ExpectAndReturn(&args2, 5);
	int result = subadd(10, 5);

	TEST_ASSERT_EQUAL_INT(10, result);
}
