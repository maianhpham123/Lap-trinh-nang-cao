#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//create a bool vector
//check

/*
bool isPrime (int n) {
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p*p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    if (is_prime[n]) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (isPrime(a[i])) res++;
    }

    cout << res << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm tạo sàng nguyên tố cho các số từ 2 đến n
vector<bool> sieve_of_eratosthenes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 và 1 không phải số nguyên tố

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    return is_prime;
}
*/

//SOLUTION

// Hàm tạo sàng nguyên tố cho các số từ 2 đến n
vector<bool> sieve_of_eratosthenes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 và 1 không phải số nguyên tố

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_number = *max_element(a.begin(), a.end()); // Tìm số lớn nhất trong mảng
    vector<bool> is_prime = sieve_of_eratosthenes(max_number); // Tạo sàng nguyên tố tới số lớn nhất

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime[a[i]]) res++;
    }

    cout << res << endl;

    return 0;
}

//Achtung: min_element, max_element => return a POINTER

