print("Welcome to Database Admin Program")                                                                  
log_on_information = {
"admin00" : "admin",
"john" : "12345678",
"rajan" : "23456781",
"george" : "34567812",
"joel" : "45678123",
}

username = input("Enter username : ")

if username in log_on_information.keys():
   password = input("Enter password : ")
   if password in log_on_information.values():
       print("You have successfully logged in!")
       if username == "admin00":
           print(log_on_information)
       else:
           change_password = input("Would you like to change your password (yes/no) : ")
           if (change_password == "yes"):
               new_password = input("Enter new password which should contain atleast 8 characters : ")
               if (len(new_password) >= 8):
                   print("New password updated")
                   print("Username : " + username)
                   print("Password : " + new_password)
               else:
                   print("Your password does not contain 8 letters")
           else: 
               print("Goodbye") 
   else:
       print("Incorrect Password")
else:
    print("Incorrect Username")
# Welcome to Database Admin Program
# Enter username : admin00
# Enter password : admin
# You have successfully logged in!
# {'admin00': 'admin', 'john': '12345678', 'rajan': '23456781', 'george': '34567812', 'joel': '45678123'}

# Welcome to Database Admin Program
# Enter username : john
# Enter password : 12345678
# You have successfully logged in!
# Would you like to change your password (yes/no) : yes
# Enter new password which should contain atleast 8 characters : 87654321
# New password updated
# Username : john
# Password : 87654321