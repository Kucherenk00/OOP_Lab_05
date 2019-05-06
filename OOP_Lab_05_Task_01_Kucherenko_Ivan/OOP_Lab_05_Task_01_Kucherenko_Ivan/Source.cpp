#include <iostream>

//5
using namespace std;

class Transportation
{
private:
	int number;
	char driver;
public:
	Transportation(int numberauto, char driverauto);
	void Number(int numberauto);
	void Driver(char driverauto);

	~Taxi();
	~TransportationCar();
};

Transportation::Transportation(int numberauto, char driverauto)
{
	number = numberauto;
	driver = driverauto;
}

Transportation::Number(int numberauto)
{
	cout << "ВВедіть номер авто" << endl;

	cin >> numberauto;

	return numberauto;

}

Transportation::Driver(char driverauto)
{
	cout << "ВВедіть ім'я водія" << endl;

	cin >> driverauto;

	return driverauto;
}

Transportation::Order()
{
	const int orders = 2;
	Transportation** currentsum = new currentsum*[orders]
		currentsum[1] = new SumOrder();
		currentsum[2] = new SumOrder();

		delete currentsum[1];
		delete currentsum[2]; 
		delete[]currentsum;

}

//********************************************************

class Taxi : public Transportation
{
private:
	double CostOrder;
	double CostKilometer;

public:
	double distance

	virtual void SumOrder()
	{

		cout << "Введіть відстань поїздки " << endl;
		cin >> distance;

		cost1 = cost2 * distance;
		return cost1;
	}

};

Taxi::Taxi(double cost1, double cost2)
{
	CostOrder = cost1;
	CostKilometer = cost2;
}


Taxi::CostPerKilomete(double cost2)
{
	cout << "Введіть ціну проїзду за 1 кілометр" << endl;

	cin >> cost2;

	return cost 2;
}

//*******************************************************

class Bus : public Transportation
{
private:
	double CostPassenger;
	int MinPassenger;

public:
	double distance;
	int currentpas;
	int currentsum;
	double sum;
	double distance;

	 void SumOrder() override
	{
		 currentsum = currentpas * (sum / 10)*distance;
		cout << "Ціна перевезення автобусом " << currentsum <<endl;

		return currentsum;
	}

};

Bus::Bus()
{

}

Bus::Bus (double costp, double minpas)
{
	MinPassenger = minpas;
	CostPassenger = costp;
}
Bus::Price()
{
	cout << " Введіть вартість перевезення 1 пасажира на 10 км " << endl;
	cin >> sum;

	cout << " Введіть відстань поїздки " << endl;
	cin >> distance;

}

Bus::Passenger()
{
	cout << "Введіть мінімальну кількість пасажирів " << endl;
	cin >> minpas;

	cout << "Введіть кількість пасажирів у автобусі " << endl;
	cin >> currentpas;

	if (currentpas > minpas)
	{
		virtual void SumOrder();
	}
	else 
		cout << "Введено неправильні дані про кількість пасажирів у автобусі " << endl;
}


int main()
{
	setlocale(LC_CTYPE, "ukr");

	Transportation a1;

	Transportation *trans = &a1;

	a1.Number();
	a1.Driver();
	a1.CostOfOrder();
	a1.CostPerKilometer();
	a1.Bus();
	a1.:Price();
	a1.Passenger();
		
}