#Write a program which accept number from user and print that number of “*” on screen.
#Input : 5 Output : * * * * * 


def Pattrn(iNo):
   for iNo in range(iNo):
     print("*")

	 
def main():
  #print("Enter number")
  iValue=(int(input("Enter the num:")))
  Pattrn(iValue)
 
if __name__=="__main__":
  main()
  