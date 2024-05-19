/*
N = 5
01234
for i[0]: 0 1 2 3 4 
    for i[1]: 0 1 2 3 4
        for i[2]: 0 1 2 3 4
            for i[3]: 0 1 2 3 4
                for i[4]: 0 1 2 3 4
                cout << i[0 ... 4]


RECURSION:
gen_password(char p[],int i, int len) //i: the password until the time the update take place, len is the length of p array, i is the
index that cout{
    if i >= len{
        cout << p[0... len-1];
    }
    for (u: 0 ... s.length()) {
        p[i] = s[u];
        gen_password(p, i+1, len);
    }
}

N = 5
s = "01234" 

chari[11]
int main() 
{
    for len: 1 ... N:
        gen_password(i, len)
}
*/

