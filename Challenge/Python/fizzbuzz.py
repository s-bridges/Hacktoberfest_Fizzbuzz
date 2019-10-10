
#Python program to print Fizz Buzz loop for 100 times i.e. range 
for fizzbuzz in range(100):  

    if fizzbuzz % 15 == 0:  
        print("Spider")                                          
        continue

    elif fizzbuzz % 3 == 0:      
        print("Rat")                                          
        continue

    elif fizzbuzz % 5 == 0:          
        print("Ghost")                                      
        continue
     
    print(fizzbuzz) # print numbers
