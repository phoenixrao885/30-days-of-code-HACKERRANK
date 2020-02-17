#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char is[105];
    scanf("%[^\n]", is);
    printf("Hello, World.\n");
    int a=strlen(is);
    for (int i=0; i<a; i++) {
    printf("%c",is[i]);
    }   
    return 0;
}

