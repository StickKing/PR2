
#include <check.h>

#include "../src/data.cpp"


START_TEST(test_train_path_create)
{	
	TrainPath *train;
	train = new TrainPath("01.01.2017 15:00", "01.01.2017 15:10", "Варшавская", "Варшавская");
	
	ck_assert_str_eq(train->startDate(), "01.01.2017 15:00");
	ck_assert_int_eq(train->endDate(), "01.01.2017 15:10");
	ck_assert_int_eq(train->beginStation(), "Варшавская");
	ck_assert_str_eq(train->endStation(), "Варшавская");
	
	delete train;
}

