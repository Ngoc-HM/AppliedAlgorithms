#include <iostream>
#include <numeric>
#define MAX 100000
int main()
{
    int a[MAX], n, k, m, count = 0;
    scanf("%d%d%d", &n, &k, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - k + 1; i++)
        if (std::accumulate(a + i, a + i + k, 0) == m)
            count++;

    printf("%d", count);
    return 0;
}
