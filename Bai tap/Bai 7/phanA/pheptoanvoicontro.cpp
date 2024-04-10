#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char* argv[]) 
{
    int i;
    char* p;
    char str[50] = "Hello World!";

    for (i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) str[i] = tolower(str[i]);
        else if (islower(str[i])) str[i] = toupper(str[i]);
    }
    printf("Reversed string is %s \n", str);
    return 0;
}