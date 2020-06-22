/* 
 Name: pi.cpp
 Author: Stephanie Walcher
 Version.Revision: 1.0
 Date: 20 June 2020

 // MAIN ---------------------------------------------------------------------- 
 parameters: none
 returns: 0 = OK
 purpose: estimates pi based on number of random dots in square vs. in circle
 */

// INCLUDES -------------------------------------------------------------------
#include <iostream> //for cout
#include <vector> //for array of dynamic size
#include <tuple> //for coords
#include <math.h> //for sqrt and pow
#include <time.h> //for srand
#include <SFML/Graphics.hpp> //for drawing
// DEFINES --------------------------------------------------------------------
//using namespace std ;
typedef std::vector< std::tuple<double , double> > xy_coords ;

// GLOBAL VARIABLES -----------------------------------------------------------
const int ITERATIONS = 1024 ;

// FORWARD DECLARATIONS -------------------------------------------------------
void make_coords ( int , xy_coords* dots ) ;
double estimate_pi ( int iterations , xy_coords dots ) ;

// REMARKS --------------------------------------------------------------------

int main( int argc , char *argv[ ] ) {
	srand( (unsigned)time( NULL ) ) ;
	xy_coords dots = { } ;
	xy_coords *pdots = &dots ;
	make_coords ( ITERATIONS , pdots ) ;
	std::cout << "Estimation of Pi:" << estimate_pi ( ITERATIONS , dots ) << std::endl ;
  
	// //drawing a circle:
  // sf::RenderWindow window( sf::VideoMode( 200, 200 ) , "SFML works...for now." ) ;
  // sf::CircleShape shape( 100.f ) ;
  // shape.setFillColor( sf::Color::Green ) ;
  // while ( window.isOpen( ) ) { 
	// 	sf::Event event ;
  //   while ( window.pollEvent( event ) ) {
	//     if ( event.type == sf::Event::Closed ) {
  //       window.close( ) ;
  //     }
	// 	}
  //   window.clear( ) ;
  //   window.draw( shape ) ;
  //   window.display( ) ;
  //   }
	return 0 ;
}

void make_coords ( int iterations , xy_coords* pdots ) {
	for ( int i = 0 ; i < iterations ; i++ ) {
		double x = ( double ) rand( ) / RAND_MAX ;
		double y = ( double ) rand( ) / RAND_MAX ;
		//cout << "x:" << x << "y:" << y ; 
		std::tuple<double , double> coords ( x , y ) ;
    pdots->push_back( coords ) ;
	}
}  

double estimate_pi ( int iterations , xy_coords dots ) {
double total_num = ITERATIONS ;
	double square_num = 0 ;
	for ( std::tuple<double , double> j : dots ) {
		double distance = pow( std::get<0>( j ) , 2 ) + pow( std::get<1>( j ) , 2 ) ;
		if ( distance < 1 ) {
			square_num++ ;
		}
	}
	double estim_pi = 4 * (square_num / total_num) ;
	return estim_pi ;
}
