#include <iostream>
#include <cstring>
using namespace std;

int wordCount(char str[]) {
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}
