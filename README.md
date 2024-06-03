# Criptografia e Decriptação de Strings
Este projeto em C implementa um programa para criptografar e decriptografar strings contendo letras maiúsculas e números. A criptografia é feita substituindo cada letra pela sua sucessora e 'Z' por 'A', e cada número pelo seu sucessor e '9' por '0'.

# Estrutura do Programa
## O programa possui três funções principais:

main: Lê a string do usuário, chama a função de criptografia e imprime a string criptografada, depois chama a função de decriptação e imprime a string decriptografada.
Cripto: Função que realiza a criptografia da string.
Decripto: Função que realiza a decriptação da string.

## Explicação das Funções
### Função Cripto
A função Cripto percorre cada caractere da string e aplica as seguintes regras:

Se o caractere for uma letra maiúscula ('A'-'Z'):
Se for 'Z', troca por 'A'.
Caso contrário, substitui pela letra sucessora.

Se o caractere for um número ('0'-'9'):
Se for '9', troca por '0'.
Caso contrário, substitui pelo número sucessor.

### Função Decripto
A função Decripto percorre cada caractere da string e aplica as seguintes regras:

Se o caractere for uma letra maiúscula ('A'-'Z'):
Se for 'A', troca por 'Z'.
Caso contrário, substitui pela letra predecessora.

Se o caractere for um número ('0'-'9'):
Se for '0', troca por '9'.
Caso contrário, substitui pelo número predecessor.

### Como Executar
#### Para compilar e executar o programa:

Salve o código em um arquivo, por exemplo, cripto.c.
Compile o código usando um compilador C, como gcc:

##### gcc cripto.c -o cripto
##### ./cripto


