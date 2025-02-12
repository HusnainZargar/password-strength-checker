#include<iostream>
using namespace std;

void interface();
void countChecker(string);
void passwordStrengthChecker(int,int,int,int,int);
void result(string,string);

int main()
{
      interface();
}
                
void interface()
{
   string password;
   system("cls");
   cout<<"\t------------------------------------------------------------------"<<endl;
   cout<<"\t                 --- Password Strength Checker ---"<<endl;
   cout<<"\t   Time to Crack Passwords Using Brute Force (NVIDIA RTX 4090) "<<endl;
   cout<<"\t------------------------------------------------------------------"<<endl;
   cout<<"\n\t Enter Your Password: ";
   getline(cin,password);

   if (password.empty())      // Check if the password entered is empty
   {
       cout<<"\n\t *** Sorry! Password cannot be Empty! "<<endl;
       cout<<"\n\t Enter Any Key to Try Again! ";
       _getwch();
       return interface();
   }
   
   for(int i=0; i<password.length(); i++)   // Check if it contains any whitespaces
   {
       if(int(password[i])==32)
       {
           cout<<"\n\t *** Sorry! Don't Enter WhiteSpace in Your Password! ***"<<endl;
           cout<<"\n\t Enter Any Key to Try Again! ";
           _getwch();
           return interface();
       }
   }  

   if (password.length()<8)   // password should not be less than 8 characters
   {
     cout<<"\n\t *** Minimum Length should be 8 Characters"<<endl;
     cout<<"\n\t Enter Any Key to Try Again! ";
     _getwch();
     return interface();
   }

   countChecker(password);  // If all good, then pass to the countChecker function
}
void countChecker(string password)
{
    int totalCount= password.length();
    int upperCaseCount=0;
    int lowerCaseCount=0;
    int digitCount=0;
    int specialCount=0;
   for(int i=0; i<password.length(); i++)   // counts total characters, upper and lowercase, numbers and Special digits
   {
      if (isalpha(password[i]))
      {
        if (isupper(password[i]))
        {
            upperCaseCount++;
        }
        else lowerCaseCount++;
      }
      else if (isdigit(password[i]))
      {
        digitCount++;
      }
      else specialCount++;
   }                                   // After count is completed, pass to the passwordStrengthChecker Function
    passwordStrengthChecker(upperCaseCount,lowerCaseCount,digitCount,specialCount,totalCount); 
}
void passwordStrengthChecker(int upperCaseCount, int lowerCaseCount, int digitCount, int specialCount, int totalCount)
{
    string passwordStrength;
    string timeToCrack;
          // Algorithm to check password Strength and time to crack it (using NVIDIA RTX 4090) and pass it to the result function
    if (totalCount>=16)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="90 Billion Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="30 Billion Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Very Strong";
         timeToCrack="680,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="2,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==16)
      {
         passwordStrength="Very Strong";
         timeToCrack="63,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==16)
      {
         passwordStrength="Moderate";
         timeToCrack="1.2 Days";
         result(passwordStrength,timeToCrack);
      }
      
    }
    else if (totalCount==15)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="9.6 Billion Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="6 Billion Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Very Strong";
         timeToCrack="17,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="90 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==15)
      {
         passwordStrength="Very Strong";
         timeToCrack="1,968 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==15)
      {
         passwordStrength="Weak";
         timeToCrack="2.8 Hours";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==14)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="10.3 Million Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="5 Million Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Very Strong";
         timeToCrack="500 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Strong";
         timeToCrack="4 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==14)
      {
         passwordStrength="Very Strong";
         timeToCrack="61.5 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==14)
      {
         passwordStrength="Weak";
         timeToCrack="16.7 Minutes";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==13)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="109,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="50,000 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Very Strong";
         timeToCrack="13 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Strong";
         timeToCrack="40 Days";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==13)
      {
         passwordStrength="Strong";
         timeToCrack="2 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==13)
      {
         passwordStrength="Weak";
         timeToCrack="2 Minutes";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==12)
   {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="1,160 Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Very Strong";
         timeToCrack="500 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Strong";
         timeToCrack="2.4 Months";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Moderate";
         timeToCrack="1.5 Days";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==12)
      {
         passwordStrength="Strong";
         timeToCrack="23 Days";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==12)
      {
         passwordStrength="Weak";
         timeToCrack="10 Seconds";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==11)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Strong";
         timeToCrack="10 Years";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Strong";
         timeToCrack="5 Years";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Moderate";
         timeToCrack="1 Day";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="1.5 Hours";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==11)
      {
         passwordStrength="Weak";
         timeToCrack="10 Hours";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==11)
      {
         passwordStrength="Weak";
         timeToCrack="1 Second";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==10)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Strong";
         timeToCrack="37 Days";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Moderate";
         timeToCrack="15 Days";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Weak";
         timeToCrack="35 Minutes";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="2 Minutes";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==10)
      {
         passwordStrength="Weak";
         timeToCrack="18 Minutes";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==10)
      {
         passwordStrength="Weak";
         timeToCrack="Less than 1 Second";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==9)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="9.6 Hours";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="5 Hours";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Weak";
         timeToCrack="1 Minute";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="3 Seconds";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==9)
      {
         passwordStrength="Weak";
         timeToCrack="35 Seconds";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==9)
      {
         passwordStrength="Weak";
         timeToCrack="Less than 1 Second";
         result(passwordStrength,timeToCrack);
      }
    }
    else if (totalCount==8)
    {
      if (upperCaseCount>=1 && lowerCaseCount>=1 && digitCount>=1 && specialCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="6 Minutes";
         result(passwordStrength,timeToCrack);
      }
      else if ((upperCaseCount>=1 || lowerCaseCount>=1) && specialCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="1 Hour";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount>=1 && (lowerCaseCount>=1 || upperCaseCount>=1))
      {
         passwordStrength="Weak";
         timeToCrack="2 Seconds";
         result(passwordStrength,timeToCrack);
      }
      else if (lowerCaseCount>=1 || upperCaseCount>=1)
      {
         passwordStrength="Weak";
         timeToCrack="Less than 1 Second";
         result(passwordStrength,timeToCrack);
      }
      else if (specialCount==8)
      {
         passwordStrength="Weak";
         timeToCrack="Less than 1 Second";
         result(passwordStrength,timeToCrack);
      }
      else if (digitCount==8)
      {
         passwordStrength="Weak";
         timeToCrack="Less than 1 Second";
         result(passwordStrength,timeToCrack);
      }
    }    
}
void result (string passwordStrength, string timeToCrack)
{   
     cout<<"\n\t------------------------------------------------------------------"<<endl;
     cout<<"\t ---- Your Password Strength is "<<passwordStrength<<"! "<<endl;
     cout<<"\t ---- It will Take Approximately "<<timeToCrack<<" To Brute Force"<<endl;
     cout<<"\t------------------------------------------------------------------"<<endl;
     cout<<"\n\n\t ---- Enter Any Key to Continoue: ";
     _getwch();
     return interface();   
}