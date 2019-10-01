#https://github.com/necrashter
print("\n".join([("Spider" if i%5==0 else "Rat") if i%3==0 else "Ghost" if i%5==0 else str(i) for i in range(1,100)]))
