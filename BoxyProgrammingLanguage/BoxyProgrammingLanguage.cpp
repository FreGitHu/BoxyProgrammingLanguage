

#include "BoxyProgrammingLanguage.h"

using namespace std;

void help() {
	cout << "Boxy Help: \nThis help is in development." << endl;
}

int main(int argc, char *argv[])
{
	const char* mode = argv[1];
	if (mode == "help"){
		help();
		return 0;
	};
	return 1;
}
