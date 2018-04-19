#pragma once

#include <iostream>
#include <iomanip>
#include <vector>

#include "data.cpp"
using namespace std;

class DataBase
{
	int last_inserted_id;
	vector<TrainPath*> db;

public:
	DataBase() : last_inserted_id(1)
	{
		db.resize(0);
	}
	~DataBase()
	{
		for (int i = 0; i < db.size(); i++) {
			delete db[i];
		}
	}

	int count()
	{
		return db.size();
	}

	void add(TrainPath *new_item)
	{
		db.push_back(new_item);
	}

	TrainPath* edit(int id)
	{
		id--;
		return db.at(id);
	}

	void remove(int id)
	{
		id--;
		db.erase(db.begin() + id);
	}

	void view()
	{
		cout << setfill(' ')
			 << setw(6) << "ID|" << setfill(' ') << setw(35) << "s_date|" << setw(12) << "e_date|" << setw(12) << "s_station|" << setw(12) << "e_station|" << '\n';
		cout << setfill('-') << setw(80) << '\n' << setfill(' ');
		for (int i = 0; i < db.size(); i++) {
			cout << setw(5) << (i+1) << "|"
				 << setw(34) << db[i]->startDate() << "|"
				 << setw(11) << db[i]->endDate() << "|"
				 << setw(11) << db[i]->beginStation() << "|"
				 << setw(11) << db[i]->endStation() << "|" << '\n';
		}
	}

	void view(int i)
	{
		i--;

		cout << setfill(' ')
			 << setw(6) << "ID|" << setfill(' ') << setw(35) << "s_date|" << setw(12) << "e_date|" << setw(12) << "s_station|" << setw(12) << "e_station|" << '\n';
		cout << setfill('-') << setw(80) << '\n' << setfill(' ');
		cout << setw(5) << (i+1) << "|"
				 << setw(34) << db[i]->startDate() << "|"
				 << setw(11) << db[i]->endDate() << "|"
				 << setw(11) << db[i]->beginStation() << "|"
				 << setw(11) << db[i]->endStation() << "|" << '\n';
	}

};

