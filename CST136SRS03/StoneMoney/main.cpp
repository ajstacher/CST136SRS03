// StoneMoney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "convert.h"
#include <iostream>

//enum class Currency {us = 100, au = 76, nz = 71, fj = 49, to = 45, pg = 31, sb = 13};

//static constexpr const auto CONVERSION = convert<int, double >(100, 0.76, 0.71);

 int main()
{
	//stuff I was trying
	//auto temp = 0.0;
	//const auto temp = convert<int, Currency>(100, Currency::fj, Currency::au);
	//auto temp { convert<int, double >(100, 0.76, 0.71) };
	/*constexpr double sum(){
	static constexpr const auto temp = convert<int, Currency>(100, Currency::fj, Currency::au);
	return temp;
	};*/

	static constexpr const auto ktemp { convert<int, double >(100, 0.76, 0.71) };

	auto temp2 = ktemp;

	//std::cin >> temp2;

    return 0;
}

