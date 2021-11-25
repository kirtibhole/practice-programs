# Write a program which contains one function that accept one number from user and returns
#true if number is divisible by 5 otherwise return false.
#Input : 8 Output : False
#Input : 25 Output : True 

def num(iNo):
  if(iNo % 5 ==0):
     print("Divisible")
     return True
  
  else:
    print("Not divisitble")
    return False
	 
	 
def main():

 print("Enter number")
 iValue=int(input())
 num(iValue)
 
if __name__=="__main__":
  main()
 