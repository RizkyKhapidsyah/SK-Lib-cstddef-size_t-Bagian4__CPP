
#include <iostream>
#include <string>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	string str = "rizky khapidsyah de";
	size_t found = str.find("khapid", 0, 5);

	if (found != string::npos) {
		cout << found << endl;
	}
		
	_getch();
	return 0;
}
