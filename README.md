# singly-linked-lists
An implementation of Singly-Linked List in C.

This code is a project for discipline Data Structures and Algorithms (MATA40) in Federal University of Bahia.
Follow description in Portuguese.

#### Manipulação de Listas

Neste trabalho o aluno deve fazer um programa que mantem informações sobre notas de alunos de uma universidade. O programa deve manter as notas dos alunos por nome do aluno, disciplina, curso do aluno e sexo. Para isto, o programa deve seguir o que está indicado nos itens abaixo:

1. os nomes dos alunos devem ser mantidos em uma lista encadeada (cada item da lista mantem o nome de um aluno) - os nomes dos alunos devem aparecer na lista em ordem alfabética crescente;

2. os nomes das disciplinas devem ser mantidos em uma lista encadeada (cada item da lista contém o nome de uma disciplina) - os nomes das disciplinas devem aparecer na lista em ordem alfabética crescente;

3. os nomes dos cursos devem ser mantidos em uma lista encadeada (cada item da lista contém o nome de um curso) - os nomes dos cursos devem aparecer na lista em ordem alfabética crescente;

4. uma lista encadeada com dois elementos deve ser mantida. O primeiro item indicará sexo feminino e o segundo, sexo masculino;

5. cada nota (de um estudante, de um determinado sexo, de um determinado curso em uma disciplina) será armazenada no sistema como um item de uma lista encadeada. Haverá, portanto, uma lista unindo **todas** as notas de alunos da universidade. Uma nota será representada por um valor real;

6. as notas, indicadas no item acima, devem ser também encadeadas de tal forma que:
    - todas as notas de um mesmo aluno formem uma lista encadeada;
    - todas as notas de alunos de uma mesma disciplina devem formar uma lista encadeada;
    - todas as notas de alunos de um mesmo curso devem formar uma lista encadeada;
    - todas as notas de alunos de um mesmo sexo devem formar uma lista encadeada.

**Importante**: cada nota deve ser armazenada apenas **uma vez** no sistema. A participação de uma nota em várias listas deve ser implementada através do uso de apontadores que saem de um ́unico nó contendo a nota.

As operações que o programa deve implementar são as seguintes:

1. inserção de um novo aluno na lista de alunos
2. inserção de uma nova disciplina
3. inserção de um novo curso
4. inserção de uma nota de um aluno (ou seja, de um estudante, de um dado sexo, de um dado curso, em uma disciplina). A nota será inserida na lista encadeada de notas. As demais listas (de aluno, sexo, curso e disciplina) devem ser atualizadas
5. consulta sobre a média das notas de um determinado aluno
6. consulta sobre a média das notas dos alunos em uma dada disciplina
7. consulta sobre a média das notas dos alunos de um determinado curso
8. consulta sobre a média das notas dos alunos de um determinado sexo
9. consulta sobre a média de todas as notas em todas as disciplinas, de todos os alunos
10. consulta da nota de um aluno em uma dada disciplina
11. listagem dos nomes dos alunos
12. listagem dos nomes das disciplnas
13. listagem dos nomes dos cursos
14. remoção de uma nota
15. término de sequência de operações.

###### Formatos de Entrada e Saída

O programa deverá ler operações a serem realizadas sobre os dados a partir da entrada padrão e mostrar os resultados das operações na saída padrão. Para cada operação, os formatos de entrada e saída serão os seguintes:

- inserção:uma inserção será feita informando-se, em uma linha a letra **i**, em seguida, em outra linha, um dos seguintes caracteres: **a** (para aluno), **d** (para disciplina), **c**(para curso), ou **n** (para nota). No caso de **a**, **d** ou **c**, a linha seguinte conterá apenas um nome (de aluno, disciplina ou curso, respectivamente). No caso de **n**, haverá cinco linhas em seguida. Na primeira será indicado o nome do aluno; na segunda, o sexo (**m**, para masculino, ou **f**, para feminino); na terceira, o nome da disciplina; na quarta, o nome do curso; na quinta, o valor da nota.
Esta operação não gera saída. Não haverá inserções incorretas de notas (por exemplo, duplicação de nota de um aluno em uma mesma disciplina ou inserção de nota de aluno inexistente).
- consulta sobre média de nota: uma consulta sobre média de nota será feita da seguinte forma. Em uma linha deve ser informada a letra **m**. Em uma segunda linha, será informado um dos caracteres: **a** (para aluno), **d** (para disciplina), **c** para (curso), **s** (para sexo) ou **t** (para todas). No caso de aluno, disciplina, curso ou sexo, será informado, em uma terceira linha, o nome do aluno, disciplina, curso ou sexo desejado. No caso de sexo, devem ser usadas as letras **m** para masculino e **f** para feminino.
Esta operação deve gerar, na saída, uma linha contendo o valor da média. Se não houver itens de dados, a média será zero. Não haverá inserções incorretas de dados (por exemplo, média de disciplina inexistente).
- consulta de nota de aluno: uma consulta sobre nota de aluno será feita informando-se, em uma linha, o caractere **n**, em outra linha o nome do aluno e em outra linha o nome da disciplina.
Esta operação deve gerar, na saída, uma linha contendo o valor da nota. Caso o aluno não possua nota nesta disciplina, o programa deve gerar na saída o caractere **-**.
- listagens: uma operação de listagem será indicada com a letra **l** em uma linha e um dos caracteres: **a** (para aluno), **d** (para disciplina), **c** para (curso), em outra linha. Esta operação deve gerar, na saída, os nomes desejados (alunos, disciplinas e cursos), um em cada linha, em ordem alfabética crescente.
- remoção: uma operação de remoção será indicada com a letra **r** em uma linha, o nome do aluno em uma segunda linha, o sexo em uma segunda linha (letra **m** ou **f**), o nome da disciplina em uma terceira linha e o nome do curso em uma quarta linha.
- Término de sequência de operações: esta operação será formada por apenas uma linha, contendo o caractere **e**.

Todos os nomes (alunos, disciplinas ou curso) somente serão formados por letras min ́usculas. Não haverá, portanto, espaço, acento, hífens, ’ç’, ou qualquer outro caractere diferente de letra nestes nomes. O valor de uma nota (ou média) deve ser um valor real com apenas uma casa decimal. A casa decimal sempre deve estar presente. O separador da casa decimal é o ponto (’.’).