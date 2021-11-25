#Write a program which accept N numbers from user and store it into List. Return Minimum
#number from that List.

#Input : Number of elements : 4
#Input Elements : 13 5 45 7
#Output : 5

def MIN(LIST):
  iMin = LIST[0]
  for i in LIST:                   #iteratr over list         
    if i < iMin:
	    iMin = i
  return iMin


def main():
 Arr = []
 print("Enter ele:")
 iSize = int(input())
 
 for i in range(iSize):
   print("INPUT ELEMENT IS:",i+1)
   iVlaue=int(input())
   Arr.append(iVlaue)
   
   print("Accept data:",Arr)
   iRet = MIN(Arr)
   
   print("MINIMUM NUMBER IS:~",iRet)
   
   
if __name__=="__main__":
  main()