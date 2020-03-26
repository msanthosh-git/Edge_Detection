#include "Edge_Detection.hpp"

int main(int argc, char *argv[])
{
	EdgeDetection ED;

	ED.Output = ED.read_image(argv[1]);
	ED.edge_detection(ED.Output);

	return 0;

}
