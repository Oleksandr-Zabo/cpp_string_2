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

		TEST_METHOD(TestMyStrcmp)
		{
			// Test case 1: str1 is greater than str2
			char str1[] = "Hello";
			char str2[] = "hello";
			int expected_result = -1; // 'H' < 'W'
			int actual_result = mystrcmp(str1, str2);
			Assert::AreEqual(expected_result, actual_result);

			// Test case 2: str1 is less than str2
			char str3[] = "hello";
			char str4[] = "Hello";
			expected_result = 1; // 'W' > 'H'
			actual_result = mystrcmp(str3, str4);
			Assert::AreEqual(expected_result, actual_result);

			// Test case 3: str1 is equal to str2
			char str5[] = "Hello";
			char str6[] = "Hello";
			expected_result = 0; // 'Hello' == 'Hello'
			actual_result = mystrcmp(str5, str6);
			Assert::AreEqual(expected_result, actual_result);
		}

		TEST_METHOD(TestStringToNumber)
		{
			char str1[] = "-12345";
			int expected_result = -12345;
			int actual_result = StringToNumber(str1);
			Assert::AreEqual(expected_result, actual_result);
		}

		TEST_METHOD(TestNumberToString)
		{
			int number1 = -12345;
			char expected_result1[] = "-12345";
			char* actual_result1 = NumberToString(number1);
			Assert::AreEqual(0, strcmp(expected_result1, actual_result1));
			delete[] actual_result1;
		}

		TEST_METHOD(TestMyStrrev)
		{
			char str1[] = "Hello,";
			char expected_result1[] = ",olleH";
			char* actual_result1 = mystrrev(str1);
			Assert::AreEqual(0, strcmp(expected_result1, actual_result1));
			delete[] actual_result1;
		}

		TEST_METHOD(TestUppercase)
		{
			char str1[] = "Hello,";
			char expected_result1[] = "HELLO,";
			char* actual_result1 = Uppercase(str1);
			Assert::AreEqual(0, strcmp(expected_result1, actual_result1));
			delete[] actual_result1;
		}

		TEST_METHOD(TestLowercase)
		{
			char str1[] = "HeLLo,";	
			char expected_result1[] = "hello,";
			char* actual_result1 = Lowercase(str1);
			Assert::AreEqual(0, strcmp(expected_result1, actual_result1));
			delete[] actual_result1;
		}

	};
}
