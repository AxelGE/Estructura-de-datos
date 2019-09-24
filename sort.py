tamanio = int(input('Ingrese el tamanio del arreglo: '))
numbers = list(range(tamanio))
for i in range (0,tamanio):
    numbers[i] = int(input('Ingrese el numero: '))
numbers.sort()
print(numbers)
