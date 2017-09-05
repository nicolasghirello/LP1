#include <iostream>
#include <algorithm>
#include "turma.h"

Turma::Turma() {}

Turma::~Turma() {}

int 
Turma::addAluno(AlunoTurma _aluno) {
	/* Adiciona um aluno na lista de alunos */
	return -1;
}

Aluno* 
Turma::buscaAlunoPorNome (std::string _nome) {
	/* Busca por um aluno na lista de alunos com o nome indicado. 
	   Retorna um apontador para o objeto aluno se encontrado. 
	   Retorna nulo, caso não encontre um aluno com o nome indicado. */

	if( std::find(vector.begin(), vector.end(), _nome) != vector.end() ){
	   return 1;                                                              ////ALTERAR PARA O PONTEIRO DO OBJETO
	}
	else{
		return NULL;
	}
}

Aluno* 
Turma::buscaAlunoPorMatricula (std::string _matricula) {
	/* Busca por um aluno na lista de alunos com a matricula indicada. 
       Retorna um apontador para o objeto aluno se encontrado. 
       Retorna nulo, caso não encontre um aluno com a matricula indicada. */
	if ( std::find(vector.begin(), vector.end(), _nome) != vector.end() ){
	   return 1;                                                              ////ALTERAR PARA O PONTEIRO DO OBJETO
	}
	else{
	   return NULL;
	}
}

int 
Turma::removeAlunoPorNome (std::string _nome) {
	/* Remove o aluno com o nome indicado.
	   Retorna 0 caso o aluno seja encontrado e removido com sucesso.
	   Retorna -1 em caso contrário.
	   Dica: Para remover um elemento do vetor, utilize o metodo erase().
	*/

	AlunoTurma.erase(std::remove(AlunoTurma.begin(), AlunoTurma.end(), _nome), AlunoTurma.end());
	return -1;
}

int 
Turma::removeAlunoPorMatricula (std::string _matricula) {
    /* Remove o aluno com a matricula indicada.
	   Retorna 0 caso o aluno seja encontrado e removido com sucesso.
	   Retorna -1 em caso contrário.
	   Dica: Para remover um elemento do vetor, utilize o metodo erase().
	*/
	
	AlunoTurma.erase(std::remove(AlunoTurma.begin(), AlunoTurma.end(), _matricula), AlunoTurma.end());
	return -1;
}

void 
Turma::listaAlunos() {
	/* Lista os dados de todos os alunos da turma, incluindo o total de faltas e nota. Utilize a sobrecarga do operador de inserção para a impressão dos dados do aluno. Deve listar ainda a quantidade de alunos e a média das notas dos alunos nesta turma.
	*/
}