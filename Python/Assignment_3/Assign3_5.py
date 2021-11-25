#Write a program which accept N numbers from user and store it into List. Return addition of all
#prime numbers from that List. Main python file accepts N numbers from user and pass each
#number to ChkPrime() function which is part of our user defined module named as
#MarvellousNum. Name of the function from main python file should be ListPrime().

  
def main():
 Arr=[]
 print("Enter elements:")
 iSize = int(input())
 
 for i in range(iSize):
   print("INPUT ELEMENT IS:",i+1)
   iValue=int(input())
   Arr.append(iValue)                           # Insert that element into List
   
   print("acept data",Arr)
   iRet = Prime(Arr)
   
   print("Addition of elements:",iRet)
 
if __name__=="__main__":
  main() 