#pragma once

#include<vector>
#include<set>
#include<cmath>
#include<cstdlib>
#include <gcroot.h>

#include "Point.hpp"
#include "Solution.hpp"

typedef std::vector<std::vector<bool> > adj_matrix;
struct Graph
{ //graf
	Graph();
	Graph(System::Drawing::Image^ img);
	std::vector<std::vector<Point>> points;
	void clear(); //ustawia costy w pointsach
	void clear_visited();
	adj_matrix get_adjacency_matrix(Solution & actual, long range);
	Point& operator[](const Edge& edge) { return points[edge.y][edge.y]; }
	
};