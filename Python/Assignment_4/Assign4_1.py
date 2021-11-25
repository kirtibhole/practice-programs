#Write a program which contains one lambda function which accepts one parameter and return
#power of two.
#Input : 4 Output : 16
#Input : 6 Output : 64 

Pow = lambda iNo:iNo * iNo

def main():
 print("enter value:")
 iValue=int(input())
 
 iRet=Pow(iValue)
 print("Power is:",iRet)
 
if __name__=="__main__":
  main()
 ##########Second Way##########
 
#fp = lambda iNo:iNo ** 2
 
#def main():
 #   value1=int(input("enter 1 no"))
  # print(ret)

#if __name__=="__main__":
  #  main()