#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[]){
    int i, c;
    static int lastc;

    if(lastc == 0) {
        c = getch();
    } else {
        c = lastc;
        lastc = 0;
    }

    while((s[0] = c) == ' ' || c == '\t')
        c = getch();
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;
    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] ='\0';
    if(c != EOF)
        lastc = c;
    return NUMBER;
}
