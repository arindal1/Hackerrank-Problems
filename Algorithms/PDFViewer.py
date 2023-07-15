#!/bin/python3

import sys


h = [int(h_temp) for h_temp in input().strip().split(' ')]
word = input().strip()
max_height = 0
for i in range (len(word)):
    num = ord(word[i])-97
    if (h[num] >= max_height):
        max_height = h[num]

area = len(word)*max_height
print(area)
