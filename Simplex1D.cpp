#include "Simplex1D.h"
#include <algorithm>

namespace simplex
{
Simplex1D::Simplex1D(const double a , const double b)
: min_(std::min(a,b)),max_(std::max(a,b)){}

Simplex1D::min() const
{
	return min_ ;
}

Simplex1D::max() const
{
	return max_;
}
Simplex1D::size() const
{
	return max_ - min_ ;
}
}
