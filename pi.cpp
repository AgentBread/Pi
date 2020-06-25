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
#include <string.h> //to double convert estim_pi to string
// DEFINES --------------------------------------------------------------------
typedef std::vector< std::tuple<double , double> > xy_coords ;

// GLOBAL VARIABLES -----------------------------------------------------------
const int ITERATIONS = 1024 ;

// FORWARD DECLARATIONS -------------------------------------------------------
void make_coords ( int , xy_coords* dots ) ;
double estimate_pi ( int iterations , xy_coords dots ) ;
void draw_window ( xy_coords dots , double estimate_pi ) ;
// REMARKS --------------------------------------------------------------------

int main( int argc , char *argv[ ] ) {
	srand( ( unsigned ) time( NULL ) ) ;
	xy_coords dots = { } ;
	xy_coords *pdots = &dots ;
	make_coords ( ITERATIONS , pdots ) ;
	std::cout << "Estimation of Pi:" << estimate_pi ( ITERATIONS , dots ) << std::endl ;
  
	draw_window( dots , estimate_pi( ITERATIONS , dots ) ) ;
	
	return 0 ;
}

void make_coords ( int iterations , xy_coords* pdots ) {
	for ( int i = 0 ; i < iterations ; i++ ) {
		double x = ( double ) rand( ) / RAND_MAX ;
		double y = ( double ) rand( ) / RAND_MAX ;
		std::tuple<double , double> coords( x , y ) ;
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
void draw_window ( xy_coords dots, double estimate_pi ) {
  sf::RenderWindow window( sf::VideoMode( 440 , 220 ) , "Pi Estimation" ) ;
  
	sf::CircleShape circle ;
	circle.setRadius( 100 ) ;
	circle.setOutlineColor( sf::Color::Red ) ;
	circle.setFillColor( sf::Color::Transparent ) ;
	circle.setOutlineThickness( 1 ) ;
	circle.setPosition( 10 , 10 ) ;

	sf::RectangleShape rectangle ;
	rectangle.setSize(sf::Vector2f( 200 , 200 ) ) ;
	rectangle.setOutlineColor( sf::Color::White ) ;
	rectangle.setFillColor( sf::Color::Transparent ) ;
	rectangle.setOutlineThickness( 1 ) ;
	rectangle.setPosition( 10 , 10 ) ;
  
	sf::Font font ;
	if ( !font.loadFromFile( "blackjack.otf" ) ) {
  	std::cout << "Font not found" << '\n' ;
	}
	std::string estim_pi_out = std::to_string( estimate_pi ) ;
	sf::Text text( "Estimated Pi: \n" + estim_pi_out , font ) ;
	text.setCharacterSize( 20 ) ;
	text.setFillColor( sf::Color::Red ) ;
	text.setPosition( 220 , 10 ) ;
	
	window.clear( ) ;

	while ( window.isOpen( ) ) { 
		sf::Event event ;
    while ( window.pollEvent( event ) ) {
	    if ( event.type == sf::Event::Closed ) {
        window.close( ) ;
      }
		}
		
		for ( std::tuple<double , double> j : dots ) {
			double pnt_x = std::get<0>( j ) ; 
			double pnt_y = std::get<1>( j ) ;
			sf::Vertex point( sf::Vector2f( pnt_x * 100 + 10, pnt_y * 100 + 10 ) , sf::Color::White ) ;
			window.draw( &point , 1 , sf::Points ) ;
		}

	window.draw( circle ) ;
	window.draw( rectangle ) ;
	window.draw( text ) ;

  window.display( ) ;
  }
}
