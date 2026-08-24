n_h = input()

res = n_h.split(" ")

h_brinquedos = input()

res_brinquedos = h_brinquedos.split(" ")
count = 0
for i in res_brinquedos:
    if int(res[1]) >= int(i):
        count = count + 1

print(count)
    