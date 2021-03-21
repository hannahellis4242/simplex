#ifndef SIMPLEX_2_D_H
#define SIMPLEX_2_D_H

#include "Point2D.h"
#include <array>

namespace simplex
{
class Simplex2D
{
private:
	std::array<Point2D , 3> points_;
public:
	Simplex2D( const Point2D & ,const Point2D &,const Point2D & );
	const Point2D & a() const ;
	const Point2D & b() const ;
	const Point2D & c() const ;
	Point2D size()const;
};
}
#endif
