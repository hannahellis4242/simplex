#include "Simplex2D.h"
#include <algorithm>

namespace simplex
{
Simplex2D::Simplex2D( const Point2D & a,const Point2D &b,const Point2D & c)
	:points_({a,b,c})
const Point2D & Simplex2D::a() const { return points_[0] ; }
const Point2D & Simplex2D::b() const { return points_[1] ; }
const Point2D & Simplex2D::c() const { return points_[2] ; }

Point2D Simplex2D::size()const
{
	const auto xRange = std::minmax_element( points_.begin(),points_.end() , [](const Point2D & a , const Point2D & b){ return a.x() < b.x() ; } );
	const auto yRange = std::minmax_element( points_.begin(),points_.end(), [](const Point2D & a , const Point2D & b){ return a.x() < b.x() ; });
	return Point2D(xRange.second->x()-xRange.first->x(),yRange.second->y()-yRange.first->y());
}
}
