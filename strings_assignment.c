#ifndef Strings_Assignment
#define Strings_Assignment

#include <stdio.h>

size_t strlen(const char* s) {
    size_t count = 0;
    for (int i = 0; *(s+i) != '\n'; ++i) { ++count; }
    
    return count;
}

size_t strspn(const char* s, const char* t) {
    size_t count = 0;
    size_t temp = 0;
    for (int e = 0; e < strlen(s); ++e) {
        for(int i = 0; i < strlen(t); ++i) {
            if (*(s + e) == *(t + i)) {
                ++count;
                break;
            }
        }
        if (temp == count) { break; }
        else temp = count;
    }
    
    return count;
}

size_t strcspn(const char* s, const char* t) {
    size_t count = 0;
    size_t temp = 0;
    for (int e = 0; e < strlen(s); ++e) {
        for(int i = 0; i < strlen(t); ++i) {
            if (*(s + e) == *(t + i)) {
                ++temp;
                break;
            }
        }
        if (temp != 0) { break; }
        ++count;
    }
    
    return count;
}

char* strpbrk(const char* s, const char* t) {
    for (int e = 0; e < strlen(s); ++e) {
        for(int i = 0; i < strlen(t); ++i) {
            if (*(s + e) == *(t + i)) { return (s + e); }
        }
    }
    
    return NULL;
}

char* strstr(const char* s, const char* t) {
    int count = 0;
    for (int e = 0; e < strlen(s); ++e) {
        for(int i = 0; i < strlen(t); ++i) {
            if (*(s + e) == *(t + i)) { ++count; }
            if (count == strlen(t)) { return (s + e - count); }
        }
    }
    
    return NULL;
}

#endif
