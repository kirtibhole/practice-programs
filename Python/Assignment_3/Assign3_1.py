#1.Write a program which accept N numbers from user and store it into List. Return addition of all
#elements from that List.

#Input : Number of elements : 6
#Input Elements : 13 5 45 7 4 56
#Output : 130 


def Add(LIST):
 iSum =0
 for i in range(len(LIST)):                      #range() sequence of no interation
   iSum = iSum + LIST[i]
 return iSum

def main():
 Arr=[]
 print("Enter elements:")
 iSize = int(input())
 
 for i in range(iSize):
   print("INPUT ELEMENT IS:",i+1)
   iValue=int(input())
   Arr.append(iValue)                           # Insert that element into List
   
   print("acept data",Arr)
   iRet = Add(Arr)
   
   print("Addition of elements:",iRet)
 
if __name__=="__main__":
  main()