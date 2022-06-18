def fibo(n):
    if n < 2:
        return n
    x = fibo(n-1) + fibo(n-2)
    return x

_sum = []
for i in range(34):
    x = fibo(i)
    if x % 2 == 0:
        _sum.append(x)
print(sum(_sum))