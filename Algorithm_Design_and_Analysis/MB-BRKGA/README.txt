Implementar (na Linguagem C ou C++) a Metaheurística estudada no trabalho T1 para
solucionar o Problema da Mochila Binária (PMB), também conhecido como Problema da
Mochila 0-1, que é um dos mais estudados nas áreas de Programação Discreta e Otimização
Combinatória.
Seu objetivo é alocar n itens em uma mochila, respeitando sua capacidade C, de modo a
maximizar o ganho total desta alocação, considerando que cada item i é único, tendo associado
um peso pi e um valor (ganho) vi, onde i = 1,...,n. O PMB diferencia-se dos demais Problemas da
Mochila por considerar cada item único e se ele está alocado (1) ou não está alocado (0) na
Mochila, por isto o nome Binária (ou 0-1).
Na modelagem de uma situação real, a mochila pode representar, por exemplo, um
caminhão, navio ou container a ser carregado. O PMB pertence à classe de problemas
NP-Completo, para os quais não se conhece um algoritmo determinístico polinomial que os
solucionem.
Considerando uma mochila de capacidade C e n itens únicos, onde o peso pi e o ganho vi
são dados, i = 1,...,n, deseja-se alocar (ou não) cada item na mochila, de modo que a sua
capacidade não seja ultrapassada e o ganho total seja máximo.
Assim, pode-se definir um modelo matemático para o problema por:

O modelo Matematico esta na imagem Exercise.png
A Metaheurística selecionada foi BRKGA

Onde xi
indica se o item i é alocado (1) ou não (0) na mochila, i = 1,...,n. A função
objetivo (2.1) maximiza a soma dos ganhos dos itens alocados. A restrição (2.2) impõe que o peso total
dos itens alocados não ultrapasse a capacidade da mochila, enquanto a restrição (2.3) indica que a
variável xi
é binária.


_________________________________________________________________________________________

Implement (in C or C++ Language) the Metaheuristic studied in the T1 work to
solve the Binary Knapsack Problem (BMP), also known as the Binary Backpack Problem.
Backpack 0-1, which is one of the most studied in the areas of Discrete Programming and Optimization
Combinatorics.
Your objective is to allocate n items in a backpack, respecting its capacity C, in order to
maximize the total gain of this allocation, considering that each item i is unique, having associated
a weight pi and a value (gain) vi, where i = 1,...,n. The PMB differs from the other Problems of the
Backpack by considering each unique item and whether it is allocated (1) or not allocated (0) in the
Backpack, hence the name Binary (or 0-1).
In modeling a real situation, the backpack can represent, for example, a
truck, ship or container to be loaded. PMB belongs to the class of problems
NP-Complete, for which there is no known polynomial deterministic algorithm that
solve.
Considering a backpack of capacity C and n unique items, where the weight pi and the gain vi
are given, i = 1,...,n, we want to allocate (or not) each item in the knapsack, so that its
capacity is not exceeded and the total gain is maximum.
Thus, one can define a mathematical model for the problem by:

The Mathematical model is in the Exercise.png image
The selected Metaheuristic was BRKGA

where x
indicates whether item i is allocated (1) or not (0) in the knapsack, i = 1,...,n. The function
objective (2.1) maximizes the sum of gains from the allocated items. Constraint (2.2) imposes that the total weight
of the allocated items does not exceed the capacity of the knapsack, while restriction (2.3) indicates that the
variable xi
it is binary.