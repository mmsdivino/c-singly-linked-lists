#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MCHAR 30

///////////////////////////////////////////////////////////////////////
/*                    TRABALHO ESTRUTURA DE DADOS                    */
/*           Aluna: Michelle Mendes de Araujo Amor Divino            */
/*                 Turma: Terças e Quintas, 17h/19h                  */
/*     Nome do arquivo zipado: TrabEstDados-MichelleMendes.zip       */
///////////////////////////////////////////////////////////////////////


// ESTRUTURA NOTAS //
typedef struct ListaNota{
	float numero;
	struct ListaNota *proxn, *proxna, *proxnc, *proxnd, *proxns;
} Notas;

Notas* criaNotas(void){
	return NULL;
}

/*void printNotas (Notas*l){
	if (l==NULL) puts("Lista vazia!");
	Notas *q;
	for (q=l;q!=NULL;q=q->proxn){
		printf("Notas: %.1f\n",q->numero);
	}
}*/
// FIM ESTRUTURAS NOTAS //


// ESTRUTURA ALUNOS//
typedef struct ListaAluno{
	char *infoA;
	struct ListaAluno *proxA;
	struct ListaNota *notaA;
} Alunos;

Alunos* criaAlunos (void){
	return NULL;
}

void printAlunos (Alunos*l){
	if (l==NULL) puts("Lista vazia!");
	Alunos *q;
	for (q=l;q!=NULL;q=q->proxA){
		printf("%s\n",q->infoA);
	}
}

