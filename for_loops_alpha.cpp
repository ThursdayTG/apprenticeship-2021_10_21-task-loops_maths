// inclusion of libraries
#include <iostream>

// namespace
using namespace std;


int main(){

	/*
	 * alle übungen mit for-loop!
	 *
	 * aufgabe 1.
	 * nach eingabe einer zahl soll von 0 an zu dieser hoch und wieder runter zählen.
	 * spitze pyramide (höchste zahl soll nur einmal da stehen)
	 */

	/*	##### COUNT UP #####	*/
	int		inCountUp,
			outCountUp	= 0;

	cout	<< "count up \n"
			<< "enter a number higher than 0: ";
	cin		>> inCountUp;
	cout	<< "\n";

	for	(	inCountUp;
			outCountUp < inCountUp;
			outCountUp++){
		cout	<< outCountUp << "\n";
	}

	for	(	inCountUp;
			outCountUp >= 0;
			outCountUp--){
		cout	<< outCountUp << "\n";
	}
	/**/


	/*
	 * aufgabe 2:
	 * nun soll von der zahl bis null runter und wieder rauf gezählt werden
	 * spitze pyramide
	 */

	/*	##### COUNT DOWN #####	*/
	int		inCountDown,
			outCountDown	= 0;

	cout	<< "\n"
			<< "count down \n"
			<< "enter a number higher than 0: ";
	cin		>> inCountDown;
	cout	<< "\n";

	outCountDown = inCountDown;

	for	(	outCountDown;
			outCountDown > 0;
			outCountDown--){
		cout	<< outCountDown << "\n";
	}

	for	(	inCountDown;
			inCountDown <= outCountDown;
			inCountDown++){
		cout	<< inCountDown << "\n";
	}
	/**/

	/**/
	cin.ignore();						// use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.
	cin.get();
	cout	<< "\033[2J\033[1;1H";		// clears screen, string of special characters that will translate to a clear screen command.
	/**/

	return 0;

}

/*
	compile:
g++ for_loops_alpha.cpp -o for_loops_alpha

	run from console:
./for_loops_alpha

	clear, compile, run:
clear && g++ for_loops_alpha.cpp -o for_loops_alpha && ./for_loops_alpha

	name meaning:
C++ for Schmid
*/
