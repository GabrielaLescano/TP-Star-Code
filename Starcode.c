#include <stdio.h>

#define MSJ_BIENVENIDA "\n\n\nBienvenido Padawan... Procederemos a evaluar sus condiciones...\n\n"

const int TILDE_A = 160;
const int TILDE_E = 130;
const int TILDE_I = 161;
const int TILDE_O = 162;
const int TILDE_U = 163;

#define MSJ_INFLUENCIA "\nIngrese la cantidad de Midiclorianos que pos%ce, debe ser un valor entre 100.0 a 2999.9 inclusive\n"

#define MSJ_MAL_INGRESO "\nMmm... ese ingreso no es correcto\n"

const float DEFAULT_INFLUENCIA = 0.0;
const float MIN_INFLUENCIA = 100.0;
const float MAX_INFLUENCIA = 2999.9;
#include <stdio.h>

#define MSJ_BIENVENIDA "\n\n\nBienvenido Padawan... Procederemos a evaluar sus condiciones...\n\n"

const int TILDE_A = 160;
const int TILDE_E = 130;
const int TILDE_I = 161;
const int TILDE_O = 162;
const int TILDE_U = 163;

#define MSJ_INFLUENCIA "\nIngrese la cantidad de Midiclorianos que pos%ce, debe ser un valor entre 100.0 a 2999.9 inclusive\n"

#define MSJ_MAL_INGRESO "\nMmm... ese ingreso no es correcto\n"

const float DEFAULT_INFLUENCIA = 0.0F;
const float MIN_INFLUENCIA = 100.0F;
const float MAX_INFLUENCIA = 2999.9F;

#define MSJ_VOLUNTAD "\n\nIngrese su nivel de voluntad\nFloja [f] - Buena [b] - Media [m]\nAlta [a] - Enorme [e] - Peligrosa [p]\n\n"

#define VOLUNTAD_FLOJA 'f'
#define VOLUNTAD_BUENA 'b'
#define VOLUNTAD_MEDIA 'm'
#define VOLUNTAD_ALTA 'a'
#define VOLUNTAD_ENORME 'e'
#define VOLUNTAD_PELIGROSA 'p'
const char DEFAULT_VOLUNTAD = 'z';



#define MSJ_PASADO "\n\nDescriba su pasado\n Bueno [b] - Normal [n] - Tr%cgico [t]\n\n"

#define PASADO_BUENO 'b'
#define PASADO_NORMAL 'n'
#define PASADO_TRAGICO 't'
const char DEFAULT_PASADO = 'y';

#define MSJ_MAYOR_PORCENTAJE "\n\nTransmite lo que has aprendido: fuerza, maestr%ca; pero insensatez, debilidad, fracaso tambi%cn.\n¡S%c, fracaso sobre todo! El mejor profesor, el fracaso es.\n\nBy Master Yoda\n\n"


int main(){


		printf(MSJ_BIENVENIDA);



	float recibir_influencia();
		float influencia_recibida = DEFAULT_INFLUENCIA;
	
		do{

			printf(MSJ_INFLUENCIA, TILDE_E);
			scanf("%f", &influencia_recibida);

			if( (influencia_recibida < MIN_INFLUENCIA ) || (influencia_recibida > MAX_INFLUENCIA) ){

#define MSJ_VOLUNTAD "\n\nIngrese su nivel de voluntad\nFloja [f] - Buena [b] - Media [m]\nAlta [a] - Enorme [e] - Peligrosa [p]\n\n"

#define VOLUNTAD_FLOJA 'f'
#define VOLUNTAD_BUENA 'b'
#define VOLUNTAD_MEDIA 'm'
#define VOLUNTAD_ALTA 'a'
#define VOLUNTAD_ENORME 'e'
#define VOLUNTAD_PELIGROSA 'p'

#define MSJ_PASADO "\n\nDescriba su pasado\n Bueno [b] - Normal [n] - Tr%cgico [n]\n\n"

#define MSJ_MAYOR_PORCENTAJE "\n\nTransmite lo que has aprendido: fuerza, maestr%ca; pero insensatez, debilidad, fracaso tambi%cn.\n¡S%c, fracaso sobre todo! El mejor profesor, el fracaso es.\n\nBy Master Yoda\n\n"


int main(){				printf (MSJ_MAL_INGRESO);
			}else{
				printf("Ingreso aceptado, continuemos...\n");
			}
		}while ( (influencia_recibida < MIN_INFLUENCIA) || (influencia_recibida > MAX_INFLUENCIA) );
	
	

	char recibir_voluntad();
		char voluntad_recibida = DEFAULT_VOLUNTAD;

		do{
			printf(MSJ_VOLUNTAD);
			scanf(" %c", &voluntad_recibida);

			if(voluntad_recibida == VOLUNTAD_FLOJA || voluntad_recibida == VOLUNTAD_BUENA || voluntad_recibida == VOLUNTAD_MEDIA || voluntad_recibida == VOLUNTAD_ALTA || voluntad_recibida == VOLUNTAD_ENORME || voluntad_recibida == VOLUNTAD_PELIGROSA){
				printf("Ingreso de voluntad aceptado");
			}else{
				printf(MSJ_MAL_INGRESO);
			}
		}while ( (voluntad_recibida != VOLUNTAD_FLOJA) && (voluntad_recibida != VOLUNTAD_BUENA) && (voluntad_recibida != VOLUNTAD_MEDIA) && (voluntad_recibida != VOLUNTAD_ALTA) && (voluntad_recibida != VOLUNTAD_ENORME) && (voluntad_recibida != VOLUNTAD_PELIGROSA));
	


	char recibir_pasado();
		char pasado_recibido = DEFAULT_PASADO;

		do{
			printf(MSJ_PASADO);
			scanf(" %c", &pasado_recibido);
			if(pasado_recibido == PASADO_BUENO || pasado_recibido == PASADO_NORMAL || pasado_recibido == PASADO_TRAGICO){
				printf("Ingreso correcto");
			}else{
				printf(MSJ_MAL_INGRESO);
			}
		}while ( !(pasado_recibido == PASADO_BUENO || pasado_recibido == PASADO_NORMAL || pasado_recibido == PASADO_TRAGICO));
	


	return 0;


}
