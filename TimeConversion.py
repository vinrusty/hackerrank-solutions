import os
import sys

s = input()
a = int(s[0:2])
if 'p' in s.casefold() and a != 12:
    a = a + 12
    print(f"{a}:{s[3:5]}:{s[6:8]}")
elif a == 12 and 'a' in s.casefold():
    print(f"00:{s[3:5]}:{s[6:8]}")
else:
    print(s[0:8])
