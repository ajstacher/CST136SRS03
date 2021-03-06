// StoneMoney.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "convert.h"
#include "currency.h"
#include <iostream>

 int main()
{
	//nesting
	constexpr const auto conversion2
 	{
		convert(convert(convert(100.00, Currency::us, Currency::nz), Currency::nz, Currency::au), Currency::au, Currency::us)
	};

	//no nesting
	constexpr const auto conversion3 { convert(100.00, Currency::au, Currency::nz) };

	//static gets rid of last bit of code, not sure how it works
	static constexpr const auto conversion1{ convert(100.00, Currency::au, Currency::nz) };
	auto temp = conversion1;

    return 0;
}

