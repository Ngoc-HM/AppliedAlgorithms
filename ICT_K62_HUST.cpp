#include <bits/stdc++.h>
int count = 0;
void count_ways(int digits[], int used[], int sum)
{
    if (digits[1]*100 + digits[2]*10 + digits[3] - digits[6]*100 - 6*10 - 2 +
        digits[4]*1000 + digits[5]*100 + digits[7]*10 + digits[8] == sum) {
        count++;
    }

    for (int i = 1; i <= 9; i++) {
        if (!used[i]) {
            used[i] = 1;
            digits[9-used[0]] = i;
            count_ways(digits, used, sum);
            used[i] = 0;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int digits[9];
    int used[10] = {0};
    count_ways(digits, used, n);
    printf("%d\n", count);

    return 0;
}
