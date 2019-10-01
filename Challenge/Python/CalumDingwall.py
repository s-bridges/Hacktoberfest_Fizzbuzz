#https://github.com/ccreativecnd

n=0

while n<101:
  s = None
  if n%3 == 0:
    if n%5 == 0:
      s = "Spider"
    else:
      s = "Rat"
  elif n%5 == 0:
    s = "Ghost"
  print(s or n)
  n = n + 1
