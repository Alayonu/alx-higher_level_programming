#!/usr/bin/python3

for d in range(ord("a"), ord("z") + 1):
    if chr(d) != 'q' and chr(d) != 'e':
        print("{}".format(chr(d)), end="")
