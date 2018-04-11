#pragma once

class MyTypes
{
public:
	static enum exception_option {
		VALID,
		WRONG_FORMAT,
		SEC_UP_TO_60,
		MIN_UP_TO_60,
		HOUR_UP_TO_24,
		SEC_NEG,
		MIN_NEG,
		HOUR_NEG,
		MY_ERROR,
		CODE_DIGIT,
		NO_SUCH,
		NOT_UNIQ_ACCOUNT_NUMBER,
		UNKNOWN_EXCEPTION,
		WITHRRAW_2500

	};
	static  const  char*  const exception_strings[];
	MyTypes();
	~MyTypes();
};

