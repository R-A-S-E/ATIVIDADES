import math 

class triangulo:
        def __init__(self, lado1, lado2, lado3):
                self.a = lado1
                self.b = lado2
                self.c = lado3

        def Perimetro(self):
                self.peri = self.a+self.b+self.c
                print('Perimetro', self.peri)

        def Descobre(self):
                self.tipo = 0
                self.altura = 0
                if (self.a + self.b < self.c) or (self.a + self.c < self.b) or (self.b + self.c < self.a):
                        print('Nao é um triangulo')
                elif (self.a == self.b) and (self.a == self.c):
                        print('Equilatero')
                        self.tipo=1
                elif (self.a==self.b) or (self.a==self.c) or (self.b==self.c):
                        print('Isósceles')
                        self.tipo=2
                else:
                        print('Escaleno')
                        self.tipo=3


        def Altura(self):
                if(self.tipo == 1):
                        self.altura = (self.a * math.sqrt(3)) / 2
                        print('Altura', self.altura)
                elif(self.tipo == 2):
                        if(self.a == self.b):
                                self.altura = math.sqrt(pow(self.a,2) - pow(self.c,2) / 4)
                                print('Altura', self.altura)
                        elif(self.a == self.c):
                                self.altura = math.sqrt(pow(self.a,2) - pow(self.b,2) / 4)
                                print('Altura', self.altura)
                        else:
                                self.altura = math.sqrt(pow(self.b,2) - pow(self.a,2) / 4)
                                print('Altura', self.altura)
                else:
                        self.altura = math.sqrt(self.peri * (self.peri - self.a) * (self.peri - self.b) * (self.peri - self.c))
                        print('Altura', self.altura)

        def Area(self):
                area = 0
                if(self.tipo == 1):
                        area = (self.a * self.altura) / 2
                        print('Area', area)
                elif(self.tipo == 2):
                        if(self.a == self.b):
                                area = (self.c * self.altura) / 2
                                print('Area', area)
                        elif(self.a == self.c):
                                area = (self.b * self.altura) / 2
                                print('Area', area)
                        else:
                                area = (self.a * self.altura) / 2
                                print('Area', area)
                else:
                        area = self.altura 
                        print('Area', area)

        
                        
        
triangulo1 = triangulo(float(input('primeiro lado: ')), float(input('segundo lado: ')) , float(input('terceiro lado: ')))
triangulo1.Perimetro()
triangulo1.Descobre()
triangulo1.Altura()
triangulo1.Area()


