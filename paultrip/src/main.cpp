//*****************************************************************
/*
  PaulTrip: A System for High-Quality Audio Network Performance
  over the Internet

  Copyright (c) 2008 Juan-Pablo Caceres, Chris Chafe.
  SoundWIRE group at CCRMA, Stanford University.
  
  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation
  files (the "Software"), to deal in the Software without
  restriction, including without limitation the rights to use,
  copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following
  conditions:
  
  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
  OTHER DEALINGS IN THE SOFTWARE.
*/
//*****************************************************************

/**
 * \file main.cpp
 * \author Juan-Pablo Caceres
 * \date June 2008
 */

#include <iostream>
#include <unistd.h>

#include "JackAudioInterface.h"
#include "UdpDataProtocol.h"
#include "RingBuffer.h"
#include "PaulTrip.h"
#include "TestRingBuffer.h"

using namespace std;

int process (jack_nframes_t nframes, void *arg);


//int main(int argc, char** argv)
int main()
{

 
  // Test PaulTrip
  //================================================================
  PaulTrip paultrip1;
  paultrip1.startThreads();

  PaulTrip paultrip2;
  paultrip2.startThreads();
 
  /*
  // TestRingBuffer
  //================================================================
  TestRingBufferWrite tw;
  TestRingBufferRead tr;
  tr.start();
  tw.start();
  */

  /*
  // Test RingBuffer
  //================================================================
  RingBuffer rb(2,2);

  int8_t* writeSlot;
  writeSlot = new int8_t[2];
  writeSlot[0] = *"a";
  writeSlot[1] = *"b";
  std::cout << *writeSlot << std::endl;
  std::cout << writeSlot[0] << std::endl;
  std::cout << writeSlot[1] << std::endl;
  std::cout << *(writeSlot+1) << std::endl;
  rb.writeSlot(writeSlot);

  int8_t* readSlot;
  readSlot = new int8_t[2];
  rb.readSlot(readSlot);
  std::cout << *(readSlot) << std::endl;
  std::cout << *(readSlot+1) << std::endl;
  */


  /*
  // Test UDP Socket
  //================================================================
  UdpDataProtocol udp_rec(RECEIVER, "192.168.1.4");
  UdpDataProtocol udp_send(SENDER, "192.168.1.4");
  udp_rec.start();
  udp_send.start();
  */

  /*
  // Test JackAudioInterface
  //================================================================
  JackAudioInterface jack_test(4);
  cout << "SR: " << jack_test.getSampleRate() << endl;
  cout << "Buffer Size: " << jack_test.getBufferSize() << endl;
  jack_test.setProcessCallback(process);
  jack_test.startProcess();
  */


  while (true)
    {
      //cout << "SR: " << test.getSampleRate() << endl;
      //cout << "Buffer Size: " << test.getBufferSize() << endl;
      usleep(1000000);
      //usleep(1);
    }

  
  return 0;
}



int process (jack_nframes_t nframes, void *arg)
{

	return 0;      
}





// Main Page Documentation
/** \mainpage PaulTrip API Documentation
 *
 * \section intro_sec About PaulTrip
 *
 * PaulTrip: A System for High-Quality Audio Network Performance
 * over the Internet.
 *
 * \section install_sec Installation
 *
 * \subsection Linux
 *
 * \subsection Mac OS X
 *
 */