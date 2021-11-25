#3. Write a program which contains one function named as Add() which accepts two numbers
#from user and return addition of that two numbers.
#Input : 11 5 Output : 16 

def Add(iValue1,iValue2):
  iRet=iValue1 + iValue2
  return iRet
	
def main():
	iNo=int(input("Enter number"))
	iNo1=int(input("Enter number"))
	iAns=Add(iNo,iNo1)
	print("Addition is :",iAns)	

if __name__=="__main__":
	main()

 

