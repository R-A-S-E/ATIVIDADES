def ganhou():
    #checando linhas
    for i in range(3):
        soma = board[i][0]+board[i][1]+board[i][2]
        if soma==3:
            return 1
        elif soma==-3:
            return 2

     #checando colunas
    for i in range(3):
        soma = board[0][i]+board[1][i]+board[2][i]
        if soma==3:
            return 1
        elif soma==-3:
            return 2

    #checando diagonais
    diagonal1 = board[0][0]+board[1][1]+board[2][2]
    diagonal2 = board[0][2]+board[1][1]+board[2][0]
    if diagonal1==3 or diagonal2==3:
        return 1
    elif diagonal1==-3 or diagonal2==-3:
        return 2

    return 0  

def exibe():
    for i in range(3):
        for j in range(3):
            if board[i][j] == 0:
                print(" _ ", end=' ')
            elif board[i][j] == 1:
                print(" X ", end=' ')
            elif board[i][j] == -1:
                print(" O ", end=' ')

        print()
                

board= [[1,-1,-1],
        [1,-1,-1],
        [-1,1,-1] ]  

ganhou()

teste = ganhou()
exibe()
if teste==1:
    print ("\nx ganhou\n")
elif teste==2:
    print ("\nO ganhou\n")