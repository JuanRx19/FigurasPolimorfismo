cmake_minimum_required(VERSION 3.21)
project(FigurasGeometricas)

set(CMAKE_CXX_STANDARD 14)

add_executable(FigurasGeometricas main.cpp FiguraGeometrica.cpp FiguraGeometrica.h Circulo.cpp Circulo.h Cuadrado.cpp Cuadrado.h Rectangulo.cpp Rectangulo.h View.cpp View.h TrianguloRectangulo.cpp TrianguloRectangulo.h)
