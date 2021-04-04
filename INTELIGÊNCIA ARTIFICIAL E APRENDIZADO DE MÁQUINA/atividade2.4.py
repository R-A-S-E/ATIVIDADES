class livro:
    def __init__(self, nome, qtdpaginas, autor, preco):
        self.nome = nome
        self.qtdpaginas = qtdpaginas
        self.autor = autor
        self.preco = preco
        print('Livro:',self.nome,'\nPaginas:', self.qtdpaginas,'\nAutor:', self.autor,'\nPreco:', self.preco)

    def diero(self, valor):
        self.preco = valor
        print('valor novo', self.preco)

livro1 = livro('A gata', 400, 'UM ai', 10.50)
livro1.diero(9.50)