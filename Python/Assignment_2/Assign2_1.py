#1.Create on module named as Arithmetic which contains 4 functions as Add() for addition, Sub()
#for subtraction, Mult() for multiplication and Div() for division. All functions accepts two
#parameters as number and perform the operation. Write on python program which call all the
#functions from Arithmetic module by accepting the parameters from user. 

import Arithmatic
def main():
	iNo1=int(input("Enter First Number"))
	iNo2=int(input("Enter Scound Number"))
	
	iAns=Arithmatic.Addition(iNo1,iNo2)
	print("Addition is :",iAns)	
	
	iAns=Arithmatic.Sub(iNo1,iNo2)
    print("Substraction is is :",iAns)

    iAns=Arithmatic.MUL(iNo1,iNo2)
    print("Multiplication is :",iAns)

    iAns=Arithmatic.Div(iNo1,iNo2)
    print("Division is :",iAns)	
	
	

if __name__=="__main__":
	main()