/*
 * File:   main.c
 * Author: 19180077
 *
 * Created on 9 de Mar�o de 2020, 09:38
 */


#include <xc.h>                 // Inclui biblioteca padr�o do compilador XC8 
#include "config.h"             // Inclui arq. de config. (biblioteca) local.

void main(void)                 // Fun��o principal = main.
{                               // In�cio do bloco da fun��o main.
    PORTDbits.RD0 = 0;          // Inicia RD0 com o valor 0.
    TRISDbits.TRISD0 = 0;       // Configura RD0 como Sa�da.
    
    while( 1 )                  // La�o de repeti��o infinito.
    {                           // Inicio do la�o de repeti��o.
        PORTDbits.RD0 = 1;      // Liga RD0.
        __delay_ms(500);        // Espera 500 ms.
        PORTDbits.RD0 = 0;      // Desliga RD0.
        __delay_ms(500);        // Espera 500 ms.
    }                           // Fim do la�o de repeti��o.
    return;                     // Caracteriza main como uma fun��o sem retorno.
}                               // Fim do bloco da fun��o main.
