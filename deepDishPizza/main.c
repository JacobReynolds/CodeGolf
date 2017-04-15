#include <stdio.h>
void pizza(int n) {
int i,k;char s=' ';char u='_';
#define a(e,f)for(k=0;k<e;k++){printf("%c",f);}
#define p(v)printf(v);
#define c()p("\\ \\")
#define d()p("/ /\n")
p("/\\")a(n*3+2,u)p("/\\\n")for(i=n+1;i>1;i--){a((n+1)-i,s)c()a((i*3)-3+(n+1-i),s)d()}a(n,s)c()a(n,u)d()a(n+1,s)p("\\")a(n+2,u)p("/\n")
}

int main(int argc, const char * argv[]) {
    int i;
    for (i=1; i<=4; i++) {
        printf("#### N = %i ####\n",i);
        pizza(i);
    }
    return 0;
}
