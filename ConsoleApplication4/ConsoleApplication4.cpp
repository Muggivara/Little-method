#include <iostream>
using namespace std;



class Cat
{
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
// поля:
	string name; // кличка кота
	string color; // цвет шёрстки
	int age; // возраст в годах
	double weight=3; // вес
	bool is_hungry; // голодный или нет?
	int energy =  50;
	// методы:
	void Play()
	{
		cout << name << " is playing\n";
	}
	void Sleep()
	{
		cout << name << " is sleeping\n";
	}
	void Hunt()
	{
		cout << name << " is hunting\n";
	}
	void Hungry()
	{
		if (is_hungry == true)
		{
			cout << name << "is hungry\n";
		}
		else if (is_hungry == false) {

			cout << name << " is not hungry\n";
		}
		weight--;
	}
	void Eating()
	{
		srand(time(0));
		cout << name << " is eating\n";
		is_hungry = false;
		weight ++;
		energy +=10;
	}
	void Speak()
	{
		if (is_hungry == false)
			cout << "MYYYAAAAUUuu\n";
	}
	void Print()
	{
		cout <<"Barsick name is "<< name << "\n";
		cout << name <<" weight is " << weight<<"\n";
		cout << name << " energy is "<<energy<<"\n";
	}
	void Condition()
	{
		if (energy == 0)cout << "Cat is dead";
		else if (energy == 100)cout << "Cat can conquer the world";
	}
};
int main()
{
	Cat cat;
	cat.name = "Barsik";
	cat.Play();
	cat.Hunt();
	cat.Sleep();
	cat.Hungry();
	cat.Eating();
	cat.Speak();
	cat.Hungry();
	cat.Print();
	cat.Condition();
}