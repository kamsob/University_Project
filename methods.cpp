#include "head.h"




Graph::Graph(string graph_file) {
	distance = 0;
	std::ifstream in(graph_file);
	if (in) {
		string line;
		while (std::getline(in, line)) {
			line.replace(line.find("-"), 1, " ");
			std::istringstream iss(line);
			iss >> node1 >> node2 >> distance;
			graph[node1] = std::make_pair(node2, distance);
			graph[node2] = std::make_pair(node1, distance);
		}
		in.close();
	}
	else {
		std::cout << "Error: cannot open file " << graph_file << std::endl;
	}
}




