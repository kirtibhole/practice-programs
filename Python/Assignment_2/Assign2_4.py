#4.Write a program which accept one number form user and return addition of its factors. 
#Input : 12 Output : 16 (1+2+3+4+6)

def Factorial_Add(iNO):
          icnt=1
          sum=0
          while iNO>icnt:
                    if iNO%icnt==0:
                              sum=sum+icnt
                    icnt=icnt+1
          return sum

def main():

    iValue=(int(input("Enter the  number")))
	
    print("Sum is",+Factorial_Add(iValue))

if __name__=="__main__":
   main()