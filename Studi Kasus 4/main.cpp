#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"

int main(){
	Input input;
	input.cetak();
	input.iteratif();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.iteratif();
	proses.toFile();

	Output output;
	output.getData();
	output.cetak();

	return 0;
}
