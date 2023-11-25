/*
    
  Biblioteca: Osciladores
  Autor:      Luiz Gonzaga Franco Michelmann
  Data:       25/11/2023

  Créditos:   WR Kits

  Para usar os demais tempos, descomentar a linha abaixo

*/

#include <Osciladores.h>

Osciladores saida1(9);

void setup() 
{
  // não é necessario pois a biblioteca já configura o pino como saida
}

void loop() 
{

  saida1.osc_1k();
  // saida1.osc_5k();
  // saida1.osc_10k();
  // saida1.osc_50k();
   
}
