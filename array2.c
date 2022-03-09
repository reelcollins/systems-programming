// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>



int main(int argc, char **argv) {sss
int i, j;
for(i = 0; i<argv; i++){
    printf("argument no.: %d", i);
    j = 0;
    while (argv[i][j]!= '\0')
    {printf("%c", argv[i][j]);
    j++;
    }
    printf("\n");
}

}
