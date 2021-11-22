#include <iostream>

struct	Data
{
	char	v1;
	int		v2;
	float	v3;
	double	v4;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	struct Data	var;
	struct Data	*var_new;
	uintptr_t	i;

	var.v1 = '4';
	var.v2 = 42;
	var.v3 = 13.37f;
	var.v4 = 0.1337;

	std::cout << var.v1 << std::endl << var.v2 << std::endl;
	std::cout << var.v3 << std::endl << var.v4 << std::endl;

	std::cout << "--------------------------------" << std::endl;
	i = serialize(&var);
	var_new = deserialize(i);

	std::cout << var.v1 << std::endl << var.v2 << std::endl;
	std::cout << var.v3 << std::endl << var.v4 << std::endl;

	return 0;
}
