
def algoritmo(ator_i, ator_f, lista_filmes):
    






N_M = input().split(" ")
n_films = int(N_M[0])
n_actors = int(N_M[1])

sum_actors = 0

list_films = []
for i in range(0, n_films, 1):
    actors = input().split(" ")

    # Validação para evitar um filme com mais atores que o determinado
    if int(actors[0]) != (len(actors) - 1): 
        print(f"Voce deve colocar {actors[0]} atores.")
        break
    
    sum_actors = sum_actors + int(actors[0])

    # Validação para evitar que a soma dos atores seja diferente do determinado
    if sum_actors != n_actors:
        print(f"Voce deve colocar {n_actors} atores.")
        break

list_to_found = []

qntd = int(input())

for i in range(0, qntd, 1):
    actors_to_connect = input().split(" ")
    list_to_found.append(actors_to_connect)

indice_atores = 0
indice_filmes_array = 0
while( True ): 
    actor_i = list_to_found[indice_atores][0]
    actor_f = list_to_found[indice_atores][1]

    if actor_i in list_films[indice_filmes_array][1:len(list_films[indice_filmes_array])]:




        

    

