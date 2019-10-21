for itr in range(1,101):
    if itr % 3 == 0 and itr % 5 == 0:
        print("Spider")
    elif itr % 3 == 0:
        print("Rat")
    elif itr % 5 == 0:
        print("Ghost")
    else:
        print(itr)
