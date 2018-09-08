#ifndef A_40_H
#define A_40_H
#include <iostream>
#include <string>

//class Sales_data

class Sales_data
{
	private:
		std::string isbn_m;
		double sales_m;
		int qty_m;

	public:
		//default constructor.
		Sales_data(const std::string & isbn = "", double sales = 0, int qty = 0) :
			isbn_m(isbn), sales_m(sales), qty_m(qty) {}
		
		
		void init();
		friend std::ostream & operator<<(std::ostream & out, const Sales_data & sd);

};


#endif
