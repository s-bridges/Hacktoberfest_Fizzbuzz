for i in range(1,101):
	if i%3==0 and i%5==0:
		print("Ghost\n")
	elif i%3==0:
		print("Rat\n")
	elif i%5==0:
		print("Ghost\n")
	else:
		print(str(i)+"\n")