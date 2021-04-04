class aluno:
    def __init__(self, nome,curso,tempoSemDormir):
        self.tempoSemDormir = tempoSemDormir
        print('nome:', nome,'\ncurso:',curso)

    def estudar(self,tuda):
        self.tuda = tuda

    def dormir(self,amimi):
        self.amimi = amimi

    def tempodormir(self):
        self.tempoSemDormir = self.tempoSemDormir+self.tuda-self.amimi
        print('tempo sem dormir:', self.tempoSemDormir)

aluno1 = aluno('Rafael', 'CCO', 18)
aluno1.estudar(4)
aluno1.dormir(6)
aluno1.tempodormir()