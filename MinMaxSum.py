#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.

a = [ int(x) for x in input().split()]
new = []
s = 0
l = 0

for j in range(0, len(a)):
    s = s + a[j]

while l < 1:
    for k in range(0, len(a)):
        s = s - a[k]
        new.append(s)
        s = s + a[k]
    l += 1
new.sort()
print(new[0], new[len(a)-1])

