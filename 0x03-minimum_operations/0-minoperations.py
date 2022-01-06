#!/usr/bin/python3
"""
Given a number n, write a method that calculates the fewest number of
operations needed to result in exactly n H characters in the file.
"""


def minOperations(n):
    """
    Return the sum of the process until n H
    """
    answer = 0
    x = 2
    while n > 1:
        while n % x == 0:
            answer = answer + x
            n = n / x
        x = x + 1
    return answer