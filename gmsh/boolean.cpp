#include <gmsh.h>

int main(int argc, char **argv){
	gmsh::initialize(argc, argv);
	gmsh::model::add("boolean");
	double R = 1.4, Rs = R*.7, Rt = R*1.25;
	
}

