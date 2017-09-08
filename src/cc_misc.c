#include "cc_misc.h"
#include "cc_dict.h"
#include <main.h>

int line_count = 1;

/*
* Tabela de simbolos onde sao armazenados os tokens
* Item 1.3 , etapa 1
*/
comp_dict_t *symbol_table;	

/*
* Percorre os itens do ponteiro de overflow da 
* da estrutura {comp_dict_item} e imprime sua key e 
* valor(linha onde ocorreu o lexema)
*/
void dict_item_list_print(comp_dict_item_t * item)
{
  while (item != NULL) {
    cc_dict_etapa_1_print_entrada(item->key,item->value);
    item = item->next;
  }
}


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
	
}

void main_finalize (void)
{

}

void comp_print_table (void)
{
 	
	printf("Imprimindo tabela de simbolos\n" );
	
	for (int i = 0; i < symbol_table->size; ++i) {
	    if (symbol_table->data[i]) {

	      	cc_dict_etapa_1_print_entrada(symbol_table->data[i]->key, symbol_table->data[i]->value);

	      	if (symbol_table->data[i]->next)	//entra aqui se ocorreu um caso de overflow
	      		dict_item_list_print(symbol_table->data[i]->next);
	     	 
	    }
	    
  	}
	
}


