#include "pch.h"
#include "CppUnitTest.h"
#include "../cpp_string_2/main.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Strunittest
{
	TEST_CLASS(Strunittest)
	{
	public:
		
		TEST_METHOD(TestMyStrLen)
		{
			char input_param[] = "Hello, world!";
			int expected_result = 13;
			int actual_result = my_strlen(input_param);
			Assert::AreEqual(expected_result, actual_result);


		}

		TEST_METHOD(TestMyStrcpy)
		{
			char input_param_1[] = "Hello ";
			char input_param_2[] = "world";
			const char* expected_result = "world";
			const char* actual_result = mystrcpy(input_param_1, input_param_2);

			Assert::AreEqual(0, strcmp(expected_result, actual_result));
		}

		TEST_METHOD(TestMyStrcat)
		{
			char input_param_1[20] = "Hello";
			char input_param_2[] = " world!";
			const char* expected_result = "Hello world!";
			const char* actual_result = mystrcat(input_param_1, input_param_2);

			Assert::AreEqual(0, strcmp(expected_result, actual_result));
		}

		TEST_METHOD(TestMyStrchr)
		{
			char input_param[] = "Hello world!";
			char search_char = 'w';
			char* expected_result = &input_param[6]; // Pointer to 'w' in "Hello world!"
			char* actual_result = mystrchr(input_param, search_char);

			Assert::AreEqual(expected_result, actual_result);
		}

		TEST_METHOD(TestMyStrstr)
		{
			char input_param_1[] = "Hello world!";
			char input_param_2[] = "world";
			char* expected_result = &input_param_1[6]; // Pointer to 'w' in "Hello world!"
			char* actual_result = mystrstr(input_param_1, input_param_2);

			Assert::AreEqual(expected_result, actual_result);
		}

	};
}
