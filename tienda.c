#include  <stdio.h>

typedef struct{
    char articulo[10];
    int valor,cantidad;
}item;

void usurandoAndo (item repeticion[],int articulo){
    int usura;
    for(usura = 0; usura < articulo; usura++ ) repeticion[usura].valor *= 1.50;
    return;
}

int main(){
 
    int i, articulo,total =0;
    FILE *paquita = fopen ("paquita.txt","w" ) ;
    printf("cuantas articulos deseas comprar: ") ; 
    scanf("%d",&articulo) ;
    item repeticion [articulo] ;
    for( i = 0; i < articulo; i++){
        printf("******** item [%02d]*************\n") ;
        printf( "Escribe el nombre del articulo: " ) ;
        scanf( "%s",&repeticion[i].articulo) ;
        printf( "Escribe el valor del articulo: " ) ;
	    scanf( "%d",&repeticion[i].valor );
        printf( "Escribe la cantidad que deseas llevar: " ) ;
	    scanf( "%d", &repeticion[i].cantidad ) ;
    }
    total = 0 ;
    printf( "============================\n" ) ;
	printf( "TIENDA PAQUITA LA DEL BARRIO\n" ) ;
	printf( "\n" );
    printf( "============================\n" ) ;
    printf( "item    valor unidad cantidad valor total\n") ;
    printf(	"============================================\n" ) ;
    
    for( i = 0; i < articulo; i++ ){
        printf("%-10s %8d %8d %11d\n",
        	repeticion[i].articulo,
        	repeticion[i].valor,
        	repeticion[i].cantidad,
        	repeticion[i].valor * repeticion[i].cantidad);
        total += repeticion[i].valor * repeticion[i].cantidad;
    }
    printf("============================================\n") ;
    printf("                         GRAN TOTAL %d" ,total) ;
    
    printf( "\n" ) ;
    
    
    printf( "============================\n" ) ;
	printf( "TIENDA PAQUITA LA DEL BARRIO\n" ) ;
	printf( "\n" );
    printf( "============================\n" ) ;
    printf( "item    valor unidad cantidad valor total\n") ;
    printf(	"============================================\n" ) ;
    
    for( i = 0; i < articulo; i++){
        printf("%-10s %8d %8d %11d\n",
        	repeticion[i].articulo,
        	repeticion[i].valor,
        	repeticion[i].cantidad,
        	repeticion[i].valor * repeticion[i].cantidad);
        total += repeticion[i].valor * repeticion[i].cantidad;
    }
    printf("============================================\n") ;
    printf("                         GRAN TOTAL %d" ,total) ;
    total = 0 ;
    usurandoAndo ( repeticion, articulo ) ;
    
	total = 0 ;
	fprintf( paquita,"============================\n" ) ;
	fprintf( paquita,"TIENDA PAQUITA LA DEL BARRIO\n" ) ;
	fprintf( paquita,"\n" ) ;
    fprintf( paquita,"============================\n" ) ;
    fprintf( paquita,"item    valor unidad cantidad valor total\n");
    fprintf( paquita,	"============================================\n" ) ;
    
    for( i = 0; i < articulo; i++){
        fprintf (paquita, "%-10s %8d %8d %11d\n",
        	repeticion[i].articulo,
        	repeticion[i].valor,
        	repeticion[i].cantidad,
        	repeticion[i].valor * repeticion[i].cantidad);
        total += repeticion[i].valor * repeticion[i].cantidad;
    }
    fprintf( paquita, "============================================\n") ;
	fprintf( paquita, "                         GRAN TOTAL %d" ,total) ;
    return 0 ;
}
