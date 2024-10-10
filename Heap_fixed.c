#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *buf = malloc(strlen("Hello I'm Mr. Meeseeks\n") + 1);  //+1 for the NULL terminator
    if (buf == NULL) {
        return 1;
    }

    strcpy(buf, "Hello I'm Mr. Meeseeks\n"); 
    printf("%s", buf);
    free(buf);
    return 0;
}

