//
// Created by usama on 3/5/18.
//

#include "Fractions.h"

Fractions::Fractions() {
    numerator = 1;
    denominator = 1;
}

Fractions::Fractions(double num, double den) {
    numerator = num;
    if(den == 0) denominator = 1;
    else denominator = den;

}


