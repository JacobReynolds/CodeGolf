#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ENCODE (1)
#define DECODE (0)

//Not yet optimized
void encode(char *s) {
    for(int i=0;i<strlen(s);i++){
      int lastIndex=-1;
      if (s[i]>='0' && s[i]<='9') continue;
      for (int k=0;k<strlen(s);k++) {
        if (s[i] == s[k]) {
          if (lastIndex==-1) {
            lastIndex=0;
          } else if (lastIndex>=10) {
            lastIndex=0;
          } else if (lastIndex>-1 && lastIndex < 10) {
            s[k]='0'+lastIndex;
            lastIndex = 0;
          }
        } else {
          if (lastIndex>-1){
          lastIndex++;
        }
        }
      }
    }
}

//Optimized
void decode(char *s) {
 for(int i=0;s[i++];)s[i]>47&&s[i]<58&&(s[i]=s[i-s[i]+47]);
}

void test(char *str, int mode) {
    printf("Input : %s\n", str);
    (mode==ENCODE) ? encode(str) : decode(str);
    printf("Output: %s\n\n", str);
}

int main(int argc, char** argv) {
    char t1[] = "abcd";
    char t2[] = "aaaa";
    char t3[] = "banana";
    char t4[] = "Hello World!";
    char t5[] = "this is a test";
    char t6[] = "golfing is good for you";
    char t7[] = "Programming Puzzles & Code Golf";
    char t8[] = "Replicants are like any other machine. They're either a benefit or a hazard.";

    char d1[] = "abcd";
    char d2[] = "a000";
    char d3[] = "ban111";
    char d4[] = "Hel0o W2r5d!";
    char d5[] = "this 222a19e52";
    char d6[] = "golfin5 3s24o0d4f3r3y3u";
    char d7[] = "Prog2am0in6 Puz0les7&1Cod74G4lf";
    char d8[] = "Replicants 4re3lik448ny3oth8r5mac6in8.8T64y'r371it9376a1b5n1fit7or2a1h2z17d.";

    printf(" #### Encoding ####\n");
    test(t1, ENCODE);
    test(t2, ENCODE);
    test(t3, ENCODE);
    test(t4, ENCODE);
    test(t5, ENCODE);
    test(t6, ENCODE);
    test(t7, ENCODE);
    test(t8, ENCODE);

    printf("#### Decoding ####\n");
    test(d1, DECODE);
    test(d2, DECODE);
    test(d3, DECODE);
    test(d4, DECODE);
    test(d5, DECODE);
    test(d6, DECODE);
    test(d7, DECODE);
    test(d8, DECODE);

    return 0;
}
