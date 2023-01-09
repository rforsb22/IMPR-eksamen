/**
 * Top down forfinelse af match_girl:
 * int main med funktionskald.
 * kaldet defineres
 * Compileren skal vide at der eksistere en funktion så "void prn_match_girl(void);" skrives som prototype
 * Nu findes der 4 andre funktioner som pt ikke eksitere i definitionen.
 * 4 funktioner defineres.
 * Compileren kan ikke se fremad, derfor skal der skrives prototyper for hver af kropsdelene
 *  Ny .c fil laves med grafikken for hver af kropsdelene (primitivt)
 *  En .h fil laves med 3 prototyper for de 3 funktion, prn_circle(void);, prn_horisontal_line(void); og prn_reverse_v(void);
 *  denne .h fil includeres i hovedfilen, med det 5 prototyper under, og før main.
 */


#include "char-graphics.h"
//prototype
void prn_match_girl(void);

void prn_head(void);
void prn_arms(void);
void prn_body(void);
void prn_legs(void);

int main(void){
    prn_match_girl(); //funktionen kaldes her
    return 0;
}

//definition på funktion med 4 andre funktioner, som skal defineres.
void prn_match_girl(void){
    prn_head();
    prn_arms();
    prn_body();
    prn_legs();
}

void prn_head(void){
    prn_circle();             //bruges i .h filen
}

void prn_arms(void){
    prn_horisontal_line();    //bruges i .h filen
}

void prn_body(void){
    prn_reverse_v();         //bruges i .h filen
    prn_horisontal_line();
}

void prn_legs(void){
    prn_reverse_v();
}

