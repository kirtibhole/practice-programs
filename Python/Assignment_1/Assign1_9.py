#9. Write a program which display first 10 even numbers on screen.
#Output : 2 4 6 8 10 12 14 16 18 20

def even(iNo):
     icnt1=icnt2=1
     while icnt2<=iNo:
       if icnt1%2==0:
          print(icnt1)  
       icnt2=icnt2+1
       icnt1=icnt1+1
	 

def main():
     print("enter num")
     iValue=int(input())
     even(iValue)
  
if __name__=="__main__":
  main()  
