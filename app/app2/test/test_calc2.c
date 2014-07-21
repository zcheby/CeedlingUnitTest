#include "unity.h"
#include "calc2.h"
#include "mock_libpackage.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_module_generator_needs_to_be_implemented1(void)
{
	args_t tmp;

	tmp.a = 111;
	tmp.b = 5;
	createArgs_ExpectAndReturn(10, 5, &tmp);

	int result = calc2(10, 5);

	TEST_ASSERT_EQUAL_INT(116, result);
}

void test_module_generator_needs_to_be_implemented2(void)
{
	args_t tmp;

	tmp.a = 10;
	tmp.b = 5;

	addPointer_ExpectAndReturn(&tmp, 15);

	int result = calc3(10, 5);

	TEST_ASSERT_EQUAL_INT(15, result);
}
