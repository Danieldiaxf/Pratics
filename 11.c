
#include <stdio.h>

float x,y;

int main( ){

    printf( "Insira o valor de X: " );
    scanf( "%f", &x );

    printf( "Insira o valor de Y: " );
    scanf( "%f", &y );

    if( x > y ){

        printf( "x > y\n" );

    }else if( y > x ){

        printf( "y > x\n" );

    }else{

        printf( "x = y\n" );

    }


    return 0;
}
