/***********************************************************************************
** These are nots from a video lecture in class 
************************************************************************************/

#include <iostream>
//cin, cout, cerr, endl

#include <vector>
//vector 

#include <set>
//set 

#include <map>
//map

#include <utility>
//swap etc.

#include <algorithm>
//lots of things

#include <numeric>
//some useful algorithms

#include <iterator>
//ostream_iterator

#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::vector<double> v;

	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	v.at(5); //range checked
	v[5]; //not range checked
	v.begin() + 5; //not really range checked


	std::set<std::string> uniq_words;

	std::ifstream ifs("debugging.txt");
	std::string input;

	while(ifs >> input){
		uniq_words.insert(input);
		uniq_words.insert(input);
		uniq_words.insert(input);
		uniq_words.insert(input);
	}
	ifs.close();

	// for (auto i = uniq_words.begin(); i != uniq_words.end(); ++i){
	// 	std::cout << *i << std::endl;
	// }


	std::map<std::string, int> uniq_words2;

	uniq_words2["the"] = 10;

	ifs.open("stl.cpp");

	while(ifs >> input){
		if (uniq_words2.find(input) == uniq_words2.end()){
			uniq_words2[input] = 0;
		}

		++uniq_words2[input];
	}
	
	ifs.close();

	// for (auto i = uniq_words2.begin(); i != uniq_words2.end(); ++i){
	// 	std::cout << i->first << ": " << i->second << std::endl;
	// }

	
	int a = 7;
	int b = 12;

	std::cout << "a = " << a << "\t" << "b = " << b << std::endl;
	std::swap(a, b);
	std::cout << "a = " << a << "\t" << "b = " << b << std::endl;



	auto position = std::find(v.begin(), v.end(), 6);

	std::cout << "Value 6 is at position "
	          << std::distance(v.begin(), position) << std::endl;

	int array[] = {1,4,9,1,4,9,1,4,9,1};
	std::vector<int> v2(10);

	std::copy(array, array + 10, v2.begin());

	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	std::cout << "1 seen " << std::count(v2.begin(), v2.end(), 1) 
	          << " times" << std::endl;

	std::fill(v2.begin(), v2.end(), 17);
	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	std::iota(v2.begin(), v2.end(), 32);
	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;


	std::cout << std::min({1,4,9,1,4,9,1,4,9,1}) << std::endl
	          << std::max({1,4,9,1,4,9,1,4,9,1}) << std::endl;
	
	auto mm = std::minmax({1,4,9,1,4,9,1,4,9,1});

	std::cout << mm.first << std::endl << mm.second << std::endl;

	std::copy(array, array + 10, v2.begin());

	std::sort(v2.begin(), v2.end());

	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	std::reverse(v2.begin(), v2.end());

	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	std::random_shuffle(v2.begin(), v2.end());
	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	std::cout << "sum of v2 is " 
	          << std::accumulate(v2.begin(), v2.end(), 0)
	          << std::endl;


	std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
	std::partial_sum(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout," "));

	return 0;
}
