e(d){printf("  __\n /%c%c\\\n/%c%c%c%c\\\n|%c%c%c%c|\n\\____/\n",d,d,d,d,d,d,d,d,d,d);}

int main(int argc, const char * argv[]) {
    int i;
    char output[4] = "-%~";
    for (i=0;output[i]>0; i++) {
        e(output[i]);
    }
    return 0;
}
