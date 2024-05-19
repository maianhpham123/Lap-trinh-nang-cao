#include <bits/stdc++.h>
using namespace std;

char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main() {
    cout << weird_string() << endl;
}

//output (before modification): warning: address of stack memory associated with local variable 'c' returned [-Wreturn-stack-address]