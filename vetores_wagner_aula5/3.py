vetor = []

for i in range(6):
    inp = int(input(f"digite valor inteiro num {i + 1}: "))
    vetor.append(inp)

vetor_tras = sorted(vetor, reverse=True)
print(vetor_tras)
