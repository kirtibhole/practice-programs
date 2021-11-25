#Write a program which accept N numbers from user and store it into List. Accept one another
#number from user and return frequency of that number from List.

#Input : Number of elements : 11
#Input Elements : 13 5 45 7 4 56 5 34 2 5 65
#Element to search : 5
#Output : 3


def sNum(LIST,iNo):
 iFreq = LIST[0]
 for i in LIST:
   if (i == iNo):
       iFreq = iFreq + 1
 return iFreq
 
 
def main():
 Arr = []

 print("Enter the num of element:")
 iSize=int(input())
 
 for i in range(iSize):
        print("Input element is:",i+1)
        iValue=int(input())

        Arr.append(iValue)
  print("Accept Data:",Arr)
  
  print("enter search num")
  iNo1=int(input())
  iRet = sNum(Arr,iNo1)
  print("SEARCHED ELEMENT IS:",iRet)
  
  #iValue1=int(input("SEARCH ELEMENT:"))
  
if __name__=="__main__":
  main()