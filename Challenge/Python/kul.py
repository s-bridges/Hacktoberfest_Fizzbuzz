#!/usr/bin/python
# https://github.com/bhavesh0206s

for i in range(1000):
    if i % 3 == 0 and i % 5 == 0:
        print("Spider")
    elif i % 3 == 0:
        print('Rat')
    elif i % 5 == 0:
        print('Ghost')
    else:
        print(i)    