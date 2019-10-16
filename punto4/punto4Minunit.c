//
// Created by Ivan Tactuk on 10/13/2019.
//

#include <minunit.h>

#include "punto4Lib.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_A) {
    mu_assert_int_eq(4, puntos_por_letras('A'));
}

MU_TEST(test_B) {
    mu_assert_int_eq(3, puntos_por_letras('B'));
}

MU_TEST(test_C) {
    mu_assert_int_eq(2, puntos_por_letras('C'));
}

MU_TEST(test_D) {
    mu_assert_int_eq(1, puntos_por_letras('D'));
}

MU_TEST(test_F) {
    mu_assert_int_eq(0, puntos_por_letras('F'));
}

MU_TEST(test_puntos) {
    mu_assert_int_eq(12, puntos_por_materia(4, 3));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_A);
    MU_RUN_TEST(test_B);
    MU_RUN_TEST(test_C);
    MU_RUN_TEST(test_D);
    MU_RUN_TEST(test_F);
    MU_RUN_TEST(test_puntos);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}