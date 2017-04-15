#include <stdio.h>

void egg(char d) {
printf("  __\n");
printf(" /");
for(int i=0;i<2;i++){
  printf("%c",d);
}
printf("\\\n");
for (int i=0;i<2;i++){
  printf("%c%c%c%c%c%c",i?'|':'/',d,d,d,d,i?'|':'\\');
  puts("");
}
printf("\\____/");
puts("");
}

int main(int argc, const char * argv[]) {
    int i;
    char output[4] = "-%~";
    for (i=0;output[i]>0; i++) {
        egg(output[i]);
    }
    return 0;
}
