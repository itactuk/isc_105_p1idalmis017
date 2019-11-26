//
// Created by Ivan Tactuk on 10/13/2019.
//

#include <minunit.h>

#include "punto1Lib.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_ImPar) {
    mu_assert_int_eq(5, mcd(15, 20));
}

MU_TEST(test_Par) {
    mu_assert_int_eq(4, mcd(8, 12));
}

MU_TEST(test_Primo) {
    mu_assert_int_eq(1, mcd(5, 7));
}

MU_TEST(test_NadaComun) {
    mu_assert_int_eq(1, mcd(8, 15));
}

MU_TEST(test_MismoNumero) {
    mu_assert_int_eq(8, mcd(8, 8));
}

MU_TEST(test_Multiplo) {
    mu_assert_int_eq(8, mcd(8, 16));
}

MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_ImPar);
        MU_RUN_TEST(test_Par);
        MU_RUN_TEST(test_Primo);
        MU_RUN_TEST(test_NadaComun);
        MU_RUN_TEST(test_MismoNumero);
        MU_RUN_TEST(test_Multiplo);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}