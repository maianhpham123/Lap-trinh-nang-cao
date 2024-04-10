#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[50] = "Hello World!";
    char *p1 = str;
    char *p2 = &str[0];
    if (p1 == p2) printf("EQUAL! \n");
    if (p1[5] == ' ') *(p2+5)='-';

    p1=NULL;
    p2=NULL;
    
    str=NULL; //str được xem như con trỏ,
    //KHÔNG PHẢI CON TRỎ
}