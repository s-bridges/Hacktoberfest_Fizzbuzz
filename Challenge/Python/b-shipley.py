def fizzbuzz(n):
    for i in range(n):
        s = None
        if i%3==0:
            s='Rat'
            if i%5==0:
                s='Spider'
        elif i%5==0:
            s='Ghost'
        print(s or i)

fizzbuzz(101)
