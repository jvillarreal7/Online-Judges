n = 600851475143
factors = []

while n != 1:
    for number in range(2, 1000000 + 1):
        if number > 1:
            for i in range(2, number):
                if number % i == 0:
                    break
            else:
                if n % number == 0:
                    n /= number
                    factors.append(number)
                    print(number)
                    break
