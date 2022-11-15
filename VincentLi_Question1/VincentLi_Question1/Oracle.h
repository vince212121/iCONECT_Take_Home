/*
\file:		Oracle.h
\author:	Vincent Li
\date:		11/15/2022
\purpose:	Defining the class and types for COracle class
*/

#include <cstddef>
#ifndef ORACLE_H
#define ORACLE_H

typedef void(*ICONECT_ERRORPROC)(const char*);

class COracle
{
public:
	COracle(ICONECT_ERRORPROC ErrorProc = NULL);
	~COracle();

	// Public functions
	bool Open(const char* szQuery);
	char* GetFieldValue(int nField);
	char* GetFieldName(int nField);
	char* GetFieldCount();
	bool MoveNext();
	bool IsEOF();
};

#endif // !ORACLE_H
