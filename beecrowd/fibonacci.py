def fibonacci(x):
    global count
    count += 1
    if x != 0 and x != 1:
        x = fibonacci(x - 1) + fibonacci(x - 2)
    return x

n = int(input())
all_values = []
for i in range(0, n, 1):
    all_values.append(int(input()))

for i in range(0, n, 1):
    count = 0
    x = fibonacci(all_values[i])
    print(f"fib({all_values[i]}) = {count - 1} calls = {x}")
    

