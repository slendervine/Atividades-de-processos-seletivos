#Existem duas listas com as fotos mais belas do Brasil e do mundo,
# respectivamente, de acordo com uma revista especializada em fotografia.
# Para cada foto existe um preço associado a uma viagem para que o próprio leitor
# tenha a oportunidade de fotografar os lugares. Imprima uma lista com os 5 lugares
# mais caros do Brasil e os 5 mais baratos do mundo para que você possa
# programar suas próximas férias. Imagem em Atv2.png



ListaBrasil = [
    { 'Fernando de Noronha' : 10000 },
    { 'Rio de Janeiro' : 2500 },
    { 'Bonito' : 3500},
    { 'Chapada Diamantina' : 8000},
    { 'Serras Gauchas' : 5500},
    { 'Salvador' : 4000},
    { 'Natal' : 3500},
    { 'Amazonia' : 8500},
    { 'Buzios(RJ)' : 2800},
    { 'Brasilia' : 4200},
]

for i in [ListaBrasil]:
    ListaMundo.append(i)

ListaMundo = [
    {'Buenos Aires' : 3000},
    {'NewYork' : 15000},
    {'Tokio' : 12000},
    {'Cairo' : 7000},
    {'Paris' : 8500},
    {'Casablanca' : 6800},
    {'Nova Deli' : 8500},
    {'Ilha da Pascoa' : 11000},
    {'Havai' : 8300},
    {'Qebec' : 7000},
]

def pegaFotoMaisCara(listaBrasil):
    fotoMaisCara = {
        'valor_cidade': 0,
        'nome_cidade': 'nome-cidade'
    }
    for index, cidade in enumerate(ListaBrasil):
        for key, value in cidade.items():
            if fotoMaisCara['valor_cidade'] < value:
                fotoMaisCara['valor_cidade'] = value
                fotoMaisCara['nome_cidade'] = key
                indexMaisCaro = index

    return ListaBrasil.pop(indexMaisCaro)

def pegaFotoMaisBarata(listaCidades):
    fotoMaisBarata = {
        'valor_cidade': 9999999999,
        'nome_cidade': 'nome-cidade'
    }

    for index, cidade in enumerate(listaCidades):
        for key, value in cidade.items():
            if fotoMaisBarata['valor_cidade'] > value:
                fotoMaisBarata['valor_cidade'] = value
                fotoMaisBarata['nome_cidade'] = key
                indexMaisBarato = index

    return listaCidades.pop(indexMaisBarato)

for i in range(1, 6):
    print(pegaFotoMaisCara(ListaBrasil))

for i in range(1, 6):
    print(pegaFotoMaisBarata(ListaMundo))



