#ifndef FACTORY_HPP
#define FACTORY_HPP
#include <memory>
#include <iostream>
#include <string>
#include <map>
struct HotDrink
{
	int vol;
	virtual void prepare(int volume) = 0;
	virtual ~HotDrink() = default;
};

struct Tea : HotDrink
{
	void prepare(int volume) override;
};
struct Coffee : HotDrink
{
	void prepare(int volume) override;
};


struct HotDrinkFactory
{
	virtual std::unique_ptr<HotDrink> make() const = 0;
	virtual ~HotDrinkFactory() = default;
};


struct CoffeeFactory : HotDrinkFactory
{
	std::unique_ptr<HotDrink> make() const override;
};

struct TeaFactory : HotDrinkFactory
{
	std::unique_ptr<HotDrink> make() const override;
};
#endif // !FACTORY_HPP

class DrinkFactory
{
	std::map<std::string, std::unique_ptr<HotDrinkFactory>> hot_factories;
public:
	DrinkFactory();
	std::unique_ptr<HotDrink> make_drink(const std::string& name)
	{
		auto drink = hot_factories[name]->make();
		drink->prepare(200);
		return drink;
	}
};


void factory_test(void);