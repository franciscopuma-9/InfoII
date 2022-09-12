#Vamos a crear una clase llamada Persona. Sus atributos son: nombre, edad y DNI.
#Construye los siguientes métodos para la clase:
# Un constructor, donde los datos pueden estar vacíos.
# Los setters y getters para cada uno de los atributos. Hay que validar las entradas
#de datos.
# mostrar(): Muestra los datos de la persona.
# esMayorDeEdad(): Devuelve un valor lógico indicando si es mayor de edad

class Persona:
    def __init__(self, nombre, edad, dni):
        self.nombre = nombre
        self.edad = edad
        self.dni = dni

    def setNombre(self):
        """
        Este metodo setea el nombre.
        """
        self.nombre = input("Ingrese nombre: ")
        while (self.nombre.isalpha() != True):
            self.nombre = input("Solo puede ingresar letras: ")

    def setEdad(self):
        """
        Setea la Edad.
        """
        self.edad = input("Ingrese edad: ")
        while (self.edad.isdigit() != True):
            self.edad = input("Solo puede ingresar numeros: ")

    def setDni(self):
        self.dni = input("Ingrese DNI: ")
        while (self.dni.isdigit() != True):
            self.dni = input("Solo puede ingresar numeros: ")

    def getNombre(self):
        return self.nombre

    def getEdad(self):
        return self.edad

    def getDni(self):
        return self.dni

    def mostrar(self):
        print("Nombre:", self.nombre, "\nEdad:", self.edad, "\nDNI:", self.dni)

    def esMayorDeEdad(self):
        if int(self.edad) < 18:
            return "Es menor de edad"
        else:
            return "Es mayor de edad"
#init
person = Persona("1fg23", "34fg", "4523fg146")
#getters
print(person.getNombre())
print(person.getEdad())
print(person.getDni())
#setters
person.setNombre()
person.setEdad()
person.setDni()
#mostrar
person.mostrar()
#esMayor
print(person.esMayorDeEdad())
