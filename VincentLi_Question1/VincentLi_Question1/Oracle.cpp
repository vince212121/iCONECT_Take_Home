/*
\file:		Oracle.cpp
\author:	Vincent Li
\date:		11/15/2022
\purpose:	Used for the implementation of the Oracle class
*/

#include "Oracle.h"

/// <summary>
/// Constructor
/// </summary>
/// <param name="ErrorProc"></param>
COracle::COracle(ICONECT_ERRORPROC ErrorProc)
{
}

/// <summary>
/// Destructor
/// </summary>
COracle::~COracle()
{
}

/// <summary>
/// Runs the parameter query szQuery and retrieves the resulting recordset.
/// </summary>
/// <param name="szQuery"></param>
/// <returns></returns>
bool COracle::Open(const char* szQuery)
{
	return false;
}

/// <summary>
/// Returns the value of the field specified by nField.  
/// Note: This function allocates the memory for the value returned by this function.
/// </summary>
/// <param name="nField"></param>
/// <returns></returns>
char* COracle::GetFieldValue(int nField)
{
	return nullptr;
}

/// <summary>
/// Returns the name of the field specified by nField.
/// </summary>
/// <param name="nField"></param>
/// <returns></returns>
char* COracle::GetFieldName(int nField)
{
	return nullptr;
}

/// <summary>
/// Returns the number of fields in the active query.
/// </summary>
/// <returns></returns>
char* COracle::GetFieldCount()
{
	return nullptr;
}

/// <summary>
/// Moves the current recordset forward one step.
/// </summary>
/// <returns></returns>
bool COracle::MoveNext()
{
	return false;
}

/// <summary>
/// Returns whether the current recordset has reached EOF.
/// </summary>
/// <returns></returns>
bool COracle::IsEOF()
{
	return false;
}

