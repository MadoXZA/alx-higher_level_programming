#!/usr/bin/python3
# 9-max_integer.py

def max_integer(my_list=[]):
    """Find the biggest integer of a list."""
    if len(my_list) == 0:
        return (None)

    groot = my_list[0]
    for k in range(len(my_list)):
        if my_list[k] > groot:
            groot = my_list[i]

    return (groot)
