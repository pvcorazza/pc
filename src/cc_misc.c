#include "cc_misc.h"
#include "cc_dict.h"

int line_count = 1;

comp_dict_t *symbol_table; 

int comp_get_line_number (void)
{
  //implemente esta função
  return line_count;
}

void yyerror (char const *mensagem)
{
  fprintf (stderr, "%s\n", mensagem); //altere para que apareça a linha
}

void main_init (int argc, char **argv)
{
  //implemente esta função com rotinas de inicialização, se necessário

	
	symbol_table = dict_new();		//Cria tabela de simbolos
	//printf("Criado tabela de simbolos\n\n");
}

void main_finalize (void)
{

	//dict_debug_print(symbol_table);
  
}

void comp_print_table (void)
{
  //para cada entrada na tabela de símbolos
  //Etapa 1: chame a função cc_dict_etapa_1_print_entrada
  //implemente esta função
    
}
