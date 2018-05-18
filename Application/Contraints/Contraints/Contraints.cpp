#include <iostream>
#include <map>
#include <vector>
#include "Contraints.h"

void Grade_PE_Time(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		if (classes[i] == 1)
		{
			//if (/*classes[i].get_PE_Time() != K_Required_PE_Time*/)
			//{
				//classes[i].current_class("PE", 0.5);
			//}
		}

		else
		{
			//if (classes[i].get_PE_Time() != All_Grades_Required_PE_Time)
			//{
				//classes[i].current_class("PE", 0.5);
			//}
		}
	}
}

void Grade_PE_Attendence(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		if (classes[i] = 1)
		{
			//if (classes[i].get_PE_Freq() < PE_Attendence)
			//{
				//classes[i].current_class("PE", 0.5);
			//}
		}

		else
		{
			//if (classes[i].get_PE_Freq() < PE_Attendence)
			//{
				//classes[i].current_class("PE", 0.5);
			//}
		}
	}
}

void Classes_A_Week(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		if (classes[i] == 1)
		{
			//if (/*classes[i].get_PE_Time() != K_Required_PE_Time*/)
			//{
					
			//}
		}

		else
		{
			//if (/*classes[i].get_PE_Time() != All_Grades_Required_PE_Time*/)
			//{

			//}
		}
	}
}

void Art_Times(std::vector<int> classes)
{
	//if (Art_Week)
	//{
		//for (int i = 0; i < classes.size(); i++)
		//{
			//if(classes[i].needs_art_class())
			//{
				//classes.current_class("Art", 1.0);
			//}
		//}
	//}
}

void Library_Times(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		//if (!classes[i].current_time_free())
		//{
			//class[i].current_class("library", 0.5);
		//}
	}
}

void Library_Attendence(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		//if (!classes[i].current_time_free() && Max_Library_Freq < 3)
		//{
			//class[i].current_class("library", 0.5);
		//}
	}
}

void Music_Times(std::vector<int> classes)
{
	bool Five_Or_Six = false;

	for (int i = 0; i < classes.size(); i++)
	{
		//if ((classes[i].get_current_class() == "Band" || classes[i].get_current_class() == "string") && (classes[i] == 5 || classes[i] == 6) && Five_Or_Six)
		//{
			//Five_Or_Six = true;
		//}
	}
}

void Music_Attendence(std::vector<int> classes)
{

}

void Social_Studies_Times(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		if (classes[i] = 1)
		{
			//if(classes[i].current_time())
			//{
				//classes[i].current_class("Soical Studies", 0.5);
			//}
		}

		else
		{
			//if (classes[i].current_time())
			//{
				//classes[i].current_class("Soical Studies", 0.5);
			//}
		}
	}
}

void Social_Studies_Attendence(std::vector<int> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		if (classes[i] = 1)
		{
			//if(classes[i].current_time())
			//{
				//classes[i].current_class("Soical Studies", 0.5);
			//}
		}

		else
		{
			//if (classes[i].current_time())
			//{
				//classes[i].current_class("Soical Studies", 0.5);
			//}
		}
	}
}

void Teacher_Prep_Time(std::vector<int> teachers)
{
	for (int i = 0; i < teachers.size(); i++)
	{
		//if (teachers[i].Get_Prep_Time() < 255)
		//{

		//}

		//else if (teachers[i].Get_Prep_Time() > 255 && teachers[i].Get_Prep_Time() < 270)
		//{

		//}
	}
}

