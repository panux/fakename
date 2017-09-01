#include<stdio.h>
#include<string.h>

#ifdef __i386__
#define ARCH "i686\n"
#endif
#ifdef __x86_64__
#define ARCH "x86_64\n"
#endif

#define pcase(l, str) case l: printf(str); break;

int main(int argc, char** argv) {
    if(argc != 2) {
        return 1;
    }
    if(strlen(argv[1]) != 2) {
        return 2;
    }
    if(argv[1][0] != '-') {
        return 3;
    }
    switch(argv[1][1]) {
    pcase('m', ARCH)
    pcase('s', "Linux\n")
    default:
        return 4;
    }
}
