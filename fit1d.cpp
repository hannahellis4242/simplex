#include "fit1d.h"

namespace simplex
{
Simplex1D step( Simplex1D x, const OneDFunction & f)
{
    const bool minIsSmaller = f( x.min() ) < f( x.max() );
    const double lower = minIsSmaller ? range.min() : range.max();
    const double upper = minIsSmaller ? range.max() : range.min();

    std::vector< TrialPoint > trialPoints;
    trialPoints.reserve( 3 );

    //mid point
    {
        const double x = ( lower + upper ) / 2.0;
        trialPoints.push_back( std::pair< double, double >( x, f( x ) ) );
    }
    //one step
    {
        const double x = 2 * lower - upper;
        trialPoints.push_back( std::pair< double, double >( x, f( x ) ) );
    }
    //two step
    {
        const double x = 3 * lower - 2 * upper;
        trialPoints.push_back( std::pair< double, double >( x, f( x ) ) );
    }

    const auto it = std::min_element( trialPoints.begin(), trialPoints.end(), []( const TrialPoint& a, const TrialPoint& b ) { return a.second < b.second; } );

    return Simplex1D( lower, it->first );
}

Simplex1D fit(Simplex1D x,const OneDFunction &f, const double tol)
{
	return x.size() < tol ? x : step( x , f );
}
}
