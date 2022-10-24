coeficiente = input("Ingrese coeficiente:")
bandera = True
while bandera:
    if '.' in coeficiente or coeficiente.isdigit() or '-' in coeficiente:
        coeficiente = float(coeficiente)
        bandera = False
    else: 
        coeficiente = input("Ingrese coeficiente:")
coeficiente = float(coeficiente)

ti = input("Ingrese ti:")
bandera = True
while bandera:
    if '.' in ti or ti.isdigit() or '-' in ti:
        ti = float(ti)
        bandera = False
    else: 
        ti = input("Ingrese ti:")
ti = float(ti)

print("Recta:"+str(coeficiente)+'x + '+str(ti))

print("Condicion paralelismo.\nDos rectas son paralelas si tienen la misma pendiente(coeficiente) y cambia su TI")
print("Primer paralela:", coeficiente,"x +", ti+2)
print("Primer paralela:", coeficiente,"x +", ti*2)
print("Primer paralela:", coeficiente,"x +", ti-1)

nuevo_coeficiente = -1/coeficiente
print("Condicion perpendicularidad")
print("Primer paralela:", nuevo_coeficiente,"x +", ti+1)
print("Primer paralela:", nuevo_coeficiente,"x +", ti*0.5)
print("Primer paralela:", nuevo_coeficiente,"x +", ti-2)



corteX = -ti/coeficiente
corteY = ti
def comportamientoRecta(coeficiente):
    if coeficiente < 0:
        print("Es decreciente")
    else:
        print("Es creciente")

from math import sqrt 


# ax^2 + bx + c = 0
a = input("Ingrese valor de a:")
bandera = True
while bandera:
    if '.' in a or a.isdigit() or '-' in a:
        a = float(a)
        bandera = False
    else: 
        a = input("Ingrese valor de a:")
a = float(a)

b = input("Ingrese valor de b:")
bandera = True
while bandera:
    if '.' in b or b.isdigit() or '-' in b:
        b = float(b)
        bandera = False
    else: 
        b = input("Ingrese valor de b:")
b = float(b)

c = input("Ingrese valor de c:")
bandera = True
while bandera:
    if '.' in c or c.isdigit() or '-' in c:
        c = float(c)
        bandera = False
    else: 
        c = input("Ingrese valor de c:")
c = float(c)

#raices corte eje x
if ((b*b - (4*a*c))) < 0:
    print("No posee soluciones reales. Tiene raices imaginarias.")
elif(b*b - (4*a*c)) == 0:
    x=(-b + sqrt(b*b - (4*a*c)))/(2*a)
    print("Posee una unica raiz\n Valor de la raiz unica: ", x)
else:
    x1= (-b + sqrt(b*b - (4*a*c)))/(2*a)
    x2= (-b - sqrt(b*b - (4*a*c)))/(2*a)
    print("Posee dos raices.\nRaiz 1: ", x1, "\nRaiz 2: ", x2)
#corte eje y
corteY = c

#vertice
verX = -(b/(2*a))
very = (a * (verX * verX))+ (b * (verX)) + c
print("Las cordenadas del vertice son(",verX,",",very,")")

#creciente/decreciente
if a > 0:
    print("El intervalo de decrecimiento es desde infinito hasta", verX)
    print("El intervalo de crecimiento es desde", verX, "hasta infinito")
else:
    print("El intervalo de crecimiento es desde infinito hasta", verX)
    print("El intervalo de decrecimiento es desde", verX, "hasta infinito")

#concavidad
if a > 0:
    print("Es concavo hacia arriba")
else:
    print("Es concavo hacia abajo")
    
