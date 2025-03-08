#include <iostream>
#include "Movie.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <cstring>
void Movie::set_name(const char* nume)
{
	name = (char*)malloc(strlen(nume) + 1); //alocare dinamica
	if (nume) {
		strcpy(name, nume);	
	}
}

const char* Movie::get_name()
{
	return name;
}
bool Movie::set_score(double scor)
{
	score = scor;
}
float Movie::get_score()
{
	return score;
}
bool Movie::set_year(int an)
{
	year = an;
}
int Movie::get_year() 
{
	return year;
}
bool Movie::set_length(int minute)
{
	duration = minute;
}
int Movie::get_length()
{
	return duration;
}
int Movie::numberPassedYears(int releaseYear)
{
	return 2025 - releaseYear;
}