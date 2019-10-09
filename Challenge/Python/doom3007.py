# https://github.com/doom3007
n = 0
while n < 101:
    if n % 3:
        if n % 5:
            print n
        else:
            print 'Ghost'
    elif n % 5:
        print 'Rat'
    else:
        print 'Spider'
    n += 1
