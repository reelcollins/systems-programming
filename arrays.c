// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int length;
    char s[6];
    s[0] = 'T'; s[1] = 'O'; s[2] = 'M'; s[3] = '\0';
    length = 0;
    while (s[length] != 0)
    length ++;
    //length = strlen(s);
    printf(length);

}
