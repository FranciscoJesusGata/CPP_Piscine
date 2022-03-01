#include <iostream>
#include <sstream>
#include <Array.hpp>
#include <string>

#define MAX_VAL 750

struct Data {
	int			number;
	std::string	info;
};

class Dummy {
	private:
		int _n;
	public:
		Dummy(void): _n(0) {}
		Dummy(int number): _n(number) {}
		Dummy(Dummy const &src) { *this = src; }

		~Dummy(void) {}

		Dummy const	&operator=(Dummy const &rhs) {
			this->_n = rhs._n;
			return (*this);
		}
		int const	&getValue(void) const { return (this->_n); }
		void		setValue(int const n) { this->_n = n; }
		bool		operator>(Dummy const & rhs) const { return (this->_n > rhs._n); }
		bool		operator<(Dummy const & rhs) const { return (rhs._n > this->_n); }
		bool		operator>=(Dummy const & rhs) const { return (this->_n >= rhs._n); }
		bool		operator<=(Dummy const & rhs) const { return (rhs._n >= this->_n); }
		bool		operator==(Dummy const & rhs) const { return (this->_n == rhs._n); }
		bool		operator!=(Dummy const & rhs) const { return (!(this->_n == rhs._n)); }
};

std::ostream	&operator<<(std::ostream &o, Dummy const &rhs) {
	o << rhs.getValue();
	return (o);
}

template <typename T, typename U>
void	iter(T &array, unsigned int length, void f(U const &)) {
	for (unsigned int i = 0; i < length; i++) {
		f(array[i]);
	}
}

template <typename T>
void	print_values(T const &element) {
	std::cout << element << " ";
}

template <>
void	print_values(Data const &element) {
	std::cout << element.number << '"'  << element.info << "\" ";
}

template <typename T>
void	createRandom(T const &i) {
	const_cast<T &>(i) = rand() % 100 + 1;
}

template <>
void	createRandom(Data const &i) {
	const_cast<Data &>(i).number = rand() % 100 + 1;
	const_cast<Data &>(i).info = "Random number";
}

template <>
void	createRandom(Dummy const &i) {
	const_cast<Dummy&>(i).setValue(rand() % 100 + 1);
}

int main(int, char**)
{
	std::cout << "Subject tests:" << std::endl << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
   delete [] mirror;


	std::cout << std::endl << "More tests:" << std::endl << std::endl;
	std::cout << "Struct array:" << std::endl;
	Array<Data> structs(10);
	iter< Array<Data>, Data>(structs, structs.size(), createRandom);
	iter< Array<Data>, Data>(structs, structs.size(), print_values);

	std::cout << std::endl;
	Array <Data> cpy(structs);
	for (int i = 0; i < 10; i++) {
		if (structs[i].number != cpy[i].number || structs[i].info != cpy[i].info) {
			print_values<Data>(structs[i]);
			std::cout << " and ";
			print_values<Data>(cpy[i]);
			std::cout << " are diferent" << std::endl;
		}
	}

	std::cout << "Class array:" << std::endl;
	Array<Dummy> classes(10);
	iter< Array<Dummy>, Dummy >(classes, classes.size(), createRandom);
	iter< Array<Dummy>, Dummy>(classes, classes.size(), print_values);

	std::cout << std::endl;
	Array<Dummy> copy(classes);
	for (int i = 0; i < 10; i++) {
		if (classes[i].getValue() != copy[i].getValue()) {
			print_values<Dummy>(classes[i]);
			std::cout << " and ";
			print_values<Dummy>(copy[i]);
			std::cout << " are diferent" << std::endl;
		}
	}

	std::cout << "Array of int arrays:" << std::endl;
	Array< Array<int> > arrays(5);
	for (unsigned int i = 0; i < arrays.size(); i++) {
		arrays[i] = Array<int>(5);
		iter< Array<int>, int >(arrays[i], arrays[i].size(), createRandom);
	}

	iter< Array< Array<int> >, Array<int> >(arrays, arrays.size(), print_values);
	std::cout << std::endl;
	Array<Array<int> > sibbling(arrays);
	for (unsigned int i = 0; i < arrays.size(); i++) {
		bool equal = true;
		for (unsigned int j = 0; equal && j < arrays.size(); j++)
			equal = (arrays[i][j] == sibbling[i][j]);
		if (!equal) {
			print_values<Array<int> >(arrays[i]);
			std::cout << " and ";
			print_values<Array<int> >(sibbling[i]);
			std::cout << " are different" << std::endl;
		}
	}
	std::cout << "Value of array[4][4]: "  << arrays[4][4] << std::endl << std::endl;

	std::cout << "Deep copy tests:" << std::endl;
	int nums[] = {1, 2, 3, 4, 5};
	Array<int>	test(5);
	for (unsigned int i = 0; i < test.size(); i++)
		test[i] = nums[i];
	Array<int>	test_cpy;
	test_cpy = test;
	test_cpy[0] = 42;
	for (unsigned int i = 0; i < test.size(); i++) {
		if (test[i] != nums[i]) {
			print_values<int>(test[i]);
			std::cout << " and ";
			print_values<int>(nums[i]);
			std::cout << " are diferent" << std::endl;
		}
	}

	std::cout << "Constant array access tests:" << std::endl;
	std::cout << "array: " << test << std::endl;
	std::cout << "cpy: " << test_cpy << std::endl;
	Array<int> const	const_cpy(test);
	std::cout << const_cpy << std::endl;
	//const_cpy[0] = 42; //This should't compile
	Array<int> const	&const_ref = const_cpy;
	const_cast<Array<int> &>(const_ref)[0] = 42;
	std::cout << const_cpy << std::endl;
    return 0;
}
