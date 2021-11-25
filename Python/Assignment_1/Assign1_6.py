#6.Write a program which accept number from user and check whether that number is positive or
#negative or zero.
#Input : 11 Output : Positive Number
#Input : -8 Output : Negative Number
#Input : 0 Output : Zero 




def chknum(iNo):
   
   if iNo > 0:
    print("Num is positive")

   elif iNo < 0:
    print("Num is Negative")
	
   elif iNo == 0:
    print("Number is Zero")
	
	
def main():
 print("Enter the number")
 iValue=int(input())
 chknum(iValue)

if __name__=="__main__":
  main()
 
		

 
