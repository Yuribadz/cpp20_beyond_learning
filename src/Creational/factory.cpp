#include "factory.hpp"

void Tea::prepare(int volume)
{
	vol = volume;
	std::cout << "Take tea bag, boil water, pour " << volume <<
		"ml, add some lemon" << std::endl;
}


void Coffee::prepare(int volume)
{
	vol = volume;
	std::cout << "Coffee is preparing in volume " << volume <<
		"ml and sugar" << std::endl;
}

std::unique_ptr<HotDrink> CoffeeFactory::make() const
{
	return std::make_unique<Coffee>();
}

std::unique_ptr<HotDrink> TeaFactory::make() const
{
	return std::make_unique<Tea>();
}

DrinkFactory::DrinkFactory()
{
	hot_factories["coffee"] = std::make_unique<CoffeeFactory>();
	hot_factories["tea"] = std::make_unique<TeaFactory>();
}

void factory_test(void)
{
	DrinkFactory factory;
	std::cout << "==Factory test==\n";
	std::unique_ptr<HotDrink> drink = factory.make_drink("coffee");
	drink.reset();
	drink = factory.make_drink("tea");
	std::cout << "==Factory test END==\n";
}
