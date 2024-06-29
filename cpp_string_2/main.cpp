#include <iostream>
using namespace std;

//lab

int my_strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* mystrcpy(char* str1, const char* str2) {
    int i = 0;
    for (; str2[i] != '\0';)
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    return str1;
}

char* mystrcat(char* str1, const char* str2) {
    int i = 0;

    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    return str1;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return 0;
}

char* mystrstr(char* str1, char* str2) {
    if (*str2 == '\0') {
        return str1; // If str2 is empty, return str1
    }

    for (char* p = str1; *p != '\0'; p++) {
        char* p1 = p;
        char* p2 = str2;

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return p; // Found the substring
        }
    }

    return 0; // Substring not found
}

//hw

int mystrcmp(const char* str1, const char* str2) {
    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        sum_1 += int(str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        sum_2 += int(str2[i]);
    }

    if (sum_1 > sum_2) {
        return 1;
    }
    else if (sum_1 < sum_2) {
        return -1;
    }
    else {
        return 0;
    }  
}

int StringToNumber(char* str) {
    int number_from_str = 0;
    bool is_neg = false;
    int j = 0;
    while (str[j] != '\0') {
        j++;
    }
    if (j > 10) {//digits more than int include
        return 0;
    }

    int i = 0;
    if (str[0] == '-') {
        is_neg = true;
        i++;//i = 1
    }

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 0; // Return 0 if a non-digit character is found
        }
        number_from_str = number_from_str * 10 + (str[i] - '0');
        i++;
    }


    if (is_neg) {
        number_from_str *= -1; //number_from_str = -number_from_str
    }

    return number_from_str;
}

char* NumberToString(int number) {
    bool is_neg = (number < 0);
    if (is_neg) {
        number = -number;
    }

    int num_copy = number;
    int digit_count = 0;
    do {
        num_copy /= 10;
        digit_count++;
    } while (num_copy > 0);

    int total_length = digit_count + (is_neg ? 1 : 0);
    char* str = new char[total_length + 1]; // +1 for null terminator

    int index = 0;
    if (is_neg) {
        str[index++] = '-';
    }

    for (int i = digit_count - 1; i >= 0; i--) {
        str[index + i] = (number % 10) + '0';
        number /= 10;
    }

    str[total_length] = '\0'; // Null terminator

    return str;
}

char* Lowercase(char* str1) {
    int length = 0;
    while (str1[length] != '\0')
    {
        length++;
    }
    char* lower_str = new char[length + 1]; // +1 for null terminator

    for (int i = 0; i < length; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            lower_str[i] = str1[i] + 32;
        }
        else {
            lower_str[i] = str1[i];
        }
    }
    lower_str[length] = '\0'; // Add null terminator

    return lower_str;
}

char* Uppercase(char* str1) {
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }
    char* upper_str = new char[length + 1]; // +1 for null terminator

    for (int i = 0; i < length; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            upper_str[i] = str1[i] - 32;
        }
        else {
            upper_str[i] = str1[i];
        }
    }
    upper_str[length] = '\0'; // Add null terminator

    return upper_str;
}



char* mystrrev(char* str) {
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    char* str_2 = new char[length + 1]; // +1 for null terminator

    for (int i = 0; i < length; i++) {
        str_2[i] = str[length - 1 - i];
    }
    str_2[length] = '\0'; // add null terminator

    return str_2;
}


int main() {
    return 0;
}