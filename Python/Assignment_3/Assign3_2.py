#Write a program which accept N numbers from user and store it into List. Return Maximum
#number from that List.

#Input : Number of elements : 7
#Input Elements : 13 5 45 7 4 56 34
#Output : 56 
def MAX(LIST):
  iMax = 0
  for i in LIST:                   #iteratr over list         
    if i > iMax:
	    iMax = i
  return iMax


def main():
 Arr = []
 print("Enter ele:")
 iSize = int(input())
 
 for i in range(iSize):
   print("ELEMENT SR:",i+1)
   iVlaue=int(input())
   Arr.append(iVlaue)
   
   print("Accept data:",Arr)
   iRet = MAX(Arr)
   
   print("MAXIMUM NUMBER IS:~",iRet)
   
   
if __name__=="__main__":
  main()
   