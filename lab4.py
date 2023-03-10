''' Laboratorio4
Author: Daniel Iram Gonzalez Portilla
date: 09-03-2023
Description: El programa es una calculadora con las operaciones de suma, resta multiplicacion y division implementando while y switch así como el uso de funciones
'''

#---------------------INSTRUCCIONES-----------------------
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
import os
def printMenu():
    ''' printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)suma\n")
    print("\t2)resta\n")
    print("\t3)division\n")
    print("\t4)multiplicacion\n")
    print("\t5)salida")
    option = input()
    if(option):
        return int (option)
    else:
        return 0

def suma(param1,param2):
    if (param1 % 2 == 0) and (param2 % 2 == 0):
        tot = param1 + param2
        print(f"\nLa suma de {param1} con {param2} es: {tot}")
    else:
        print("\nNo son pares")
		
def resta(param1,param2):
    if (param1 % 5 == 0) and (param2 % 5 == 0):
        tot = param1 - param2
        print(f"\nLa resta de {param1} menos {param2} es: {tot}")
    else:
        print("\nNo son impares multiplos de 5")
        
def division(param1,param2):
    tot = param1 // param2
    if (param1 % param2 == 0):
        print(f"\nEl resultado de dividir {param1} entre {param2} es: {tot}")
    else:
        print("\nNo es una division exacta")
        
def multiplicacion(param1,param2):
    if (param1 > 10) and (param2 > 10):
        tot = param1 * param2
        print(f"\nEl resultado de multiplicar {param1} con {param2} es: {tot}")
    else:
        print("\nLos numeros no son mayores a 10")
		
def main():
    flag = 0
    inutil =''
    while(flag!=5):
        flag = printMenu()
        
        if (flag==1):
            a=input("\n Ingrese un numero")
            b=input("\n Ingrese un numero")
            param1=a
            param2=b
            suma(int(param1),int(param2));
        elif (flag==2):
            a=input("\n Ingrese un numero")
            b=input("\n Ingrese un numero")
            param1=a
            param2=b
            resta(int(param1),int(param2));
        elif (flag==3):
            a=input("\n Ingrese un numero")
            b=input("\n Ingrese un numero")
            param1=a
            param2=b
            division(int(param1),int(param2));
        elif (flag==4):
            a=input("\n Ingrese un numero")
            b=input("\n Ingrese un numero")
            param1=a
            param2=b
            multiplicacion(int(param1),int(param2));
        elif (flag==5):
            print("\nSaliendo...")
            break
        elif (flag==0):
            print("\nNo valido")
        else:
            print("\nNo valido")
            
        print("\nOprima enter o cualquier tecla cualquiera para continuar, si desea salir, oprima 5 \n");
        input(inutil)
        if(inutil == '53'):
            print("saliendo...")
            break
        else:
        	flag=0;
        
    print("excelente")

if __name__ == '__main__':
    main()
