#include <string>
#include <iostream>

using namespace std;
#define CAR_H

class Car
{
	private:
		string Car_Brand;
		string Car_Type;
		string Car_Plate;
		int Speed;
		int Year_Model;
	public:
		Car()
		{
			Car_Brand = "";
			Car_Type = "";
			Car_Plate = "";
			Speed = 0;
			Year_Model = 0;
		}
		Car(string Brand, string Type, string Plate, int Max_Speed, int Year)
		{
			Set_Car_Brand(Brand);
			Set_Car_Type(Type);
			Set_Car_Plate(Plate);
			Set_Speed(Max_Speed);
			Set_Year_Model(Year);
		}
		void Set_Car_Brand(string Brand)
		{
			Car_Brand = Brand;
		}
		void Set_Car_Type(string Type)
		{
			while ((Type != "bus")&&(Type != "private")&&(Type != "motorcycle")&&(Type != "truck"))
			{
				cout<<"The car type should be bus, private, motorcycle or truck. \n Renter the car type : ";
				cin>>Type;
			}
			Car_Type = Type;
		}
		void Set_Car_Plate(string Plate)
		{
			while ((Plate[0] < 65)||(Plate[0] > 90)||(Plate[1] < 65)||(Plate[1] > 90)||(Plate[2] < 65)||(Plate[2] > 90)||(Plate[3] < 48)||(Plate[3] > 57)||(Plate[4] < 48)||(Plate[4] > 57)||(Plate[5] < 48)||(Plate[5] > 57)||(Plate.length() != 6))
			{
				cout<<"The car plates should contain 3 upper alphabet and 3 numbers. (e.g ABC123) \n Renter the car plate : ";
				cin>>Plate;
			}
			Car_Plate = Plate;
		}
		void Set_Speed(int Max_Speed)
		{
			Speed = Max_Speed;
		}
		void Set_Year_Model(int Year)
		{
			while (Year > 2022)
			{
				cout<<"Enter a valid year model : ";
				cin>>Year;
			}
			Year_Model = Year;
		}
		string Get_Car_Brand()
		{
			return Car_Brand;
		}
		string Get_Car_Type()
		{
			return Car_Type;
		}
		string Get_Car_Plate()
		{
			return Car_Plate;
		}
		int Get_Speed()
		{
			return Speed;
		}
		int Get_Year_Model()
		{
			return Year_Model;
		}
};

