#include<stdio.h>
#include<stdlib.h>
/*
*Funcion
*Principal
*/
int main(){
	float numf = 1.2;
	int numI = 0, i = 0;
	printf( "Ingrese un numero: " );
	scanf( "%s" ,&numI );
	if( numI > = 10){
		prinf( "Hola mundo!");
	}else{
		printf( "Mundo Hola");
	}
	/*Funcion For*/
	for( i = 0; i < numI; i ++){
		printf( "k" );
	}
	/*Funcion While*/
	while( numI == 0){
		printf( "j" );
		numI++;
	}
	/*Funcion Do-While*/
	do{
		printf( "k");
		numI++;
	}
	while( numI > = 0 );
	/*Funcion Switch*/
	switch( numI ){
		case 1: printf( );
		break;
		default: printf( );
		break:
	}	
	return 0;
}
