vetor = []
pares = []

for i in range(10):
    inp = int(input(f"digite o numero da lista {i + 1}: "))
    vetor.append(inp)
    if inp % 2 == 0:
        pares.append(inp)

quantidade_vetor = len(vetor)
quantidade_pares = len(pares)
print(vetor)
print(f"existem {quantidade_pares} quantidades e {quantidade_pares} numeros pares")

