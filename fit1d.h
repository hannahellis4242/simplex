#ifndef FIT_1_D_H
#define FIT_1_D_H

#include <functional>

#include "Simplex1D.h"
namespace simplex
{
using OneDFunction = std::function< double(const double) > ;
Simplex1D step( Simplex1D , const OneDFunction & );
Simplex1D fit(Simplex1D,const OneDFunction &, const double);
}
#endif
