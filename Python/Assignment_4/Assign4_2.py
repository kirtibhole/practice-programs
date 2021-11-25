Mult = lambda iNo1,iNo2 : iNo1*iNo2

def main():

   iValue1 = int(input("Enter first num:"))
   iValue2 = int(input("Enter sec num:"))
   iRet = Mult(iValue1,iValue2)
   print(iRet)
   
if __name__=="__main__":
   main()