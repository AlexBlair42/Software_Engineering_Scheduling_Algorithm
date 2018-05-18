#pragma once

#include <iostream>
#include <map>
#include <vector>

class Contraints
{
private:
	double K_Required_PE_Time = 1.5;
	double K_Required_LitFit = 0.5;

	
	double All_Grades_Required_PE_Time = 1.0;
	int PE_Attendence = 2;
	int Art_Attendence;
	
	std::vector<std::string> Music = {"Developmental", "Band", "Strings", "Choir"};
	double Choir_Practice = 1.5;
	double Music_Practice = 1.0;
	double Band_String_Travel_Time = 0.5;

	double Art_Time = 1.0;
	//bool Art_Week = True;

	int Max_Library_Freq = 3;


	//	std::map<int, std::vector<int>> Days_of_Week;
	std::map<int, std::vector<int>> PE_for_Classes; // Tracks classes for how much PE time they have done

public:
	Contraints() {}
	~Contraints() {}

	void Classes_A_Week(std::vector<int> classes);

	void PE_Times(std::vector<int> classes);
	void PE_Attendence(std::vector<int> classes);

	void Art_Times(std::vector<int> classes);
	//void Art_Attendence(std::vector<int> classes);

	void Library_Times(std::vector<int> classes);
	void Library_Attendence(std::vector<int> classes);

	void Music_Times(std::vector<int> classes);
	void Music_Attendence(std::vector<int> classes);

	void Social_Studies_Times(std::vector<int> classes);
	void Social_Studies_Attendence(std::vector<int> classes);

	void Teacher_Prep_Time(std::vector<int> teachers);

};