#include <iostream>
#include <queue>
#include "Car.h"
#include "Road.h"
using namespace std;

void Speed_Fine(bool check, string Brand, string Type, string Plate, int Speed, int Year, int Max_Speed, char name)
{
	if (check)
	{
		cout<<"Car brand : "<< Brand << ".\n Car type : " << Type << ".\n Car plate : " << Plate
			<< ".\n Car speed : " << Speed << ".\n Year model : " << Year <<"\n This car will be fined for exceeding the speed limit of road "
			<< name << " : " << Max_Speed <<"."<<endl<<endl<<endl;
	}
}

main()
{
	int Highest;
	Road Type_a('A', 120);
	Road Type_b('K', 100);
	Road Type_c('C', 80);
	queue<Car> cars;
	cars.push(Car("BMW", "private", "1234", 112, 2021));
	cars.push(Car("Harly", "motorcycle", "DEL333", 90, 1998));
	cars.push(Car("Volvo", "bus", "DAAA12", 60, 2009));
	cars.push(Car("Fiat", "taxi", "LEG789", 99, 2001));
	cars.push(Car("Tyota", "truck", "TAS456", 50, 2028));
	cars.push(Car("Kia", "private", "BKO852", 150, 2008));
	cars.push(Car("Buick", "private", "MSE589", 94, 1977));
	cars.push(Car("GMC", "truck", "MON663", 97, 2019));
	cars.push(Car("Dodge", "truck", "HEL968", 86, 2014));
	cars.push(Car("BMW", "bus", "SLW444", 44, 2021));
	cars.push(Car("Suzuki", "motorcycle", "HMM458", 144, 2017));
	while (!cars.empty())
	{
		Speed_Fine(Type_a.Radar(cars.front().Get_Speed()), cars.front().Get_Car_Brand(), cars.front().Get_Car_Type(), cars.front().Get_Car_Plate(), cars.front().Get_Speed(), cars.front().Get_Year_Model(), Type_a.Get_Speed(), Type_a.Get_name());
		Speed_Fine(Type_b.Radar(cars.front().Get_Speed()), cars.front().Get_Car_Brand(), cars.front().Get_Car_Type(), cars.front().Get_Car_Plate(), cars.front().Get_Speed(), cars.front().Get_Year_Model(), Type_b.Get_Speed(), Type_b.Get_name());
		Speed_Fine(Type_c.Radar(cars.front().Get_Speed()), cars.front().Get_Car_Brand(), cars.front().Get_Car_Type(), cars.front().Get_Car_Plate(), cars.front().Get_Speed(), cars.front().Get_Year_Model(), Type_c.Get_Speed(), Type_c.Get_name());
		Type_a.allow(cars.front().Get_Car_Type());
		Type_b.allow(cars.front().Get_Car_Type());
		Type_c.allow(cars.front().Get_Car_Type());
		cout<<"Your "<< cars.front().Get_Car_Brand() <<" with the plate "<<cars.front().Get_Car_Plate()<<" is "<<Type_a.age(cars.front().Get_Year_Model())<<" years old."<<endl;
		cars.pop();
	}
	if((Type_a.Get_Car_Count()>Type_b.Get_Car_Count())&&(Type_a.Get_Car_Count()>Type_c.Get_Car_Count()))
		Highest = Type_a.Get_Car_Count();
	if((Type_b.Get_Car_Count()>Type_c.Get_Car_Count())&&(Type_b.Get_Car_Count()>Type_a.Get_Car_Count()))
		Highest = Type_b.Get_Car_Count();
	else
		Highest = Type_c.Get_Car_Count();
	cout<<endl<<endl<<"The number of cars passed by the road A = "<<Type_a.Get_Car_Count()<<endl;
	cout<<"The number of cars passed by the road B = "<<Type_b.Get_Car_Count()<<endl;
	cout<<"The number of cars passed by the road C = "<<Type_c.Get_Car_Count()<<endl<<endl<<endl;
	cout<<"The efficiency of the road A = "<<((Type_a.Get_Car_Count()*100)/Highest)<<"%"<<endl;
	cout<<"The efficiency of the road B = "<<((Type_b.Get_Car_Count()*100)/Highest)<<"%"<<endl;
	cout<<"The efficiency of the road C = "<<((Type_c.Get_Car_Count()*100)/Highest)<<"%"<<endl;

	return 0;
}
