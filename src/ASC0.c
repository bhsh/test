//****************************************************************************
// @Module        Asynchronous Synchronous Serial Interface 0 (ASC0)
// @Filename      ASC0.c
// @Project       ASC.dav
//----------------------------------------------------------------------------
// @Controller    Infineon TC1728
//
// @Compiler      Tasking 3.5r1
//
// @Codegenerator 1.0
//
// @Description   This file contains functions that use the ASC0 module.
//
//----------------------------------------------------------------------------
// @Date          2015/1/11 12:44:17
//
//****************************************************************************

// USER CODE BEGIN (ASC0_General,1)

// USER CODE END

ghjgkkhhhkhk
asssasadssd

//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.h"

// USER CODE BEGIN (ASC0_General,2)

// USER CODE END
sdsddddddd

//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ASC0_General,3)

// USER CODE END
//xiyanpeng

//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ASC0_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ASC0_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (ASC0_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (ASC0_General,9)

// USER CODE END


//****************************************************************************
// @Function      void ASC0_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the ASC0 function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2015/1/11
//
//****************************************************************************

// USER CODE BEGIN (Init,1)

// USER CODE END

void ASC0_vInit(void)
{

  volatile unsigned int uwTemp;

  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the Module Clock:
  ///  -----------------------------------------------------------------------
  ///  - enable the ASC0 module
  ///  - clock divider for normal operation mode: System clock / 2 (= 20.00 
  ///    MHz; 50.00 ns )
  ///  - the ASC0 module is stopped during sleep mode

  MAIN_vResetENDINIT();
  ASC0_CLC       =  0x00000200;  // load clock control register
  uwTemp         =  ASC0_CLC;    // dummy read to avoid pipeline effects
  MAIN_vSetENDINIT();

  ///  -----------------------------------------------------------------------
  ///  Configuration of the ASC0 Baudrate Generator:
  ///  -----------------------------------------------------------------------
  ///  - fractional divider as prescaler for baud rate timer is used

  ASC0_FDV       =  0x01D0;      // load ASC0 fractional divider register

  ///  - required baud rate = 19200 baud
  ///  - real baud rate     = 19200 baud
  ///  - deviation          = 0 %

  ASC0_BG        =  0x0000003A;  // load ASC0 baud rate time reload register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the ASC0 Operation Mode:
  ///  -----------------------------------------------------------------------
  ///  - 8-bit data asychronous operation with one stop bit
  ///  - receiver is enabled
  ///  - fractional divider is enabled

  ASC0_CON       =  0x00000811;  // load ASC0 control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used ASC0 Port Pins:
  ///  -----------------------------------------------------------------------
  ASC0_PISEL     =  0x0000;      // load peripheral input selection register

  ///  - P3.0 is used as   ASC0 receive input signal 1 ( ASC0_RX)
  ///  - the pull-up device is assigned
  ///  - output driver characteristic: Strong driver soft edge

  P3_IOCR0       = (P3_IOCR0 & ~0x000000F0) | 0x00000020; // load control 
                                                          // register

  ///  - P3.1 is used as  ASC0 output signal 1 ( ASC0_TX)
  ///  - the push/pull function is activated
  ///  - output driver characteristic: Strong driver soft edge
  ///  - the emergency stop function is disabled

  P3_IOCR0       = (P3_IOCR0 & ~0x0000F000) | 0x00009000; // load control 
                                                          // register


  ///  -----------------------------------------------------------------------
  ///  Configuration of the used ASC0 Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - Rx service request node configuration:
  ///  - Rx interrupt priority level (SRPN) = 1
  ///  - Rx CPU interrupt is selected

  ASC0_RSRC      =  0x00001001;  // set service request control register


  // USER CODE BEGIN (ASC0_Function,3)

  // USER CODE END

  ASC0_CON_R     =  1;           // enable baud rate generator


} //  End of function ASC0_vInit


//****************************************************************************
// @Function      void ASC0_vSendData(ushort usData) 
//
//----------------------------------------------------------------------------
// @Description   This function writes a send data initialization word into 
//                the transmit buffer register.
//                
//                Note: 
//                In a multiprocessor system the master with this function 
//                has the possibility to send data to the selected slave. To 
//                achieve this, the 9th bit must set on zero.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    usData: 
//                Data to be send
//
//----------------------------------------------------------------------------
// @Date          2015/1/11
//
//****************************************************************************

// USER CODE BEGIN (SendData,1)

// USER CODE END

void ASC0_vSendData(ushort usData)
{
 // ASC0_TBSRC_CLRR  =  1;         // reset transmit buffer interrupt request
  ASC0_TBUF      =  usData;      // load transmit buffer register

} //  End of function ASC0_vSendData


//****************************************************************************
// @Function      ushort ASC0_usGetData(void) 
//
//----------------------------------------------------------------------------
// @Description   This function reads out the content of the receive buffer 
//                register which contains the received data.
//
//----------------------------------------------------------------------------
// @Returnvalue   data that has been received
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2015/1/11
//
//****************************************************************************

// USER CODE BEGIN (GetData,1)

// USER CODE END

ushort ASC0_usGetData(void)
{
  return(ASC0_RBUF & 0x1FF);     // return receive buffer register

} //  End of function ASC0_usGetData


//****************************************************************************
// @Function      void ASC0_viRx(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the receive interrupt service routine for the ASC0. 
//                It is called if the data has been received. 
//                Please note that you have to add application specific code 
//                to this function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          2015/1/11
//
//****************************************************************************

// USER CODE BEGIN (Rx,1)

// USER CODE END

void INTERRUPT (ASC0_RINT) ASC0_viRx(void)
{

  // USER CODE BEGIN (Rx,2)
 //  ASC0_vSendData(ASC0_usGetData()+1);
  // USER CODE END

} //  End of function ASC0_viRx




// USER CODE BEGIN (ASC0_General,10)

// USER CODE END

