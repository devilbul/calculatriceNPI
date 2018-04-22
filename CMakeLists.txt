cmake_minimum_required(VERSION 3.9)
project(projetCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(projetCpp src/main.cpp src/test.cpp src/expression/Expression.cpp src/expression/Expression.h src/expression/Operateur.cpp src/expression/Operateur.h src/expression/Constante.cpp src/expression/Constante.h src/expression/operation/Addition.cpp src/expression/operation/Addition.h src/expression/operation/Multiplication.cpp src/expression/operation/Multiplication.h src/expression/operation/Soustraction.cpp src/expression/operation/Soustraction.h src/expression/operation/Division.cpp src/expression/operation/Division.h src/expression/Variable.cpp src/expression/Variable.h src/fonction/SaisieUtilisateur.cpp src/fonction/SaisieUtilisateur.h src/fonction/Fichier.cpp src/fonction/Fichier.h src/utils/Utils.cpp src/utils/Utils.h src/fonction/Traitement.cpp src/fonction/Traitement.h src/symbole/Table.cpp src/symbole/Table.h)