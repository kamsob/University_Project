#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <utility>
#include <sstream>
#include <fstream>
#include <algorithm>
using std::string;


struct Graph {

public:
	std::unordered_map<string, std::pair<string, int>>graph;

private:
	string node1, node2;
	int distance;
	//Creating a graph from a file with a list of edges and their weights

public:
	Graph(string);
};

class Cheapest_Path {};

class Flixbus : public Cheapest_Path {};

class City_Tour : public Cheapest_Path {};

class Accomodation {};