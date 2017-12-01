typedef struct viagem Viagem; 
 
Viagem *nova_v(int dia, int mes, int ano, char *cidade, char *pais, int periodo); 
void libera_v(Viagem *viagem); 
void acessa_v(Viagem *viagem, int *dia, int *mes, int *ano, char *cidade, char *pais, int *periodo); 
void atribui_v(Viagem *viagem, int dia, int mes, int ano, char *cidade, char *pais, int periodo); 
void atribui_direita_v(Viagem *viagem, Viagem *direita); 
Viagem *acessa_direita_v(Viagem *viagem); 
void atribui_esquerda_v(Viagem *viagem, Viagem *esquerda); 
Viagem *acessa_esquerda_v(Viagem *viagem); 
void atribui_pai_v(Viagem *viagem, Viagem *pai);
Viagem *acessa_pai_v(Viagem *viagem);
Viagem *Minimo(Viagem* viagem);
Viagem *Sucessor(Viagem* viagem);
void acessa_id_v(Viagem* viagem);
void Transplantar(Viagem* viagem1, Viagem* viagem2);
void Remover(Viagem );
int tamanho_v(); 