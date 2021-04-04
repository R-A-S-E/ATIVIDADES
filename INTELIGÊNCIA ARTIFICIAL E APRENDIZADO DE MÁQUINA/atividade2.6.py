class carro:
    def __init__(self, media):
        self.media = media
        self.gasolina = 0

    def andar(self, km):
        self.km = km
        

    def obterGasolina(self):
        self.gasolina = self.gasolina-self.km/self.media
        print('Sua gasolina esta em:', self.gasolina)

    def adicionarGasolina(self, abastercer):
        self.gasolina = self.gasolina+abastercer
    
fusca = carro(20)
fusca.adicionarGasolina(20)
fusca.andar(50)
fusca.obterGasolina()