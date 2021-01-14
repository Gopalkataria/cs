from sys import argv 
s = argv[1] 
news = ''
for char in s :
    if char in "QWERTYUIOPASDFGHJKLZXCVBNM" :
        news += "_" + char.lower() 
    else :
        news += char 
print(news)
