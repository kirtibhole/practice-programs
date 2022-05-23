
#include "stdafx.h"

class CYourThreadsOwner
{
  CCriticalSection m_cCritSection;
   
  CWinThread* m_pcThreads[3];
 
  bool m_bWorking;
 
  BYTE m_byBuffer[1024]; 
 
  static DWORD WINAPI thread1(CYourThreadsOwner*);
  static DWORD WINAPI thread2(CYourThreadsOwner*);
  static DWORD WINAPI thread3(CYourThreadsOwner*);
 
public:
  CYourThreadsOwner();
  ~CYourThreadsOwner();
};
