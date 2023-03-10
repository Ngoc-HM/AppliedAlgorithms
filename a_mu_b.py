MOD = 10**9 + 7
def power_mod(a, b):
    result = 1
    while b > 0:
        if b % 2 == 1:
            result = (result * a) % MOD
        a = (a * a) % MOD
        b //= 2
    return result

a, b = map(int, input().split())

ans = power_mod(a, b)
print(ans)
