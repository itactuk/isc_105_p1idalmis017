//
// Created by Ivan Tactuk on 10/13/2019.
//

#include <minunit.h>

#include "punto2Lib.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_ParRangoValido) {
    /**
     * El mcd de 6 y 1 es 1
     * El mcd de 6 y 2 es 2
     * El mcd de 6 y 3 es 3
     * El mcd de 6 y 4 es 2
     * El mcd de 6 y 5 es 1
     * El mcd de 6 y 6 es 6
     * El mcd de 6 y 7 es 1
     * El mcd de 6 y 8 es 2
     * La sumatoria de todos los mcd pares es 2 + 2 + 6 + 2
     * Por lo tanto el resultado es 12
     */
    mu_assert_int_eq(12, sumatoria_mcd(6, 1, 8));
}

MU_TEST(test_ImparParRangoValido) {
    /**
     * El mcd de 7 y 1 es 1
     * El mcd de 7 y 2 es 1
     * El mcd de 7 y 3 es 1
     * El mcd de 7 y 4 es 1
     * El mcd de 7 y 5 es 1
     * El mcd de 7 y 6 es 1
     * El mcd de 7 y 7 es 7
     * El mcd de 7 y 8 es 1
     * La sumatoria de todos los mcd pares es 0, ya que todos los mcd son impares
     */
    mu_assert_int_eq(0, sumatoria_mcd(7, 1, 8));
}

MU_TEST(test_ParParRangoInValido) {
    mu_assert_int_eq(0, sumatoria_mcd(8, 8, 1));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_ParRangoValido);
    MU_RUN_TEST(test_ImparParRangoValido);
    MU_RUN_TEST(test_ParParRangoInValido);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}