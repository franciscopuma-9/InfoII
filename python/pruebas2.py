# Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular (que es una
# persona) y cantidad (puede tener decimales). El titular será obligatorio y la cantidad es
# opcional. Construye los siguientes métodos para la clase:
#  Un constructor, donde los datos pueden estar vacíos.
#  Los setters y getters para cada uno de los atributos. El atributo no se puede
# modificar directamente, sólo ingresando o retirando dinero.
#  mostrar(): Muestra los datos de la cuenta.
#  ingresar(cantidad): se ingresa una cantidad a la cuenta, si la cantidad
# introducida es negativa, no se hará nada.
#  retirar(cantidad): se retira una cantidad a la cuenta. La cuenta puede estar en
# números rojos.

class Cuenta:

    def __init__(self, titular, cantidad):
        self.titular = titular
        self.cantidad = float(cantidad)
    
    def setTitular(self, titular):
        self.titular = titular

    def setCantidad(self, cantidad):
        self.cantidad = float(cantidad)
    
    def getTitular(self):
        return self.titular
    
    def getCantidad(self):
        return self.cantidad
    
    def mostrar(self):
        print("Titular:", self.titular,"\nCantidad:", self.cantidad)
    
    def ingresar(self):
        self.cantidad_agregada = float(input("Cantidad a ingresar: "))
        if self.cantidad_agregada > 0:
            self.cantidad += self.cantidad_agregada
    
    def retirar(self):
        self.cantidad_retirada = float(input("Cantidad a retirar: "))
        self.cantidad -= self.cantidad_retirada
    
    

yo = Cuenta("francisco","1578489748.47")
yo.mostrar()
yo.setTitular("Santiago")
yo.setCantidad(157.5)
print("Titular:" ,yo.getTitular())
print("Cantidad: ", yo.getCantidad())
yo.ingresar()
yo.mostrar()
yo.ingresar()
yo.mostrar()
yo.retirar()
yo.mostrar()