Cifrado-algoritmo-DiffieHellman
===============================


Objetivo: Implementar el algoritmo de intercambio de claves de Diffie-Hellman
C++, Qt

Desarrollo:
1. Implementa el generador el algoritmo de intercambio de claves de Diffie-Hellman según el diagrama
que se incluye a continuación
A
escoge secreto x A
B
escoge secreto x B
calcula y A =α xA (mod p) calcula y B =α xB (mod p)
genera k= y BxA (mod p) genera k= y AxB (mod p)

2. El programa debe solicitar el número primo p, el número α<p, y los secretos x A y x B , y mostrar la traza
completa del algoritmo, es decir, los números intermedios generados y A e y B , y la clave compartida k.
Ejemplos:
p = 13, α = 4, x A = 5, x B = 2, y A =10, y B =3, k = 9
p = 43, α = 23 x A = 25, x B = 33, y A =40, y B =16, k = 4
p = 113, α = 43 x A = 54, x B = 71, y A =11, y B =29, k = 61
