import random 
import sys


n = random.randint(1, 1000)
count = 0
x = -1

while(count < 10 and x != n):
    x = int(input("? "))

    if( x < n ): 
        print(">")
    elif( x == n ):
        print(f"! {n}")
    else:
        print("<")

    sys.stdout.flush()
    count = count + 1


    
