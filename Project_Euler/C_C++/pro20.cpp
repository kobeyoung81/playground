//========================================================================
/**@file	pro20.cpp
 * @author	kobeyoung81
 * @version	0.1 
 * @date
 * 	Created:	Mon May 24 18:29:55 2010 \n
 * 	Last Update:	Mon May 24 18:29:55 2010
 */
/*------------------------------------------------------------------------
 * Description:	�description�
 * 
 *------------------------------------------------------------------------
 * History:	�history�
 * TODO:	�missing features�
 *========================================================================
 */

/*===========================================================================*/
/*===============================[ Includes ]================================*/
/*===========================================================================*/
#include <iostream>
using namespace std;

/*===========================================================================*/
/*==================================[ �� ]===================================*/
/*===========================================================================*/
int getInt(char a)
{
	return a - '0';
}
int main()
{
	string str;
	cin >>str;
	int sum = 0;
	for (int i= 0; i< str.length(); i++)
	{
		sum += getInt(str[i]);
	}
	cout<<"Result: "<<sum<<endl;

}
