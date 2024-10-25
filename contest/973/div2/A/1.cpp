#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", int(ceil(m * 1.0 / min(a, b))));
    }
    return 0;
}