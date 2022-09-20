#include <string>
#include <iostream>
using namespace std;
#define ROAD_H
class Road
{
	private:
		char Road_Type;
		int Speed_Limit;
		int Car_Count=0;
	public:
		Road()
		{
			Road_Type = 0;
			Speed_Limit = 0;
		}
		Road(char Type , int Limit)
		{
			Set_Road_Type(Type);
			Set_Speed_Limit(Limit);
		}
		bool Radar(int car_speed)
		{
			if (car_speed >= Speed_Limit)
				return 1;
			else
				return 0;
		}
		void allow(string Car_type)
		{
			if(Road_Type == 'A')
			{
				if ((Car_type == "private")||(Car_type == "motorcycle"))
				{
					cout<<"Road A allows "<< Car_type << " vehicles." << endl;
					Car_Count++;
				}
				else
					cout<<"Road A does not allow "<< Car_type << " vehicles." << endl << "It allows only private and motorcycle vehicles." << endl;
			}
			else if(Road_Type == 'C')
			{
				if (Car_type == "truck")
				{
					cout<<"Road C allows "<< Car_type << " vehicles." << endl;
					Car_Count++;
				}
				else
					cout<<"Road C does not allow "<< Car_type << " vehicles." << endl << "It allows only trucks." << endl;
			}
			else
			{
				cout<<"Road B allows all vehicles"<<endl<<endl;
				Car_Count++;
			}
		}
		int age(int Year_Model)
		{
			return (2022-Year_Model);
		}
		int Get_Car_Count()
		{
			return Car_Count;
		}
		int Get_Speed()
		{
			return Speed_Limit;
		}
		char Get_name()
		{
			return Road_Type;
		}
		int Set_Road_Type(char Type)
		{
			while ((Type!='A')&&(Type!='B')&&(Type!='C'))
			{
				cout<<"Enter a valid road type (A , B or C) : ";
				cin>>Type;
			}
			Road_Type = Type;
		}
		int Set_Speed_Limit(int Limit)
		{
			Speed_Limit = Limit;
		}
};
