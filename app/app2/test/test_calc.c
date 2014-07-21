#include "unity.h"
#include "calc.h"
#include "mock_libpackage.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_module_generator_needs_to_be_implemented(void)
{
	add_ExpectAndReturn(10, 5, 14);
	sub_ExpectAndReturn(10, 5, 5);

	int result = calc(10, 5);

	TEST_ASSERT_EQUAL_INT(19, result);
}
