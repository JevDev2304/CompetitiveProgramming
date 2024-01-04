n = int(input())
criba = []

for i in range(n-1):
    criba.append(True)

iterador = 2

while iterador <= n:
    if criba[iterador-2] == True:
        k = ((iterador -2)+iterador)
        for f in range(n-1):
            if k < n-1:
                if criba[k] == True:
                    criba[k] = False
                k += iterador
            else:
                break
    iterador += 1

for j in range(n-1):
    if (criba[j] == True):
        print(j + 2, end=" ")
    else:
        print("--", end=" ")