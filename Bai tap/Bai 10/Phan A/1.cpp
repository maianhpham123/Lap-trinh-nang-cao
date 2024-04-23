 #include <bits/stdc++.h>
 using namespace std;

char* concat (const char* a, const char* b) {
    int lensa = strlen(a);
    int lensb = strlen(b);
    char* result = new char[lensa + lensb];
    strcpy(result, a);
    strncat(result, b, lensb);
    return result;
}

 int main()
 {
    const char* a = "Hello";
    const char* b = "World";
    cout << concat(a, b) << endl;
 }