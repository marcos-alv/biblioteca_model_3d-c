/*
 *********************************************************************************
 *
 * Título: arquivo
 *
 * Autor: Marcos Alves
 *
 * Data de Criação: 31/10/2015

 * Última modificação: 31/10/2015
 *
 * Descrição: Definição do módulo arquivo
 *
 *********************************************************************************
 */

#ifndef ARQUIVO_H
#define ARQUIVO_H

#include "fila.h" /* tFila, insere_fila */

/* Alusões para as funcões contida na implementação de arquivo */

/* ================================== Nota =============================================== 

- As funções a seguir seguem o padrão de retorna um inteiro:

  [1] - Operação realizada com sucesso

  [0] - Operação falhou

  ========================================================================================
*/

extern int carrega_obj(tFila *fila, char tipo, char *caminho); /* carrega pontos do arquivo de extensão (.obj) e passa p fila */

extern int carrega_x3d(tFila *fila, char tipo, char *caminho); /* carrega pontos do arquivo de extensão (.x3d) e passa p fila */
  

#endif //ARQUIVO_H