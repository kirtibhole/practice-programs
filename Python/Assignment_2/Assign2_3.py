#3. Write a program which accept one number from user and return its factorial. 
#Input : 5 Output : 120 

def Factorial(n):
          icnt=1
          while n>0:
                    icnt=icnt*n
                    n=n-1
          return icnt

def main():

    iNO=(int(input("Enter the number")))
    Factorial(iNO)
    print("Factorial ",Factorial(iNO))
if __name__=="__main__":
   main()