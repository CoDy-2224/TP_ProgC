#include <stdio.h>

int main(void)
{
    char c = 'A';
    signed char sc = -12;
    unsigned char uc = 200;

    short s = -15000;
    signed short ss = -200;
    unsigned short us = 50000;

    int i = -12345;
    signed int si = -456;
    unsigned int ui = 45678;

    long int li = -123456789L;
    signed long int sli = -987654321L;
    unsigned long int uli = 987654321UL;

    long long int lli = -1234567890123LL;
    signed long long int slli = -456789LL;
    unsigned long long int ulli = 1234567890123ULL;

    float f = 3.14f;
    double d = 3.14159265359;
    long double ld = 3.141592653589793238L;

    printf("char = %c (%d)\n", c, c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("short = %d\n", s);
    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("int = %d\n", i);
    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("long int = %ld\n", li);
    printf("signed long int = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("long long int = %lld\n", lli);
    printf("signed long long int = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float = %.2f\n", f);
    printf("double = %.10f\n", d);
    printf("long double = %.15Lf\n", ld);

    return 0;
}