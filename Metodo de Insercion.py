tam = int(input("Cuantos numeros decea ordenar: "))
print(tam)
numero = list(range(tam))
for k in range (0,tam):
    print("Introduce un numero ",k+1)
    numero[k] = int(input())
print(numero)
for i in range(0,len(numero),1):
        pos=i
        aux=numero[i]
        while (pos>0) and (numero[pos-1]>aux):
               numero[pos]= numero[pos-1]
               pos-=1
        numero[pos]=aux
print("Escoja ordenar los numeros de manera ascendente=1, Descendente =2")
opc=int(input())
if opc==2:
        for i in range(len(numero)-1,-1,-1):
                    print(numero[i])
else:
    if opc==1:
            for i in range(0,len(numero),1):
                    print(numero[i])
