#!/usr/bin/python3

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if str(product) == sstr(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product


