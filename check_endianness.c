

#include <stdio.h>


int main() {
 int num = 1;
    char *c = (char *)&num;
    
    if ((int)*c == 1) {
        printf("Your system is Little-Endian.\n");
    } else {
        printf("Your system is Big-Endian.\n");
    }

    return 0;
}