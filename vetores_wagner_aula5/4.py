numeros = [1, 2, 3, 4, -1, 10, -4, 20]

for i in range(len(numeros)):
    if numeros[i] < 0:
        numeros[i] = 0

print(numeros)

