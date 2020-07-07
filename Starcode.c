#include <stdio.h>

#define MSJ_BIENVENIDA "\n\n\nBienvenido Padawan... Procederemos a evaluar sus condiciones...\n\n"

const int TILDE_A = 160;
const int TILDE_E = 130;
const int TILDE_I = 161;
const int TILDE_O = 162;
const int TILDE_U = 163;

#define MSJ_MIDICLORIANOS "\nIngrese la cantidad de Midiclorianos que pos%ce, debe ser un valor entre 100.0 a 2999.9 inclusive\n"

#define MSJ_MAL_INGRESO "\nMmm... ese ingreso no es correcto\n"

const float DEFAULT_MIDICLORIANOS = 0.0F;
const float MIN_MIDICLORIANOS = 100.0F;
const float MAX_MIDICLORIANOS = 2999.9F;

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

const float MULTIP_INFLUENCIA = 3.4F;
const float MULTIP_OSCURIDAD = 0.001117684315F;
const float VALOR_VOL_FLOJA_BUENA = 10.3F;
const float VALOR_VOL_MEDIA_ALTA = 54.5F;
const float VALOR_VOL_ENORME_PELIG = 103.4F;
const float DEF_VALOR_INGRESADO = 0.0F;

const float VALOR_PASADO_NORMAL_TRAGICO = 0.4F;
const float VALOR_PASADO_BUENO = 1.5F;


#define MSJ_MAYOR_PORCENTAJE "\n\nTransmite lo que has aprendido: fuerza, maestr%ca; pero insensatez, debilidad, fracaso tambi%cn.\n¡S%c, fracaso sobre todo! El mejor profesor, el fracaso es.\n\nBy Master Yoda\n\n"


int main(){

	char voluntad = DEFAULT_VOLUNTAD;

	char pasado = DEFAULT_PASADO;



	//void inicio(){

		printf(MSJ_BIENVENIDA);
	



	float recibir_midiclorianos();
		float midiclorianos_recibidos = DEFAULT_MIDICLORIANOS;
	
		do{

			printf(MSJ_MIDICLORIANOS, TILDE_E);
			scanf("%f", &midiclorianos_recibidos);

			if( (midiclorianos_recibidos < MIN_MIDICLORIANOS ) || (midiclorianos_recibidos > MAX_MIDICLORIANOS) ){
				printf (MSJ_MAL_INGRESO);
			}else{
				printf("Ingreso aceptado, continuemos...\n");
			}
		}while ( (midiclorianos_recibidos < MIN_MIDICLORIANOS) || (midiclorianos_recibidos > MAX_MIDICLORIANOS) );
	
	

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
			printf(MSJ_PASADO, TILDE_A);
			scanf(" %c", &pasado_recibido);
			if(pasado_recibido == PASADO_BUENO || pasado_recibido == PASADO_NORMAL || pasado_recibido == PASADO_TRAGICO){
				printf("Ingreso correcto");
			}else{
				printf(MSJ_MAL_INGRESO);
			}
		}while ( !(pasado_recibido == PASADO_BUENO || pasado_recibido == PASADO_NORMAL || pasado_recibido == PASADO_TRAGICO));
	


	



	float valores_voluntad(char voluntad);
		float multiplicador_voluntad = DEF_VALOR_INGRESADO;

		switch(voluntad){
			case VOLUNTAD_FLOJA:
				multiplicador_voluntad = VALOR_VOL_FLOJA_BUENA;
				break;
			case VOLUNTAD_BUENA:
				multiplicador_voluntad = VALOR_VOL_FLOJA_BUENA;
				break;
			case VOLUNTAD_MEDIA:
				multiplicador_voluntad = VALOR_VOL_MEDIA_ALTA;
				break;
			case VOLUNTAD_ALTA:
				multiplicador_voluntad = VALOR_VOL_MEDIA_ALTA;
				break;
			case VOLUNTAD_ENORME:
				multiplicador_voluntad = VALOR_VOL_ENORME_PELIG;
				break;
			case VOLUNTAD_PELIGROSA:
				multiplicador_voluntad = VALOR_VOL_ENORME_PELIG;
				break;
		}


	float valores_pasado(char pasado);
		float multiplicador_pasado = DEF_VALOR_INGRESADO;

		switch(pasado){
			case PASADO_BUENO:
				multiplicador_pasado = VALOR_PASADO_BUENO;
				break;
			case PASADO_NORMAL:
				multiplicador_pasado = VALOR_PASADO_NORMAL_TRAGICO;
				break;
			case PASADO_TRAGICO:
				multiplicador_pasado = VALOR_PASADO_NORMAL_TRAGICO;
				break;
		}


		float calculo_influencia();
		
		float influencia = midiclorianos_recibidos*MULTIP_INFLUENCIA;
		
		printf("\nSu fuerza en la influencia es: %f\n", influencia);


	float calcular_probabilidad_convertirse(float influencia, char voluntad, char pasado);

		float probabilidad_convertirse = voluntad + ((MULTIP_OSCURIDAD*influencia)/pasado);

		printf("Su probabilidad de convertirse es: %f porciento.", probabilidad_convertirse);



	

	return 0;

}
