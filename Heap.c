#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *buf = malloc(10); 
    strcpy(buf, "Hello I'm Mr. Meeseeks\n"); 
    printf("%s", buf);
    free(buf);
    return 0;
}

