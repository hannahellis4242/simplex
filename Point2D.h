#ifndef Point_2_D_H
#define Point_3_D_H

namespace simplex
{
class Point2D
{
private:
	double x_; 
	double y_;
public:
	Point2d(const double, const double);
	double x() const;
	double y() const;
};
}

#endif
