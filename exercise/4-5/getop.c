#define <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "calc.h"

int getop(char s[]){
    int i, c, c2;
    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    i = 0;
    if(islower(c)){
        c2 = c;
        while(islower(s[++i] = c = getch()))
            ;
        s[i] = '\0';
        if(c != EOF)
            ungetch(c);
        if(strlen(s) > 1)
            return NAME;
        else {
            return c2;
    }
    if(!isdigit(c) && c != '.')
        return c;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] ='\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}
