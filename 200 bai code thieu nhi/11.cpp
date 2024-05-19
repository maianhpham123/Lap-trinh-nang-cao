#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    int num[10] = {0};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        num[a[i]]++;
    }

    //debug: done
    /*
    for (int i = 0; i < 10; i++) {
        cout << num[i] << endl;
    }
    */

   int max = num[0];
   int indexMax = 0;

    for (int i = 1; i < 10; i++) {
        if(num[i] > max) {
            max = num[i];
            indexMax = i;
        }

        if (num[i] == max) {
            if (i < indexMax) {
                indexMax = i;
            }
        }
    }

    cout << indexMax << endl;

    return 0;

}