#include <stdio.h>


void pizza(int n) {
  //Make top line
  int i;
  fputs("/\\", stdout);
  for (i=0; i < (n*3)+2; i++) {
    fputs("_", stdout);
  }
  fputs("/\\\n", stdout);
  for (i=n+1; i>1; i--) {
    for (int k=0; k<(n+1)-i; k++) {
      fputs(" ", stdout);
    }
    fputs("\\ \\", stdout);
    for (int j=0;j<(i*3)-3+(n+1-i);j++) {
      fputs(" ", stdout);
    }
    fputs("/ /\n", stdout);
  }
  for (int k=1; k<n+1; k++) {
    fputs(" ", stdout);
  }
  fputs("\\ \\", stdout);
  for (i=0;i<n;i++){
    fputs("_", stdout);
  }
  fputs("/ /\n", stdout);
  for (int k=1; k<n+2; k++) {
    fputs(" ", stdout);
  }
  fputs("\\", stdout);
  for (i=0;i<n+2;i++){
    fputs("_", stdout);
  }
  fputs("/\n", stdout);
}

int main(int argc, const char * argv[]) {
    int i;
    for (i=1; i<=4; i++) {
        printf("#### N = %i ####\n",i);
        pizza(i);
    }
    return 0;
}
