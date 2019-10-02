#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i%3==0 || i%5==0) printf("%s%s\n", i%3==0?"Fizz":"", i%5==0?"Buzz":"");
        else printf("%d\n", i);
    }
    return 0;
}