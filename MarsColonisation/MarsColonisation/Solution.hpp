#pragma once
#include <vector>
#include <set>
#include "Base.hpp"
#include <memory>
#include <iostream>
#include <list>
#include <utility>
#include "Dijkstra.hpp"

struct Graph;
struct Base;
namespace MarsColonisation
{
	ref class MainForm;
}
struct Solution {
	long achievable_points = 0;
	std::vector<Base> bases;
	std::list<SimplePoint> objective_function(std::shared_ptr<Graph> map, const long range);

	void move_bases(std::vector<Base> new_bases);
	Solution(const Solution & pattern);
	static std::shared_ptr<Solution> generate_initial(int x, int y, int amount)
	{
		auto solution = std::make_shared<Solution>();
		for (;amount > 0; amount--) {
			solution->bases.push_back(Base(x++, y));
		}
		return solution;
	}
	Solution() {}
	friend std::ostream & operator<< (std::ostream & output, const Solution & s); //useful to debug
private:
};