Alunos* insereAlunos (Alunos* l) {
	char nomeA[MCHAR];
	/*puts("Nome aluno:");*/ gets(nomeA);
	Alunos* novo=(Alunos*)malloc(sizeof(Alunos));
	if (novo==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	novo->infoA=(char*)malloc(strlen(nomeA)+1);
	if (novo->infoA==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	strcpy(novo->infoA,nomeA);
	Alunos* ant=NULL;
	Alunos* p=l;
	while ((p!=NULL)&&(strcmp(p->infoA,nomeA)<0)){
		ant=p;
		p=p->proxA;
	}
	if (ant==NULL) {
		novo->proxA=l;
		l=novo;
		return (l);
	}
	else {
		novo->proxA=ant->proxA;
		ant->proxA=novo;
	}
	return (l);
}

Alunos* buscaAlunos (Alunos* l, char *nomeA) {
	Alunos *q;
	for (q=l;q!=NULL;q=q->proxA){
		if (strcmp(q->infoA,nomeA)==0) return (q);
	}
	return (NULL);
}
// FIM DE ESTRUTURA ALUNO //


// ESTRUTURA DISCIPLINA //
typedef struct ListaDisciplina {
       char *infoD;
       struct ListaDisciplina *proxD;
       struct ListaNota *notaD;
} Disciplinas;

Disciplinas* criaDisciplinas (void){
	return NULL;
}

void printDisciplinas (Disciplinas*l){
	if (l==NULL) puts("Lista vazia!");
	Disciplinas *q;
	for (q=l;q!=NULL;q=q->proxD){
		printf("%s\n",q->infoD);
	}
}

Disciplinas* insereDisciplinas (Disciplinas* l) {
	char nomeD[MCHAR];
	/*puts("Nome disciplina:");*/ gets(nomeD);
	Disciplinas* novo=(Disciplinas*)malloc(sizeof(Disciplinas));
	if (novo==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	novo->infoD=(char*)malloc(strlen(nomeD)+1);
	if (novo->infoD==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	strcpy(novo->infoD,nomeD);
	Disciplinas* ant=NULL;
	Disciplinas* p=l;
	while ((p!=NULL)&&(strcmp(p->infoD,nomeD)<0)){
		ant=p;
		p=p->proxD;
	}
	if (ant==NULL) {
		novo->proxD=l;
		l=novo;
		return (l);
	}
	else {
		novo->proxD=ant->proxD;
		ant->proxD=novo;
	}
	return (l);
}

Disciplinas* buscaDisciplinas (Disciplinas* l, char *nomeD) {
	Disciplinas *q;
	for (q=l;q!=NULL;q=q->proxD){
		if (strcmp(q->infoD,nomeD)==0) return (q);
	}
	return (NULL);
}
// FIM ESTRUTURA DISCIPLINAS //


// ESTRUTURA CURSO //
typedef struct ListaCurso {
       char *infoC;
       struct ListaCurso* proxC;
       struct ListaNota *notaC;
} Cursos;

Cursos* criaCursos (void){
	return NULL;
}

void printCursos (Cursos*l){
	if (l==NULL) puts("Lista vazia!");
	Cursos *q;
	for (q=l;q!=NULL;q=q->proxC){
		printf("%s\n",q->infoC);
	}
}

Cursos* insereCursos (Cursos* l) {
	char nomeC[MCHAR];
	/*puts("Nome curso:");*/ gets(nomeC);
	Cursos* novo=(Cursos*)malloc(sizeof(Cursos));
	if (novo==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	novo->infoC=(char*)malloc(strlen(nomeC)+1);
	if (novo->infoC==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	strcpy(novo->infoC,nomeC);
	Cursos* ant=NULL;
	Cursos* p=l;
	while ((p!=NULL)&&(strcmp(p->infoC,nomeC)<0)){
		ant=p;
		p=p->proxC;
	}
	if (ant==NULL) {
		novo->proxC=l;
		l=novo;
		return (l);
	}
	else {
		novo->proxC=ant->proxC;
		ant->proxC=novo;
	}
	return (l);
}

Cursos* buscaCursos (Cursos* l, char *nomeC) {
	Cursos *q;
	for (q=l;q!=NULL;q=q->proxC){
		if (strcmp(q->infoC,nomeC)==0) return (q);
	}
	return (NULL);
}
// FIM ESTRUTURA CURSO //


// ESTRUTURA SEXO //
typedef struct ListaSexo {
       char *infoS;
       struct ListaSexo *proxS;
       struct ListaNota *notaS;
} Sexo;

Sexo* criaLSexo(void){
	return NULL;
}

Sexo* criaSexo (Sexo* l){
	Sexo*nova=(Sexo*)malloc(sizeof(Sexo));
	if (nova==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	Sexo*novo=(Sexo*)malloc(sizeof(Sexo));
	if (novo==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	nova->infoS=(char*)malloc(2);
	if (nova->infoS==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	strcpy(nova->infoS,"f");
	novo->infoS=(char*)malloc(2);
	if (novo->infoS==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	strcpy(novo->infoS,"m");
	novo->proxS=NULL;
	nova->proxS=novo;
	l=nova;
	return (l);
}

Sexo* buscaSexo (Sexo* l, char *nomeS) {
	Sexo *q;
	for (q=l;q!=NULL;q=q->proxS){
		if (strcmp(q->infoS,nomeS)==0) return (q);
	}
	return (NULL);
}
// FIM ESTRUTURA SEXO //


// ESTRUTURAS MISTURADAS //
Notas* insereNotas(Alunos* A, Disciplinas* D, Cursos* C, Sexo* S, Notas *l) {
	char aluno[MCHAR], sexo[2], disci[MCHAR], curso [MCHAR];
	float nota;
	/*puts("Aluno:");*/ gets(aluno); /*puts("Sexo:");*/ scanf("%s",sexo); getchar(); /*puts("Disciplina:");*/ gets(disci);
	/*puts("Curso:");*/ gets(curso); /*puts("Nota:");*/ scanf("%f",&nota); getchar();
	Alunos*BA=buscaAlunos(A,aluno);
	Disciplinas*BD=buscaDisciplinas(D,disci);
	Cursos*BC=buscaCursos(C,curso);
	Sexo*BS=buscaSexo(S,sexo);
	Notas* novo=(Notas*)malloc(sizeof(Notas));
	if (novo==NULL) {
		puts("Erro de memoria. Saindo do programa..."); exit (1);
	}
	novo->numero=nota;
	novo->proxn=NULL;
	novo->proxna=NULL;
	novo->proxnd=NULL;
	novo->proxnc=NULL;
	novo->proxns=NULL;
	if (l==NULL) l=novo;
	else {
		Notas*aux=l;
		while (aux->proxn!=NULL) aux=aux->proxn;
		aux->proxn=novo;
	}
	if (BA->notaA==NULL) BA->notaA=novo;
	else {
		Notas* aux2=BA->notaA;
		while(aux2->proxna!=NULL) aux2=aux2->proxna;
		aux2->proxna=novo;
	}
	if (BD->notaD==NULL) BD->notaD=novo;
	else {
		Notas* aux3=BD->notaD;
		while(aux3->proxnd!=NULL) aux3=aux3->proxnd;
		aux3->proxnd=novo;
	}
	if (BC->notaC==NULL) BC->notaC=novo;
	else {
		Notas* aux4=BC->notaC;
		while(aux4->proxnc!=NULL) aux4=aux4->proxnc;
		aux4->proxnc=novo;
	}
	if (BS->notaS==NULL) BS->notaS=novo;
	else {
		Notas* aux5=BS->notaS;
		while(aux5->proxns!=NULL) aux5=aux5->proxns;
		aux5->proxns=novo;
	}
	return (l);
}

void printNotasAlunos (Alunos *A){
	char aluno[MCHAR];
	puts("Aluno:"); gets(aluno);
	Alunos*BA=buscaAlunos(A,aluno);
	if (BA->notaA==NULL) puts("Lista vazia!");
	Notas*q;
	for (q=BA->notaA;q!=NULL;q=q->proxna){
		printf("Notas aluno: %.1f\n",q->numero);
	}	
}

/*void printNotasDisciplinas (Disciplinas *D, char *disci){
	Disciplinas*BD=buscaDisciplinas(D,disci);
	if (BD->notaD==NULL) puts("Lista vazia!");
	Notas*q;
	for (q=BD->notaD;q!=NULL;q=q->proxnd){
		printf("Notas disciplinas: %.1f\n",q->numero);
	}	
}*/

/*void printNotasCursos (Cursos *C, char *curso){
	Cursos*BC=buscaCursos(C,curso);
	if (BC->notaC==NULL) puts("Lista vazia!");
	Notas*q;
	for (q=BC->notaC;q!=NULL;q=q->proxnc){
		printf("Notas cursos: %.1f\n",q->numero);
	}	
}*/

/*void printNotasSexo (Sexo *S, char *sexo){
	Sexo*BS=buscaSexo(S,sexo);
	if (BS->notaS==NULL) puts("Lista vazia!");
	Notas*q;
	for (q=BS->notaS;q!=NULL;q=q->proxns){
		printf("Notas sexo: %.1f\n",q->numero);
	}	
}*/

void MediaNotaAluno(Alunos *A, char *aluno){
	float soma=0; int cont=0;
	Alunos*BA=buscaAlunos(A,aluno);
	Notas*r;
	for (r=BA->notaA;r!=NULL;r=r->proxna){
		if (r->numero!=-1) {
			soma=soma+(r->numero);
			cont++;
		}
		}
	if ((soma==-1)&&(soma==0)) puts("0.0");
	else printf("%.1f\n",soma/cont);
}

void MediaNotaDisci (Disciplinas *D, char *disci){
	float soma=0; int cont=0;
	Disciplinas*BD=buscaDisciplinas(D,disci);
	Notas*r;
	for (r=BD->notaD;r!=NULL;r=r->proxnd){
		if (r->numero!=-1) {
			soma=soma+(r->numero);
			cont++;
		}
	}
	if ((soma==-1)||(soma==0)) puts("0.0");
	else printf("%.1f\n",soma/cont);
}

void MediaNotaCurso (Cursos *C, char *curso){
	float soma=0; int cont=0;
	Cursos*BC=buscaCursos(C,curso);
	Notas*r;
	for (r=BC->notaC;r!=NULL;r=r->proxnc){
		if (r->numero!=-1) {
			soma=soma+(r->numero);
			cont++;
		}
	}
	if ((soma==-1)||(soma==0)) puts("0.0");
	else printf("%.1f\n",soma/cont);
}

void MediaNotaSexo (Sexo *S, char *sexo){
	float soma=0; int cont=0;
	Sexo*BS=buscaSexo(S,sexo);
	Notas*r;
	for (r=BS->notaS;r!=NULL;r=r->proxns){
		if (r->numero!=-1) {
		soma=soma+(r->numero);
		cont++;
	}
	}
	if (soma==-1) puts("0.0");
	else printf("%.1f\n",soma/cont);
}

void MediaNota (Notas *l){
	float soma=0; int cont=0;
	Notas*r;
	for (r=l;r!=NULL;r=r->proxn){
		if (r->numero!=-1) {
		soma=soma+(r->numero);
		cont++;
		}
	}
	if ((soma==-1)||(soma==0)) puts("0.0");
	else printf("%.1f\n",soma/cont);
}

void NotaAlunoDisci(Alunos*A, Disciplinas* D){
	char aluno[MCHAR], disci[MCHAR];
	/*puts("Aluno:");*/ gets(aluno); /*puts("Disciplina:");*/ gets(disci);
	Alunos*BA=buscaAlunos(A,aluno);
	Disciplinas*BD=buscaDisciplinas(D,disci);
	Notas *u, *v;
	int z=0; float n;
	for (u=BA->notaA;u!=NULL;u=u->proxna) {
		for (v=BD->notaD;v!=NULL;v=v->proxnd) {
			if ((u->numero==v->numero)&&(u->numero!=-1)&&(v->numero!=-1)) {
				z=1; n=u->numero;
			}
		}	
	}
	if (z==1) printf("%.1f\n",n);
	else puts("-");
}

float buscaNota (Alunos*A, char *aluno, Disciplinas*D, char *disci, Cursos *C, char *curso, Sexo*S, char *sexo){
	Alunos*BA=buscaAlunos(A,aluno);
	Disciplinas*BD=buscaDisciplinas(D,disci);
	Cursos*BC=buscaCursos(C,curso);
	Sexo*BS=buscaSexo(S,sexo);
	Notas *x, *y, *z, *w;
	for (x=BA->notaA;x!=NULL;x=x->proxna){
		for (y=BD->notaD;y!=NULL;y=y->proxnd){
			for (z=BC->notaC;z!=NULL;z=z->proxnc){
				for (w=BS->notaS;w!=NULL;w=w->proxns){
					if ((x->numero==y->numero)&&(x->numero==z->numero)&&(x->numero==w->numero)) return(x->numero);
				}
			}
		}
	}
	return (0.0);
}


void removerNota (Alunos* A, char *aluno, Disciplinas* D, char *disci, Cursos* C, char *curso, Sexo* S, char *sexo, Notas *l){
	float n;
	n=buscaNota(A,aluno,D,disci,C,curso,S,sexo);
	Notas *p,*q;
	for (p=l,q=NULL;(p)&&(p->numero!=n);q=p,p=p->proxn);
	if (p) {
		if (q) q->proxn=p->proxn;
		else l=p->proxn;
	}
	p->numero=-1;
}
// FIM ESTRUTURAS MISTURADAS //


// FUNCOES UTILIZADAS NO MENU //
void ConsultaMAluno(Alunos *l){
	char aluno[MCHAR];
	/*puts("Aluno:");*/ gets(aluno);
	MediaNotaAluno(l,aluno);
}

void ConsultaMDisciplina(Disciplinas *l){
	char disci[MCHAR];
	/*puts("Disciplinas:");*/ gets(disci);
	MediaNotaDisci(l,disci);
}

void ConsultaMCurso(Cursos *l){
	char curso[MCHAR];
	/*puts("Curso:");*/ gets(curso);
	MediaNotaCurso(l,curso);
}

void ConsultaMSexo(Sexo *l){
	char sexo[2];
	/*puts("Sexo:");*/ scanf("%s",sexo); getchar();
	MediaNotaSexo(l,sexo);
}
// FIM FUNCOES USADAS NO MENU //

int main(void) {
	Alunos*lAlunos=criaAlunos();
	Notas*lNotas=criaNotas();
	Disciplinas*lDisci=criaDisciplinas();
	Cursos*lCursos=criaCursos();
	Sexo*lSexo=criaLSexo(); lSexo=criaSexo(lSexo);
	char op1, op2, op3, op4, op;
	char aluno[MCHAR], disci[MCHAR], curso[MCHAR], sexo[2];
	do {
		scanf("%c",&op1); op=getchar();
		switch (op1){
			case 'i': /*puts("Opcao 2:");*/ scanf("%c",&op2); getchar(); switch (op2){
				case 'a': lAlunos=insereAlunos(lAlunos); printf("\n"); break;
				case 'd': lDisci=insereDisciplinas(lDisci); printf("\n"); break;
				case 'c': lCursos=insereCursos(lCursos); printf("\n"); break;
				case 'n': lNotas=insereNotas(lAlunos,lDisci,lCursos,lSexo,lNotas); printf("\n"); break;
				}
				break;
			case 'm': /*puts("Opcao 2:");*/ scanf("%c",&op3); getchar(); switch (op3) {
				case 'a': ConsultaMAluno(lAlunos); printf("\n"); break;
				case 'd': ConsultaMDisciplina(lDisci); printf("\n"); break;
				case 'c': ConsultaMCurso(lCursos); printf("\n"); break;
				case 's': ConsultaMSexo(lSexo); printf("\n"); break;
				case 't': MediaNota(lNotas); printf("\n"); break;
				}
				break;
			case 'n': NotaAlunoDisci(lAlunos,lDisci); printf("\n"); break;
			case 'l': /*puts("Opcao 2:");*/ scanf("%c",&op4); getchar(); switch (op4) {
				case 'a': printAlunos(lAlunos); printf("\n"); break;
				case 'd': printDisciplinas(lDisci); printf("\n"); break;
				case 'c': printCursos(lCursos); printf("\n"); break;
				}
				break;
			case 'r': /*puts("Aluno:");*/ gets(aluno); /*puts("Sexo:");*/ scanf("%s",sexo); getchar();
				/*puts("Disciplina:");*/ gets(disci); /*puts("Curso:");*/ gets(curso);
				removerNota(lAlunos,aluno,lDisci,disci,lCursos,curso,lSexo,sexo,lNotas);
				printf("\n"); break;
		}
	} while (op1!='e');
	return 0;
}
