/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Gabo
 *
 * Created on 3 de septiembre de 2022, 01:31 PM
 */

#include <iostream>
#include <iomanip>
#include "funcionesAuxiliares.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    crearCargarLibrosBin();
    verificarLibrosBin();
    
    crearCargarPrestamosUsuariosBin();
    verificarPrestamosBin();    
    verificarUsuariosBin();
    
    //actualizarLibrosBin();
    //imprimeReporteLibrosBin();
    return 0;
}

