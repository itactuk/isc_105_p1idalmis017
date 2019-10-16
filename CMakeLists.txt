cmake_minimum_required(VERSION 3.14)
project(Ex1ISC205Sept2019 C)

set(CMAKE_C_STANDARD 99)

include_directories(librerias_comunes)

add_executable(punto1Main punto1/punto1Main.c punto1/punto1Lib.c punto1/punto1Lib.h)
add_executable(punto1Minunit punto1/punto1Minunit.c punto1/punto1Lib.c punto1/punto1Lib.h)

add_executable(punto2Main punto2/punto2Main.c punto2/punto2Lib.c punto2/punto2Lib.h punto1/punto1Lib.c punto1/punto1Lib.h)
add_executable(punto2Minunit punto2/punto2Minunit.c punto2/punto2Lib.c punto2/punto2Lib.h punto1/punto1Lib.c punto1/punto1Lib.h)

add_executable(punto3Main punto3/punto3Main.c punto3/punto3Lib.c punto3/punto3Lib.h)
add_executable(punto3Minunit punto3/punto3Minunit.c punto3/punto3Lib.c punto3/punto3Lib.h)

add_executable(punto4Main punto4/punto4Main.c punto4/punto4Lib.c punto4/punto4Lib.h)
add_executable(punto4Minunit punto4/punto4Minunit.c punto4/punto4Lib.c punto4/punto4Lib.h)