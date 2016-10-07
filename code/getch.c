#include <stdio.h>

#define BUFSIZE 100
int bufp = 0;
char buf[BUFSIZE];

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp < BUFSIZE)
        buf[bufp++] = c;
    else
        printf("ungetch: buf is full\n");
}
