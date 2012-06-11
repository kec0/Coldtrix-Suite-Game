//   estado.c
//
// Authors:
//   Luis Antonio �beda Medina (lubeme23@gmail.com)
//   H�ctor Veiga Ortiz (hveiga@hawk.iit.edu)
//
// Copyright 2010 H�ctor Veiga Ortiz and Luis Antonio �beda Medina.
//
// This file is part of Coldtrix Game Suite.
// 
// Coldtrix Game Suite is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Coldtrix Game Suite is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Coldtrix Game Suite.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#include "estado.h"

Testado estado; //Creamos el objeto global estado

//------------------------------------------------------
// void estadoInic(void)
//
// Descripci�n:
//   Inicializa el objeto estado
//------------------------------------------------------
void estadoInic(void) {
	estado.jugando = NO_JUGANDO;
	estado.nivel = 0;
	estado.nivelIncremental = 0;
	estado.juegoBloques =FALSE;
	estado.juego = 0;
	estado.primeraPieza = PPIEZA;
	estado.primeraSerp = PSERP;
	estado.recursoLibre = LIBRE;
}