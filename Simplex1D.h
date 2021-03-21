#ifndef SIMPLEX_1_D_H
#define SIMPLEX_1_D_H
namespace simplex
{
class Simplex1D
{
private:
	double min_;
	double max_;
public:
	Simplex1D( const double , const double );
	double min() const ;
	double max() const ;
	double size() const ; 
};
}
#endif
