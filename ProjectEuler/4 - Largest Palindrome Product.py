max_palindrome = 0

for i in range(1, 999):
    for j in range(1, 999):
        product = str(i * j)
        if product == product[::-1]:
            if int(product) > max_palindrome:
                max_palindrome = int(product)

print(max_palindrome)
