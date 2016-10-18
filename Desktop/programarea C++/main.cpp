#include <iostream>
#include "fractie.h"

using namespace std;

int main (void){
	fractie f;

	f.SetNumarator(29);
	f.SetNumitor (14);
	f.Simplifica();
	cout << GetNumarator() <<'/' << GetNumitor()<< endl;

	return 0;
}