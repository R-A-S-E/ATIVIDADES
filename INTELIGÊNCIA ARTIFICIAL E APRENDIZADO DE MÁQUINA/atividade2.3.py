class funcionario:
        def __init__(self, nome, salario):
            self.nome = nome
            self.salario = salario
            print(self.nome, self.salario)

        def AumentoSalario(self, aumentar):
            self.salario  = self.salario+self.salario*aumentar/100
            print('Salario foi aumentado para ', self.salario)
    
funcionario1 = funcionario('Lucas', 1320)
funcionario1.AumentoSalario(10)