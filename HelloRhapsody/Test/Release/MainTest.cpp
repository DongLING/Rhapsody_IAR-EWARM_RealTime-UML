/********************************************************************
	Rhapsody	: 8.0.6 
	Login		: Administrator
	Component	: Test 
	Configuration 	: Release
	Model Element	: Release
//!	Generated Date	: Thu, 15, May 2014  
	File Path	: Test\Release\MainTest.cpp
*********************************************************************/

//## auto_generated
#include "MainTest.h"
//## auto_generated
#include "Display.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Display * p_Display;
            p_Display = new Display;
            //#[ configuration Test::Release 
            //#]
            OXF::start();
            delete p_Display;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Test\Release\MainTest.cpp
*********************************************************************/
