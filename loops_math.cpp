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
	 *
	 * löse diese aufgabe mit nur einem for-loop
	 */

	/*	##### COUNT UP #####	*/
	int		inputCountFrom,	// count from input number
			outputCountFrom,
			forLoopFrom,
			counterFrom		= 1;

	cout	<< "enter a number higher than 0: ";
	cin		>> inputCountFrom;

	outputCountFrom	= inputCountFrom;
	forLoopFrom		= inputCountFrom * 3 + 1;

	for	(	inputCountFrom;
			inputCountFrom != forLoopFrom;
			inputCountFrom++){

		cout	<< outputCountFrom << "\n";
		if	(outputCountFrom == 0){
			counterFrom = 0;
		}

		if		(counterFrom == 1){
			outputCountFrom--;
		}
		else if	(counterFrom == 0){
			outputCountFrom++;
		}
	}
	/**/

	/*	##### [REDACTED]'s Code #####	*
	for (int i = 0; i <= zahl * 2; i++) {
		if (i <= zahl) {
			cout << i << endl;
		}
		else {
			erg = zahl - (i - zahl);
			cout << zahl - (i - zahl) << endl;
		}
	}
	/**/


	/*
	 * aufgabe 2:
	 * nun soll von der zahl bis null runter und wieder rauf gezählt werden
	 * spitze pyramide
	 *
	 * löse diese aufgabe mit nur einem for-loop
	 */

	/*	##### COUNT DOWN #####	*/
	int		inputCountTo,	// count to input number
			outputCountTo,
			forLoopTo,
			counterTo		= 1;

	cout	<< "\n"
			<< "enter a number higher than 0: ";
	cin		>> inputCountTo;

	outputCountTo	= 0;
	forLoopTo		= inputCountTo * 3 + 1;

	for	(	inputCountTo;
			inputCountTo != forLoopTo;
			inputCountTo++){

		cout	<< outputCountTo << "\n";
		if	(outputCountTo == forLoopTo / 3){
			counterTo = 0;
		}

		if		(counterTo == 1){
			outputCountTo++;
		}
		else if	(counterTo == 0){
			outputCountTo--;
		}
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
g++ for_loops_bravo.cpp -o for_loops_bravo

	run from console:
./for_loops_bravo

	clear, compile, run:
clear && g++ for_loops_bravo.cpp -o for_loops_bravo && ./for_loops_bravo

	name meaning:
C++ for Schmid
*/
