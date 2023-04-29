

#include "BoxyProgrammingLanguage.h"

using namespace std;

void help() {

}

int main(int argc, char *argv[])
{
	const char* mode = argv[1];
	if (mode == "help"){
		help();
	};
	return 0;
}
