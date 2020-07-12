#include <stdio.h>


#define MSJ_BIENVENIDA "\n\n\nBienvenido Padawan... Procederemos a evaluar sus condiciones...\n\n"

const int TILDE_A = 160;
const int TILDE_E = 130;
const int TILDE_I = 161;
const int TILDE_O = 162;
const int TILDE_U = 163;
const int SIMBOLO_PORCIENTO = 37;

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

const float DEF_VALOR_VOLUNTAD = 1.2F;
const float DEF_VALOR_PASADO = 0.3F;
const float DEF_VALOR_INGRESADO = 0.0F;

const float VALOR_PASADO_NORMAL_TRAGICO = 0.4F;
const float VALOR_PASADO_BUENO = 1.5F;

const int ALTO_PORCENTAJE_CONVERTIRSE = 80;

const int PORCENTAJE_VOLUNTAD = 20;
const int PORCENTAJE_INFLUENCIA = 75;


#define MSJ_ALTO_PORCENTAJE "\n\nTransmite lo que has aprendido: fuerza, maestr%ca; pero insensatez, debilidad, fracaso tambi%cn.\n¡S%c, fracaso sobre todo! El mejor profesor, el fracaso es.\n\nBy Master Yoda\n\n"






void inicio(){

	printf(MSJ_BIENVENIDA);
	
	}


float recibir_midiclorianos(){
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
	
	return midiclorianos_recibidos;

}


char recibir_voluntad(){
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
	
	return voluntad_recibida;

}


char recibir_pasado(){
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

	return pasado_recibido;

}


float valores_voluntad(char voluntad){
	float multiplicador_voluntad = DEF_VALOR_VOLUNTAD;

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

	return multiplicador_voluntad;

}


float valores_pasado(char pasado){
	float multiplicador_pasado = DEF_VALOR_PASADO;

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

	return multiplicador_pasado;

}


float calcular_influencia(float midiclorianos){
	float influencia = (midiclorianos)*MULTIP_INFLUENCIA;

	return influencia;

}


float calcular_probabilidad_convertirse(float influencia, float valor_voluntad_recibida, float valor_pasado_recibido){
	float probabilidad_convertirse = valor_voluntad_recibida+(MULTIP_OSCURIDAD*influencia)/valor_pasado_recibido;

	return probabilidad_convertirse;

}


int calcular_convertirse_jedi(float valor_voluntad_recibida, float influencia){
	int tiempo_convertirse_jedi;
	int voluntad_jedi = (int)valor_voluntad_recibida+((int)valor_voluntad_recibida*PORCENTAJE_VOLUNTAD/100);
	int influencia_jedi = (int)influencia-((int)influencia*PORCENTAJE_INFLUENCIA/100);

	tiempo_convertirse_jedi = influencia_jedi/voluntad_jedi;

	return tiempo_convertirse_jedi;
}



int main(){

	float midiclorianos = DEFAULT_MIDICLORIANOS;
	char voluntad = DEFAULT_VOLUNTAD;
	char pasado = DEFAULT_PASADO;
	float probabilidad_convertirse = 0.0F;

	float valor_voluntad_recibida = DEF_VALOR_VOLUNTAD;
	float valor_pasado_recibido = DEF_VALOR_PASADO;

	float influencia = 0.0F;
	int meses_convertirse_jedi = -1;


	inicio();

	midiclorianos = recibir_midiclorianos();

	voluntad = recibir_voluntad();

	pasado = recibir_pasado();

	influencia = calcular_influencia(midiclorianos);

	valor_voluntad_recibida = valores_voluntad(voluntad);

	valor_pasado_recibido = valores_pasado(pasado);

	

	printf("\n\nEl an%clisis ha finalizado.\nProceda a hablar con su maestro.\n\n",TILDE_A);
	
	printf("\nMostrando resultados obtenidos...\n");

	printf("\nSu fuerza en la influencia es: %f\n", influencia);

	probabilidad_convertirse = calcular_probabilidad_convertirse(influencia, valor_voluntad_recibida, valor_pasado_recibido);

	printf("\nSu probabilidad de convertirse al lado oscuro es: %f %c.\n", probabilidad_convertirse,SIMBOLO_PORCIENTO);

	meses_convertirse_jedi = calcular_convertirse_jedi(valor_voluntad_recibida,influencia);

	printf("Tiempo restante para convertirse en Jedi: %i meses.", meses_convertirse_jedi);

	if(probabilidad_convertirse > ALTO_PORCENTAJE_CONVERTIRSE){
		printf(MSJ_ALTO_PORCENTAJE, TILDE_I, TILDE_E, TILDE_I);
	}

	return 0;

}
