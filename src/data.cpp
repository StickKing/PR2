#pragma once

#include <iostream>
#include <string>
using namespace std;

class TrainPath
{
    string s_date;
    string e_date;
    string b_station;
    string e_station;

public:
    TrainPath(string s_date, string e_date, string b_station, string e_station):
        s_date(s_date), e_date(e_date), b_station(b_station), e_station(e_station)
    {

    }

    ~TrainPath()
    {


    }

    string startDate()
    {
        return s_date;
    }

    string endDate()
    {
        return e_date;
    }

    string beginStation()
    {
        return b_station;
    }

    string endStation()
    {
        return e_station;
    }

	void setStartDate(string s_date)
	{
		this->s_date = s_date;
	}
	
	void setEndDate(string e_date)
	{
		this->e_date = e_date;
	}

	void setBeginStation(string b_station)
	{
		this->b_station = b_station;
	}
	
	void setEndStation(string e_station)
	{
		this->e_station = e_station;
	}

};


