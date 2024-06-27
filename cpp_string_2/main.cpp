#include <iostream>
using namespace std;

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

void toLower(char& c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}

void toUpper(char& c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}




int main() {
    return 0;
}